/****************************************************************************
** Meta object code from reading C++ file 'revosettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../revosettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'revosettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RevoSettingsConstants_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RevoSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RevoSettingsConstants_t qt_meta_stringdata_RevoSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 21), // "RevoSettingsConstants"
QT_MOC_LITERAL(1, 22, 4), // "Enum"
QT_MOC_LITERAL(2, 27, 20) // "FusionAlgorithmCount"

    },
    "RevoSettingsConstants\0Enum\0"
    "FusionAlgorithmCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RevoSettingsConstants[] = {

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
       1,    1, 0x0,    1,   19,

 // enum data: key, value
       2, uint(RevoSettingsConstants::FusionAlgorithmCount),

       0        // eod
};

void RevoSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RevoSettingsConstants::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RevoSettingsConstants.data,
    qt_meta_data_RevoSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RevoSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RevoSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RevoSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RevoSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RevoSettings_FusionAlgorithm_t {
    QByteArrayData data[11];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RevoSettings_FusionAlgorithm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RevoSettings_FusionAlgorithm_t qt_meta_stringdata_RevoSettings_FusionAlgorithm = {
    {
QT_MOC_LITERAL(0, 0, 28), // "RevoSettings_FusionAlgorithm"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 4), // "None"
QT_MOC_LITERAL(3, 39, 18), // "BasicComplementary"
QT_MOC_LITERAL(4, 58, 16), // "ComplementaryMag"
QT_MOC_LITERAL(5, 75, 26), // "ComplementaryMagGPSOutdoor"
QT_MOC_LITERAL(6, 102, 11), // "INS13Indoor"
QT_MOC_LITERAL(7, 114, 18), // "GPSNavigationINS13"
QT_MOC_LITERAL(8, 133, 20), // "GPSNavigationINS13CF"
QT_MOC_LITERAL(9, 154, 18), // "TestingINSIndoorCF"
QT_MOC_LITERAL(10, 173, 13) // "AcroNoSensors"

    },
    "RevoSettings_FusionAlgorithm\0Enum\0"
    "None\0BasicComplementary\0ComplementaryMag\0"
    "ComplementaryMagGPSOutdoor\0INS13Indoor\0"
    "GPSNavigationINS13\0GPSNavigationINS13CF\0"
    "TestingINSIndoorCF\0AcroNoSensors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RevoSettings_FusionAlgorithm[] = {

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
       1,    1, 0x0,    9,   19,

 // enum data: key, value
       2, uint(RevoSettings_FusionAlgorithm::None),
       3, uint(RevoSettings_FusionAlgorithm::BasicComplementary),
       4, uint(RevoSettings_FusionAlgorithm::ComplementaryMag),
       5, uint(RevoSettings_FusionAlgorithm::ComplementaryMagGPSOutdoor),
       6, uint(RevoSettings_FusionAlgorithm::INS13Indoor),
       7, uint(RevoSettings_FusionAlgorithm::GPSNavigationINS13),
       8, uint(RevoSettings_FusionAlgorithm::GPSNavigationINS13CF),
       9, uint(RevoSettings_FusionAlgorithm::TestingINSIndoorCF),
      10, uint(RevoSettings_FusionAlgorithm::AcroNoSensors),

       0        // eod
};

void RevoSettings_FusionAlgorithm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RevoSettings_FusionAlgorithm::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RevoSettings_FusionAlgorithm.data,
    qt_meta_data_RevoSettings_FusionAlgorithm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RevoSettings_FusionAlgorithm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RevoSettings_FusionAlgorithm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RevoSettings_FusionAlgorithm.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RevoSettings_FusionAlgorithm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RevoSettings_t {
    QByteArrayData data[95];
    char stringdata0[2956];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RevoSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RevoSettings_t qt_meta_stringdata_RevoSettings = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RevoSettings"
QT_MOC_LITERAL(1, 13, 35), // "baroGPSOffsetCorrectionAlphaC..."
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 5), // "value"
QT_MOC_LITERAL(4, 56, 35), // "BaroGPSOffsetCorrectionAlphaC..."
QT_MOC_LITERAL(5, 92, 31), // "magnetometerMaxDeviationChanged"
QT_MOC_LITERAL(6, 124, 5), // "index"
QT_MOC_LITERAL(7, 130, 31), // "MagnetometerMaxDeviationChanged"
QT_MOC_LITERAL(8, 162, 38), // "magnetometerMaxDeviationWarni..."
QT_MOC_LITERAL(9, 201, 39), // "MagnetometerMaxDeviation_Warn..."
QT_MOC_LITERAL(10, 241, 36), // "magnetometerMaxDeviationError..."
QT_MOC_LITERAL(11, 278, 37), // "MagnetometerMaxDeviation_Erro..."
QT_MOC_LITERAL(12, 316, 35), // "baroTempCorrectionPolynomialC..."
QT_MOC_LITERAL(13, 352, 35), // "BaroTempCorrectionPolynomialC..."
QT_MOC_LITERAL(14, 388, 36), // "baroTempCorrectionPolynomiala..."
QT_MOC_LITERAL(15, 425, 37), // "BaroTempCorrectionPolynomial_..."
QT_MOC_LITERAL(16, 463, 36), // "baroTempCorrectionPolynomialb..."
QT_MOC_LITERAL(17, 500, 37), // "BaroTempCorrectionPolynomial_..."
QT_MOC_LITERAL(18, 538, 36), // "baroTempCorrectionPolynomialc..."
QT_MOC_LITERAL(19, 575, 37), // "BaroTempCorrectionPolynomial_..."
QT_MOC_LITERAL(20, 613, 36), // "baroTempCorrectionPolynomiald..."
QT_MOC_LITERAL(21, 650, 37), // "BaroTempCorrectionPolynomial_..."
QT_MOC_LITERAL(22, 688, 31), // "baroTempCorrectionExtentChanged"
QT_MOC_LITERAL(23, 720, 31), // "BaroTempCorrectionExtentChanged"
QT_MOC_LITERAL(24, 752, 34), // "baroTempCorrectionExtentminCh..."
QT_MOC_LITERAL(25, 787, 35), // "BaroTempCorrectionExtent_minC..."
QT_MOC_LITERAL(26, 823, 34), // "baroTempCorrectionExtentmaxCh..."
QT_MOC_LITERAL(27, 858, 35), // "BaroTempCorrectionExtent_maxC..."
QT_MOC_LITERAL(28, 894, 41), // "velocityPostProcessingLowPass..."
QT_MOC_LITERAL(29, 936, 41), // "VelocityPostProcessingLowPass..."
QT_MOC_LITERAL(30, 978, 22), // "fusionAlgorithmChanged"
QT_MOC_LITERAL(31, 1001, 34), // "RevoSettings_FusionAlgorithm:..."
QT_MOC_LITERAL(32, 1036, 22), // "FusionAlgorithmChanged"
QT_MOC_LITERAL(33, 1059, 31), // "setBaroGPSOffsetCorrectionAlpha"
QT_MOC_LITERAL(34, 1091, 27), // "setMagnetometerMaxDeviation"
QT_MOC_LITERAL(35, 1119, 34), // "setMagnetometerMaxDeviationWa..."
QT_MOC_LITERAL(36, 1154, 35), // "setMagnetometerMaxDeviation_W..."
QT_MOC_LITERAL(37, 1190, 32), // "setMagnetometerMaxDeviationError"
QT_MOC_LITERAL(38, 1223, 33), // "setMagnetometerMaxDeviation_E..."
QT_MOC_LITERAL(39, 1257, 31), // "setBaroTempCorrectionPolynomial"
QT_MOC_LITERAL(40, 1289, 32), // "setBaroTempCorrectionPolynomiala"
QT_MOC_LITERAL(41, 1322, 33), // "setBaroTempCorrectionPolynomi..."
QT_MOC_LITERAL(42, 1356, 32), // "setBaroTempCorrectionPolynomialb"
QT_MOC_LITERAL(43, 1389, 33), // "setBaroTempCorrectionPolynomi..."
QT_MOC_LITERAL(44, 1423, 32), // "setBaroTempCorrectionPolynomialc"
QT_MOC_LITERAL(45, 1456, 33), // "setBaroTempCorrectionPolynomi..."
QT_MOC_LITERAL(46, 1490, 32), // "setBaroTempCorrectionPolynomiald"
QT_MOC_LITERAL(47, 1523, 33), // "setBaroTempCorrectionPolynomi..."
QT_MOC_LITERAL(48, 1557, 27), // "setBaroTempCorrectionExtent"
QT_MOC_LITERAL(49, 1585, 30), // "setBaroTempCorrectionExtentmin"
QT_MOC_LITERAL(50, 1616, 31), // "setBaroTempCorrectionExtent_min"
QT_MOC_LITERAL(51, 1648, 30), // "setBaroTempCorrectionExtentmax"
QT_MOC_LITERAL(52, 1679, 31), // "setBaroTempCorrectionExtent_max"
QT_MOC_LITERAL(53, 1711, 37), // "setVelocityPostProcessingLowP..."
QT_MOC_LITERAL(54, 1749, 18), // "setFusionAlgorithm"
QT_MOC_LITERAL(55, 1768, 17), // "emitNotifications"
QT_MOC_LITERAL(56, 1786, 31), // "getBaroGPSOffsetCorrectionAlpha"
QT_MOC_LITERAL(57, 1818, 24), // "magnetometerMaxDeviation"
QT_MOC_LITERAL(58, 1843, 27), // "getMagnetometerMaxDeviation"
QT_MOC_LITERAL(59, 1871, 35), // "getMagnetometerMaxDeviation_W..."
QT_MOC_LITERAL(60, 1907, 33), // "getMagnetometerMaxDeviation_E..."
QT_MOC_LITERAL(61, 1941, 28), // "baroTempCorrectionPolynomial"
QT_MOC_LITERAL(62, 1970, 31), // "getBaroTempCorrectionPolynomial"
QT_MOC_LITERAL(63, 2002, 33), // "getBaroTempCorrectionPolynomi..."
QT_MOC_LITERAL(64, 2036, 33), // "getBaroTempCorrectionPolynomi..."
QT_MOC_LITERAL(65, 2070, 33), // "getBaroTempCorrectionPolynomi..."
QT_MOC_LITERAL(66, 2104, 33), // "getBaroTempCorrectionPolynomi..."
QT_MOC_LITERAL(67, 2138, 24), // "baroTempCorrectionExtent"
QT_MOC_LITERAL(68, 2163, 27), // "getBaroTempCorrectionExtent"
QT_MOC_LITERAL(69, 2191, 31), // "getBaroTempCorrectionExtent_min"
QT_MOC_LITERAL(70, 2223, 31), // "getBaroTempCorrectionExtent_max"
QT_MOC_LITERAL(71, 2255, 37), // "getVelocityPostProcessingLowP..."
QT_MOC_LITERAL(72, 2293, 18), // "getFusionAlgorithm"
QT_MOC_LITERAL(73, 2312, 28), // "baroGPSOffsetCorrectionAlpha"
QT_MOC_LITERAL(74, 2341, 31), // "magnetometerMaxDeviationWarning"
QT_MOC_LITERAL(75, 2373, 29), // "magnetometerMaxDeviationError"
QT_MOC_LITERAL(76, 2403, 29), // "baroTempCorrectionPolynomiala"
QT_MOC_LITERAL(77, 2433, 29), // "baroTempCorrectionPolynomialb"
QT_MOC_LITERAL(78, 2463, 29), // "baroTempCorrectionPolynomialc"
QT_MOC_LITERAL(79, 2493, 29), // "baroTempCorrectionPolynomiald"
QT_MOC_LITERAL(80, 2523, 27), // "baroTempCorrectionExtentmin"
QT_MOC_LITERAL(81, 2551, 27), // "baroTempCorrectionExtentmax"
QT_MOC_LITERAL(82, 2579, 34), // "velocityPostProcessingLowPass..."
QT_MOC_LITERAL(83, 2614, 15), // "fusionAlgorithm"
QT_MOC_LITERAL(84, 2630, 28), // "BaroGPSOffsetCorrectionAlpha"
QT_MOC_LITERAL(85, 2659, 32), // "MagnetometerMaxDeviation_Warning"
QT_MOC_LITERAL(86, 2692, 30), // "MagnetometerMaxDeviation_Error"
QT_MOC_LITERAL(87, 2723, 30), // "BaroTempCorrectionPolynomial_a"
QT_MOC_LITERAL(88, 2754, 30), // "BaroTempCorrectionPolynomial_b"
QT_MOC_LITERAL(89, 2785, 30), // "BaroTempCorrectionPolynomial_c"
QT_MOC_LITERAL(90, 2816, 30), // "BaroTempCorrectionPolynomial_d"
QT_MOC_LITERAL(91, 2847, 28), // "BaroTempCorrectionExtent_min"
QT_MOC_LITERAL(92, 2876, 28), // "BaroTempCorrectionExtent_max"
QT_MOC_LITERAL(93, 2905, 34), // "VelocityPostProcessingLowPass..."
QT_MOC_LITERAL(94, 2940, 15) // "FusionAlgorithm"

    },
    "RevoSettings\0baroGPSOffsetCorrectionAlphaChanged\0"
    "\0value\0BaroGPSOffsetCorrectionAlphaChanged\0"
    "magnetometerMaxDeviationChanged\0index\0"
    "MagnetometerMaxDeviationChanged\0"
    "magnetometerMaxDeviationWarningChanged\0"
    "MagnetometerMaxDeviation_WarningChanged\0"
    "magnetometerMaxDeviationErrorChanged\0"
    "MagnetometerMaxDeviation_ErrorChanged\0"
    "baroTempCorrectionPolynomialChanged\0"
    "BaroTempCorrectionPolynomialChanged\0"
    "baroTempCorrectionPolynomialaChanged\0"
    "BaroTempCorrectionPolynomial_aChanged\0"
    "baroTempCorrectionPolynomialbChanged\0"
    "BaroTempCorrectionPolynomial_bChanged\0"
    "baroTempCorrectionPolynomialcChanged\0"
    "BaroTempCorrectionPolynomial_cChanged\0"
    "baroTempCorrectionPolynomialdChanged\0"
    "BaroTempCorrectionPolynomial_dChanged\0"
    "baroTempCorrectionExtentChanged\0"
    "BaroTempCorrectionExtentChanged\0"
    "baroTempCorrectionExtentminChanged\0"
    "BaroTempCorrectionExtent_minChanged\0"
    "baroTempCorrectionExtentmaxChanged\0"
    "BaroTempCorrectionExtent_maxChanged\0"
    "velocityPostProcessingLowPassAlphaChanged\0"
    "VelocityPostProcessingLowPassAlphaChanged\0"
    "fusionAlgorithmChanged\0"
    "RevoSettings_FusionAlgorithm::Enum\0"
    "FusionAlgorithmChanged\0"
    "setBaroGPSOffsetCorrectionAlpha\0"
    "setMagnetometerMaxDeviation\0"
    "setMagnetometerMaxDeviationWarning\0"
    "setMagnetometerMaxDeviation_Warning\0"
    "setMagnetometerMaxDeviationError\0"
    "setMagnetometerMaxDeviation_Error\0"
    "setBaroTempCorrectionPolynomial\0"
    "setBaroTempCorrectionPolynomiala\0"
    "setBaroTempCorrectionPolynomial_a\0"
    "setBaroTempCorrectionPolynomialb\0"
    "setBaroTempCorrectionPolynomial_b\0"
    "setBaroTempCorrectionPolynomialc\0"
    "setBaroTempCorrectionPolynomial_c\0"
    "setBaroTempCorrectionPolynomiald\0"
    "setBaroTempCorrectionPolynomial_d\0"
    "setBaroTempCorrectionExtent\0"
    "setBaroTempCorrectionExtentmin\0"
    "setBaroTempCorrectionExtent_min\0"
    "setBaroTempCorrectionExtentmax\0"
    "setBaroTempCorrectionExtent_max\0"
    "setVelocityPostProcessingLowPassAlpha\0"
    "setFusionAlgorithm\0emitNotifications\0"
    "getBaroGPSOffsetCorrectionAlpha\0"
    "magnetometerMaxDeviation\0"
    "getMagnetometerMaxDeviation\0"
    "getMagnetometerMaxDeviation_Warning\0"
    "getMagnetometerMaxDeviation_Error\0"
    "baroTempCorrectionPolynomial\0"
    "getBaroTempCorrectionPolynomial\0"
    "getBaroTempCorrectionPolynomial_a\0"
    "getBaroTempCorrectionPolynomial_b\0"
    "getBaroTempCorrectionPolynomial_c\0"
    "getBaroTempCorrectionPolynomial_d\0"
    "baroTempCorrectionExtent\0"
    "getBaroTempCorrectionExtent\0"
    "getBaroTempCorrectionExtent_min\0"
    "getBaroTempCorrectionExtent_max\0"
    "getVelocityPostProcessingLowPassAlpha\0"
    "getFusionAlgorithm\0baroGPSOffsetCorrectionAlpha\0"
    "magnetometerMaxDeviationWarning\0"
    "magnetometerMaxDeviationError\0"
    "baroTempCorrectionPolynomiala\0"
    "baroTempCorrectionPolynomialb\0"
    "baroTempCorrectionPolynomialc\0"
    "baroTempCorrectionPolynomiald\0"
    "baroTempCorrectionExtentmin\0"
    "baroTempCorrectionExtentmax\0"
    "velocityPostProcessingLowPassAlpha\0"
    "fusionAlgorithm\0BaroGPSOffsetCorrectionAlpha\0"
    "MagnetometerMaxDeviation_Warning\0"
    "MagnetometerMaxDeviation_Error\0"
    "BaroTempCorrectionPolynomial_a\0"
    "BaroTempCorrectionPolynomial_b\0"
    "BaroTempCorrectionPolynomial_c\0"
    "BaroTempCorrectionPolynomial_d\0"
    "BaroTempCorrectionExtent_min\0"
    "BaroTempCorrectionExtent_max\0"
    "VelocityPostProcessingLowPassAlpha\0"
    "FusionAlgorithm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RevoSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      69,   14, // methods
      22,  560, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  359,    2, 0x06 /* Public */,
       4,    1,  362,    2, 0x06 /* Public */,
       5,    2,  365,    2, 0x06 /* Public */,
       7,    2,  370,    2, 0x06 /* Public */,
       8,    1,  375,    2, 0x06 /* Public */,
       9,    1,  378,    2, 0x06 /* Public */,
      10,    1,  381,    2, 0x06 /* Public */,
      11,    1,  384,    2, 0x06 /* Public */,
      12,    2,  387,    2, 0x06 /* Public */,
      13,    2,  392,    2, 0x06 /* Public */,
      14,    1,  397,    2, 0x06 /* Public */,
      15,    1,  400,    2, 0x06 /* Public */,
      16,    1,  403,    2, 0x06 /* Public */,
      17,    1,  406,    2, 0x06 /* Public */,
      18,    1,  409,    2, 0x06 /* Public */,
      19,    1,  412,    2, 0x06 /* Public */,
      20,    1,  415,    2, 0x06 /* Public */,
      21,    1,  418,    2, 0x06 /* Public */,
      22,    2,  421,    2, 0x06 /* Public */,
      23,    2,  426,    2, 0x06 /* Public */,
      24,    1,  431,    2, 0x06 /* Public */,
      25,    1,  434,    2, 0x06 /* Public */,
      26,    1,  437,    2, 0x06 /* Public */,
      27,    1,  440,    2, 0x06 /* Public */,
      28,    1,  443,    2, 0x06 /* Public */,
      29,    1,  446,    2, 0x06 /* Public */,
      30,    1,  449,    2, 0x06 /* Public */,
      32,    1,  452,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    1,  455,    2, 0x0a /* Public */,
      34,    2,  458,    2, 0x0a /* Public */,
      35,    1,  463,    2, 0x0a /* Public */,
      36,    1,  466,    2, 0x0a /* Public */,
      37,    1,  469,    2, 0x0a /* Public */,
      38,    1,  472,    2, 0x0a /* Public */,
      39,    2,  475,    2, 0x0a /* Public */,
      40,    1,  480,    2, 0x0a /* Public */,
      41,    1,  483,    2, 0x0a /* Public */,
      42,    1,  486,    2, 0x0a /* Public */,
      43,    1,  489,    2, 0x0a /* Public */,
      44,    1,  492,    2, 0x0a /* Public */,
      45,    1,  495,    2, 0x0a /* Public */,
      46,    1,  498,    2, 0x0a /* Public */,
      47,    1,  501,    2, 0x0a /* Public */,
      48,    2,  504,    2, 0x0a /* Public */,
      49,    1,  509,    2, 0x0a /* Public */,
      50,    1,  512,    2, 0x0a /* Public */,
      51,    1,  515,    2, 0x0a /* Public */,
      52,    1,  518,    2, 0x0a /* Public */,
      53,    1,  521,    2, 0x0a /* Public */,
      54,    1,  524,    2, 0x0a /* Public */,
      54,    1,  527,    2, 0x0a /* Public */,
      55,    0,  530,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      56,    0,  531,    2, 0x02 /* Public */,
      57,    1,  532,    2, 0x02 /* Public */,
      58,    1,  535,    2, 0x02 /* Public */,
      59,    0,  538,    2, 0x02 /* Public */,
      60,    0,  539,    2, 0x02 /* Public */,
      61,    1,  540,    2, 0x02 /* Public */,
      62,    1,  543,    2, 0x02 /* Public */,
      63,    0,  546,    2, 0x02 /* Public */,
      64,    0,  547,    2, 0x02 /* Public */,
      65,    0,  548,    2, 0x02 /* Public */,
      66,    0,  549,    2, 0x02 /* Public */,
      67,    1,  550,    2, 0x02 /* Public */,
      68,    1,  553,    2, 0x02 /* Public */,
      69,    0,  556,    2, 0x02 /* Public */,
      70,    0,  557,    2, 0x02 /* Public */,
      71,    0,  558,    2, 0x02 /* Public */,
      72,    0,  559,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 31,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    6,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 31,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float, QMetaType::UInt,    6,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UChar,

 // properties: name, type, flags
      73, QMetaType::Float, 0x00495103,
      74, QMetaType::Float, 0x00495103,
      75, QMetaType::Float, 0x00495103,
      76, QMetaType::Float, 0x00495103,
      77, QMetaType::Float, 0x00495103,
      78, QMetaType::Float, 0x00495103,
      79, QMetaType::Float, 0x00495103,
      80, QMetaType::Float, 0x00495103,
      81, QMetaType::Float, 0x00495103,
      82, QMetaType::Float, 0x00495103,
      83, 0x80000000 | 31, 0x0049510b,
      84, QMetaType::Float, 0x00495103,
      85, QMetaType::Float, 0x00495103,
      86, QMetaType::Float, 0x00495103,
      87, QMetaType::Float, 0x00495103,
      88, QMetaType::Float, 0x00495103,
      89, QMetaType::Float, 0x00495103,
      90, QMetaType::Float, 0x00495103,
      91, QMetaType::Float, 0x00495103,
      92, QMetaType::Float, 0x00495103,
      93, QMetaType::Float, 0x00495103,
      94, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       4,
       6,
      10,
      12,
      14,
      16,
      20,
      22,
      24,
      26,
       1,
       5,
       7,
      11,
      13,
      15,
      17,
      21,
      23,
      25,
      27,

       0        // eod
};

void RevoSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RevoSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->baroGPSOffsetCorrectionAlphaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->BaroGPSOffsetCorrectionAlphaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->magnetometerMaxDeviationChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 3: _t->MagnetometerMaxDeviationChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 4: _t->magnetometerMaxDeviationWarningChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->MagnetometerMaxDeviation_WarningChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->magnetometerMaxDeviationErrorChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->MagnetometerMaxDeviation_ErrorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->baroTempCorrectionPolynomialChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->BaroTempCorrectionPolynomialChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->baroTempCorrectionPolynomialaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->BaroTempCorrectionPolynomial_aChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->baroTempCorrectionPolynomialbChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->BaroTempCorrectionPolynomial_bChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->baroTempCorrectionPolynomialcChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->BaroTempCorrectionPolynomial_cChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->baroTempCorrectionPolynomialdChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->BaroTempCorrectionPolynomial_dChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->baroTempCorrectionExtentChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 19: _t->BaroTempCorrectionExtentChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 20: _t->baroTempCorrectionExtentminChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->BaroTempCorrectionExtent_minChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->baroTempCorrectionExtentmaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->BaroTempCorrectionExtent_maxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->velocityPostProcessingLowPassAlphaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 25: _t->VelocityPostProcessingLowPassAlphaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->fusionAlgorithmChanged((*reinterpret_cast< const RevoSettings_FusionAlgorithm::Enum(*)>(_a[1]))); break;
        case 27: _t->FusionAlgorithmChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->setBaroGPSOffsetCorrectionAlpha((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->setMagnetometerMaxDeviation((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 30: _t->setMagnetometerMaxDeviationWarning((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->setMagnetometerMaxDeviation_Warning((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->setMagnetometerMaxDeviationError((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 33: _t->setMagnetometerMaxDeviation_Error((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 34: _t->setBaroTempCorrectionPolynomial((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 35: _t->setBaroTempCorrectionPolynomiala((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 36: _t->setBaroTempCorrectionPolynomial_a((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->setBaroTempCorrectionPolynomialb((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 38: _t->setBaroTempCorrectionPolynomial_b((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->setBaroTempCorrectionPolynomialc((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 40: _t->setBaroTempCorrectionPolynomial_c((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 41: _t->setBaroTempCorrectionPolynomiald((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 42: _t->setBaroTempCorrectionPolynomial_d((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 43: _t->setBaroTempCorrectionExtent((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 44: _t->setBaroTempCorrectionExtentmin((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->setBaroTempCorrectionExtent_min((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->setBaroTempCorrectionExtentmax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->setBaroTempCorrectionExtent_max((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->setVelocityPostProcessingLowPassAlpha((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->setFusionAlgorithm((*reinterpret_cast< const RevoSettings_FusionAlgorithm::Enum(*)>(_a[1]))); break;
        case 50: _t->setFusionAlgorithm((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 51: _t->emitNotifications(); break;
        case 52: { float _r = _t->getBaroGPSOffsetCorrectionAlpha();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 53: { float _r = _t->magnetometerMaxDeviation((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 54: { float _r = _t->getMagnetometerMaxDeviation((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 55: { float _r = _t->getMagnetometerMaxDeviation_Warning();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 56: { float _r = _t->getMagnetometerMaxDeviation_Error();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 57: { float _r = _t->baroTempCorrectionPolynomial((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 58: { float _r = _t->getBaroTempCorrectionPolynomial((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 59: { float _r = _t->getBaroTempCorrectionPolynomial_a();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 60: { float _r = _t->getBaroTempCorrectionPolynomial_b();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 61: { float _r = _t->getBaroTempCorrectionPolynomial_c();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 62: { float _r = _t->getBaroTempCorrectionPolynomial_d();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 63: { float _r = _t->baroTempCorrectionExtent((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 64: { float _r = _t->getBaroTempCorrectionExtent((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 65: { float _r = _t->getBaroTempCorrectionExtent_min();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 66: { float _r = _t->getBaroTempCorrectionExtent_max();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 67: { float _r = _t->getVelocityPostProcessingLowPassAlpha();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { quint8 _r = _t->getFusionAlgorithm();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RevoSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::baroGPSOffsetCorrectionAlphaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::BaroGPSOffsetCorrectionAlphaChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::magnetometerMaxDeviationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::MagnetometerMaxDeviationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::magnetometerMaxDeviationWarningChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::MagnetometerMaxDeviation_WarningChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::magnetometerMaxDeviationErrorChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::MagnetometerMaxDeviation_ErrorChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::baroTempCorrectionPolynomialChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::BaroTempCorrectionPolynomialChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::baroTempCorrectionPolynomialaChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::BaroTempCorrectionPolynomial_aChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::baroTempCorrectionPolynomialbChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::BaroTempCorrectionPolynomial_bChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::baroTempCorrectionPolynomialcChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::BaroTempCorrectionPolynomial_cChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::baroTempCorrectionPolynomialdChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::BaroTempCorrectionPolynomial_dChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::baroTempCorrectionExtentChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::BaroTempCorrectionExtentChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::baroTempCorrectionExtentminChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::BaroTempCorrectionExtent_minChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::baroTempCorrectionExtentmaxChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::BaroTempCorrectionExtent_maxChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::velocityPostProcessingLowPassAlphaChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::VelocityPostProcessingLowPassAlphaChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(const RevoSettings_FusionAlgorithm::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::fusionAlgorithmChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (RevoSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RevoSettings::FusionAlgorithmChanged)) {
                *result = 27;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RevoSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->baroGPSOffsetCorrectionAlpha(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->magnetometerMaxDeviationWarning(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->magnetometerMaxDeviationError(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->baroTempCorrectionPolynomiala(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->baroTempCorrectionPolynomialb(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->baroTempCorrectionPolynomialc(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->baroTempCorrectionPolynomiald(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->baroTempCorrectionExtentmin(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->baroTempCorrectionExtentmax(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->velocityPostProcessingLowPassAlpha(); break;
        case 10: *reinterpret_cast< RevoSettings_FusionAlgorithm::Enum*>(_v) = _t->fusionAlgorithm(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getBaroGPSOffsetCorrectionAlpha(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->getMagnetometerMaxDeviation_Warning(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getMagnetometerMaxDeviation_Error(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getBaroTempCorrectionPolynomial_a(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getBaroTempCorrectionPolynomial_b(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getBaroTempCorrectionPolynomial_c(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getBaroTempCorrectionPolynomial_d(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getBaroTempCorrectionExtent_min(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getBaroTempCorrectionExtent_max(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getVelocityPostProcessingLowPassAlpha(); break;
        case 21: *reinterpret_cast< quint8*>(_v) = _t->getFusionAlgorithm(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RevoSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBaroGPSOffsetCorrectionAlpha(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setMagnetometerMaxDeviationWarning(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setMagnetometerMaxDeviationError(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setBaroTempCorrectionPolynomiala(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setBaroTempCorrectionPolynomialb(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setBaroTempCorrectionPolynomialc(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setBaroTempCorrectionPolynomiald(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setBaroTempCorrectionExtentmin(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setBaroTempCorrectionExtentmax(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setVelocityPostProcessingLowPassAlpha(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setFusionAlgorithm(*reinterpret_cast< RevoSettings_FusionAlgorithm::Enum*>(_v)); break;
        case 11: _t->setBaroGPSOffsetCorrectionAlpha(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setMagnetometerMaxDeviation_Warning(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setMagnetometerMaxDeviation_Error(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setBaroTempCorrectionPolynomial_a(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setBaroTempCorrectionPolynomial_b(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setBaroTempCorrectionPolynomial_c(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setBaroTempCorrectionPolynomial_d(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setBaroTempCorrectionExtent_min(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setBaroTempCorrectionExtent_max(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setVelocityPostProcessingLowPassAlpha(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setFusionAlgorithm(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_RevoSettings[] = {
        &RevoSettings_FusionAlgorithm::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject RevoSettings::staticMetaObject = { {
    &UAVDataObject::staticMetaObject,
    qt_meta_stringdata_RevoSettings.data,
    qt_meta_data_RevoSettings,
    qt_static_metacall,
    qt_meta_extradata_RevoSettings,
    nullptr
} };


const QMetaObject *RevoSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RevoSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RevoSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int RevoSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 69)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 69;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RevoSettings::baroGPSOffsetCorrectionAlphaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RevoSettings::BaroGPSOffsetCorrectionAlphaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RevoSettings::magnetometerMaxDeviationChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RevoSettings::MagnetometerMaxDeviationChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RevoSettings::magnetometerMaxDeviationWarningChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RevoSettings::MagnetometerMaxDeviation_WarningChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RevoSettings::magnetometerMaxDeviationErrorChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RevoSettings::MagnetometerMaxDeviation_ErrorChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RevoSettings::baroTempCorrectionPolynomialChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RevoSettings::BaroTempCorrectionPolynomialChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RevoSettings::baroTempCorrectionPolynomialaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RevoSettings::BaroTempCorrectionPolynomial_aChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RevoSettings::baroTempCorrectionPolynomialbChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RevoSettings::BaroTempCorrectionPolynomial_bChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void RevoSettings::baroTempCorrectionPolynomialcChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void RevoSettings::BaroTempCorrectionPolynomial_cChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void RevoSettings::baroTempCorrectionPolynomialdChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void RevoSettings::BaroTempCorrectionPolynomial_dChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void RevoSettings::baroTempCorrectionExtentChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void RevoSettings::BaroTempCorrectionExtentChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void RevoSettings::baroTempCorrectionExtentminChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void RevoSettings::BaroTempCorrectionExtent_minChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void RevoSettings::baroTempCorrectionExtentmaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void RevoSettings::BaroTempCorrectionExtent_maxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void RevoSettings::velocityPostProcessingLowPassAlphaChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void RevoSettings::VelocityPostProcessingLowPassAlphaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void RevoSettings::fusionAlgorithmChanged(const RevoSettings_FusionAlgorithm::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void RevoSettings::FusionAlgorithmChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
