/****************************************************************************
** Meta object code from reading C++ file 'opmapgadgetwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../ground/gcs/src/plugins/opmap/opmapgadgetwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opmapgadgetwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OPMapGadgetWidget_t {
    QByteArrayData data[96];
    char stringdata0[2154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPMapGadgetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPMapGadgetWidget_t qt_meta_stringdata_OPMapGadgetWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OPMapGadgetWidget"
QT_MOC_LITERAL(1, 18, 29), // "defaultLocationAndZoomChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 3), // "lng"
QT_MOC_LITERAL(4, 53, 3), // "lat"
QT_MOC_LITERAL(5, 57, 4), // "zoom"
QT_MOC_LITERAL(6, 62, 22), // "defaultSafeAreaChanged"
QT_MOC_LITERAL(7, 85, 16), // "safe_area_radius"
QT_MOC_LITERAL(8, 102, 12), // "showSafeArea"
QT_MOC_LITERAL(9, 115, 21), // "overlayOpacityChanged"
QT_MOC_LITERAL(10, 137, 19), // "homePositionUpdated"
QT_MOC_LITERAL(11, 157, 10), // "UAVObject*"
QT_MOC_LITERAL(12, 168, 18), // "onTelemetryConnect"
QT_MOC_LITERAL(13, 187, 21), // "onTelemetryDisconnect"
QT_MOC_LITERAL(14, 209, 18), // "wpDoubleClickEvent"
QT_MOC_LITERAL(15, 228, 13), // "WayPointItem*"
QT_MOC_LITERAL(16, 242, 2), // "wp"
QT_MOC_LITERAL(17, 245, 14), // "updatePosition"
QT_MOC_LITERAL(18, 260, 14), // "updateMousePos"
QT_MOC_LITERAL(19, 275, 6), // "zoomIn"
QT_MOC_LITERAL(20, 282, 7), // "zoomOut"
QT_MOC_LITERAL(21, 290, 26), // "on_toolButtonZoomM_clicked"
QT_MOC_LITERAL(22, 317, 26), // "on_toolButtonZoomP_clicked"
QT_MOC_LITERAL(23, 344, 28), // "on_toolButtonMapHome_clicked"
QT_MOC_LITERAL(24, 373, 27), // "on_toolButtonMapUAV_clicked"
QT_MOC_LITERAL(25, 401, 34), // "on_toolButtonMapUAVheading_cl..."
QT_MOC_LITERAL(26, 436, 35), // "on_horizontalSliderZoom_slide..."
QT_MOC_LITERAL(27, 472, 8), // "position"
QT_MOC_LITERAL(28, 481, 41), // "on_toolButtonMagicWaypointMap..."
QT_MOC_LITERAL(29, 523, 34), // "on_toolButtonNormalMapMode_cl..."
QT_MOC_LITERAL(30, 558, 33), // "on_toolButtonHomeWaypoint_cli..."
QT_MOC_LITERAL(31, 592, 29), // "on_toolButtonMoveToWP_clicked"
QT_MOC_LITERAL(32, 622, 28), // "on_toolButtonHomeSet_clicked"
QT_MOC_LITERAL(33, 651, 34), // "on_toolButtonClearUAVTrail_cl..."
QT_MOC_LITERAL(34, 686, 31), // "on_toolButtonPlanEditor_clicked"
QT_MOC_LITERAL(35, 718, 33), // "on_toolButtonSaveSettings_cli..."
QT_MOC_LITERAL(36, 752, 11), // "zoomChanged"
QT_MOC_LITERAL(37, 764, 5), // "zoomt"
QT_MOC_LITERAL(38, 770, 5), // "zoomd"
QT_MOC_LITERAL(39, 776, 24), // "OnCurrentPositionChanged"
QT_MOC_LITERAL(40, 801, 22), // "internals::PointLatLng"
QT_MOC_LITERAL(41, 824, 5), // "point"
QT_MOC_LITERAL(42, 830, 18), // "OnTileLoadComplete"
QT_MOC_LITERAL(43, 849, 15), // "OnTileLoadStart"
QT_MOC_LITERAL(44, 865, 18), // "OnTilesStillToLoad"
QT_MOC_LITERAL(45, 884, 6), // "number"
QT_MOC_LITERAL(46, 891, 21), // "onReloadAct_triggered"
QT_MOC_LITERAL(47, 913, 18), // "onRipAct_triggered"
QT_MOC_LITERAL(48, 932, 36), // "onCopyMouseLatLonToClipAct_tr..."
QT_MOC_LITERAL(49, 969, 33), // "onCopyMouseLatToClipAct_trigg..."
QT_MOC_LITERAL(50, 1003, 33), // "onCopyMouseLonToClipAct_trigg..."
QT_MOC_LITERAL(51, 1037, 24), // "onShowCompassAct_toggled"
QT_MOC_LITERAL(52, 1062, 4), // "show"
QT_MOC_LITERAL(53, 1067, 25), // "onShowDiagnostics_toggled"
QT_MOC_LITERAL(54, 1093, 17), // "onShowNav_toggled"
QT_MOC_LITERAL(55, 1111, 21), // "onShowUAVInfo_toggled"
QT_MOC_LITERAL(56, 1133, 20), // "onShowUAVAct_toggled"
QT_MOC_LITERAL(57, 1154, 21), // "onShowHomeAct_toggled"
QT_MOC_LITERAL(58, 1176, 26), // "onShowTrailLineAct_toggled"
QT_MOC_LITERAL(59, 1203, 22), // "onShowTrailAct_toggled"
QT_MOC_LITERAL(60, 1226, 23), // "onGoZoomInAct_triggered"
QT_MOC_LITERAL(61, 1250, 24), // "onGoZoomOutAct_triggered"
QT_MOC_LITERAL(62, 1275, 27), // "onGoMouseClickAct_triggered"
QT_MOC_LITERAL(63, 1303, 22), // "onSetHomeAct_triggered"
QT_MOC_LITERAL(64, 1326, 21), // "onGoHomeAct_triggered"
QT_MOC_LITERAL(65, 1348, 20), // "onGoUAVAct_triggered"
QT_MOC_LITERAL(66, 1369, 30), // "onFollowUAVpositionAct_toggled"
QT_MOC_LITERAL(67, 1400, 7), // "checked"
QT_MOC_LITERAL(68, 1408, 29), // "onFollowUAVheadingAct_toggled"
QT_MOC_LITERAL(69, 1438, 33), // "onOpenWayPointEditorAct_trigg..."
QT_MOC_LITERAL(70, 1472, 41), // "onAddWayPointAct_triggeredFro..."
QT_MOC_LITERAL(71, 1514, 34), // "onAddWayPointAct_triggeredFro..."
QT_MOC_LITERAL(72, 1549, 26), // "onAddWayPointAct_triggered"
QT_MOC_LITERAL(73, 1576, 5), // "coord"
QT_MOC_LITERAL(74, 1582, 27), // "onEditWayPointAct_triggered"
QT_MOC_LITERAL(75, 1610, 27), // "onLockWayPointAct_triggered"
QT_MOC_LITERAL(76, 1638, 29), // "onDeleteWayPointAct_triggered"
QT_MOC_LITERAL(77, 1668, 29), // "onClearWayPointsAct_triggered"
QT_MOC_LITERAL(78, 1698, 27), // "onMapModeActGroup_triggered"
QT_MOC_LITERAL(79, 1726, 8), // "QAction*"
QT_MOC_LITERAL(80, 1735, 6), // "action"
QT_MOC_LITERAL(81, 1742, 24), // "onZoomActGroup_triggered"
QT_MOC_LITERAL(82, 1767, 32), // "onHomeMagicWaypointAct_triggered"
QT_MOC_LITERAL(83, 1800, 25), // "onShowSafeAreaAct_toggled"
QT_MOC_LITERAL(84, 1826, 28), // "onSafeAreaActGroup_triggered"
QT_MOC_LITERAL(85, 1855, 32), // "onUAVTrailTypeActGroup_triggered"
QT_MOC_LITERAL(86, 1888, 28), // "onClearUAVtrailAct_triggered"
QT_MOC_LITERAL(87, 1917, 32), // "onUAVTrailTimeActGroup_triggered"
QT_MOC_LITERAL(88, 1950, 36), // "onUAVTrailDistanceActGroup_tr..."
QT_MOC_LITERAL(89, 1987, 33), // "onMaxUpdateRateActGroup_trigg..."
QT_MOC_LITERAL(90, 2021, 27), // "onChangeDefaultLocalAndZoom"
QT_MOC_LITERAL(91, 2049, 17), // "on_tbFind_clicked"
QT_MOC_LITERAL(92, 2067, 17), // "onHomeDoubleClick"
QT_MOC_LITERAL(93, 2085, 9), // "HomeItem*"
QT_MOC_LITERAL(94, 2095, 34), // "onOverlayOpacityActGroup_trig..."
QT_MOC_LITERAL(95, 2130, 23) // "on_leFind_returnPressed"

    },
    "OPMapGadgetWidget\0defaultLocationAndZoomChanged\0"
    "\0lng\0lat\0zoom\0defaultSafeAreaChanged\0"
    "safe_area_radius\0showSafeArea\0"
    "overlayOpacityChanged\0homePositionUpdated\0"
    "UAVObject*\0onTelemetryConnect\0"
    "onTelemetryDisconnect\0wpDoubleClickEvent\0"
    "WayPointItem*\0wp\0updatePosition\0"
    "updateMousePos\0zoomIn\0zoomOut\0"
    "on_toolButtonZoomM_clicked\0"
    "on_toolButtonZoomP_clicked\0"
    "on_toolButtonMapHome_clicked\0"
    "on_toolButtonMapUAV_clicked\0"
    "on_toolButtonMapUAVheading_clicked\0"
    "on_horizontalSliderZoom_sliderMoved\0"
    "position\0on_toolButtonMagicWaypointMapMode_clicked\0"
    "on_toolButtonNormalMapMode_clicked\0"
    "on_toolButtonHomeWaypoint_clicked\0"
    "on_toolButtonMoveToWP_clicked\0"
    "on_toolButtonHomeSet_clicked\0"
    "on_toolButtonClearUAVTrail_clicked\0"
    "on_toolButtonPlanEditor_clicked\0"
    "on_toolButtonSaveSettings_clicked\0"
    "zoomChanged\0zoomt\0zoomd\0"
    "OnCurrentPositionChanged\0"
    "internals::PointLatLng\0point\0"
    "OnTileLoadComplete\0OnTileLoadStart\0"
    "OnTilesStillToLoad\0number\0"
    "onReloadAct_triggered\0onRipAct_triggered\0"
    "onCopyMouseLatLonToClipAct_triggered\0"
    "onCopyMouseLatToClipAct_triggered\0"
    "onCopyMouseLonToClipAct_triggered\0"
    "onShowCompassAct_toggled\0show\0"
    "onShowDiagnostics_toggled\0onShowNav_toggled\0"
    "onShowUAVInfo_toggled\0onShowUAVAct_toggled\0"
    "onShowHomeAct_toggled\0onShowTrailLineAct_toggled\0"
    "onShowTrailAct_toggled\0onGoZoomInAct_triggered\0"
    "onGoZoomOutAct_triggered\0"
    "onGoMouseClickAct_triggered\0"
    "onSetHomeAct_triggered\0onGoHomeAct_triggered\0"
    "onGoUAVAct_triggered\0"
    "onFollowUAVpositionAct_toggled\0checked\0"
    "onFollowUAVheadingAct_toggled\0"
    "onOpenWayPointEditorAct_triggered\0"
    "onAddWayPointAct_triggeredFromContextMenu\0"
    "onAddWayPointAct_triggeredFromThis\0"
    "onAddWayPointAct_triggered\0coord\0"
    "onEditWayPointAct_triggered\0"
    "onLockWayPointAct_triggered\0"
    "onDeleteWayPointAct_triggered\0"
    "onClearWayPointsAct_triggered\0"
    "onMapModeActGroup_triggered\0QAction*\0"
    "action\0onZoomActGroup_triggered\0"
    "onHomeMagicWaypointAct_triggered\0"
    "onShowSafeAreaAct_toggled\0"
    "onSafeAreaActGroup_triggered\0"
    "onUAVTrailTypeActGroup_triggered\0"
    "onClearUAVtrailAct_triggered\0"
    "onUAVTrailTimeActGroup_triggered\0"
    "onUAVTrailDistanceActGroup_triggered\0"
    "onMaxUpdateRateActGroup_triggered\0"
    "onChangeDefaultLocalAndZoom\0"
    "on_tbFind_clicked\0onHomeDoubleClick\0"
    "HomeItem*\0onOverlayOpacityActGroup_triggered\0"
    "on_leFind_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPMapGadgetWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  384,    2, 0x06 /* Public */,
       6,    2,  391,    2, 0x06 /* Public */,
       9,    1,  396,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  399,    2, 0x0a /* Public */,
      12,    0,  402,    2, 0x0a /* Public */,
      13,    0,  403,    2, 0x0a /* Public */,
      14,    1,  404,    2, 0x08 /* Private */,
      17,    0,  407,    2, 0x08 /* Private */,
      18,    0,  408,    2, 0x08 /* Private */,
      19,    0,  409,    2, 0x08 /* Private */,
      20,    0,  410,    2, 0x08 /* Private */,
      21,    0,  411,    2, 0x08 /* Private */,
      22,    0,  412,    2, 0x08 /* Private */,
      23,    0,  413,    2, 0x08 /* Private */,
      24,    0,  414,    2, 0x08 /* Private */,
      25,    0,  415,    2, 0x08 /* Private */,
      26,    1,  416,    2, 0x08 /* Private */,
      28,    0,  419,    2, 0x08 /* Private */,
      29,    0,  420,    2, 0x08 /* Private */,
      30,    0,  421,    2, 0x08 /* Private */,
      31,    0,  422,    2, 0x08 /* Private */,
      32,    0,  423,    2, 0x08 /* Private */,
      33,    0,  424,    2, 0x08 /* Private */,
      34,    0,  425,    2, 0x08 /* Private */,
      35,    0,  426,    2, 0x08 /* Private */,
      36,    3,  427,    2, 0x08 /* Private */,
      39,    1,  434,    2, 0x08 /* Private */,
      42,    0,  437,    2, 0x08 /* Private */,
      43,    0,  438,    2, 0x08 /* Private */,
      44,    1,  439,    2, 0x08 /* Private */,
      46,    0,  442,    2, 0x08 /* Private */,
      47,    0,  443,    2, 0x08 /* Private */,
      48,    0,  444,    2, 0x08 /* Private */,
      49,    0,  445,    2, 0x08 /* Private */,
      50,    0,  446,    2, 0x08 /* Private */,
      51,    1,  447,    2, 0x08 /* Private */,
      53,    1,  450,    2, 0x08 /* Private */,
      54,    1,  453,    2, 0x08 /* Private */,
      55,    1,  456,    2, 0x08 /* Private */,
      56,    1,  459,    2, 0x08 /* Private */,
      57,    1,  462,    2, 0x08 /* Private */,
      58,    1,  465,    2, 0x08 /* Private */,
      59,    1,  468,    2, 0x08 /* Private */,
      60,    0,  471,    2, 0x08 /* Private */,
      61,    0,  472,    2, 0x08 /* Private */,
      62,    0,  473,    2, 0x08 /* Private */,
      63,    0,  474,    2, 0x08 /* Private */,
      64,    0,  475,    2, 0x08 /* Private */,
      65,    0,  476,    2, 0x08 /* Private */,
      66,    1,  477,    2, 0x08 /* Private */,
      68,    1,  480,    2, 0x08 /* Private */,
      69,    0,  483,    2, 0x08 /* Private */,
      70,    0,  484,    2, 0x08 /* Private */,
      71,    0,  485,    2, 0x08 /* Private */,
      72,    1,  486,    2, 0x08 /* Private */,
      74,    0,  489,    2, 0x08 /* Private */,
      75,    0,  490,    2, 0x08 /* Private */,
      76,    0,  491,    2, 0x08 /* Private */,
      77,    0,  492,    2, 0x08 /* Private */,
      78,    1,  493,    2, 0x08 /* Private */,
      81,    1,  496,    2, 0x08 /* Private */,
      82,    0,  499,    2, 0x08 /* Private */,
      83,    1,  500,    2, 0x08 /* Private */,
      84,    1,  503,    2, 0x08 /* Private */,
      85,    1,  506,    2, 0x08 /* Private */,
      86,    0,  509,    2, 0x08 /* Private */,
      87,    1,  510,    2, 0x08 /* Private */,
      88,    1,  513,    2, 0x08 /* Private */,
      89,    1,  516,    2, 0x08 /* Private */,
      90,    0,  519,    2, 0x08 /* Private */,
      91,    0,  520,    2, 0x08 /* Private */,
      92,    1,  521,    2, 0x08 /* Private */,
      94,    1,  524,    2, 0x08 /* Private */,
      95,    0,  527,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    7,    8,
    QMetaType::Void, QMetaType::QReal,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   37,    5,   38,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   73,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 93,    2,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void,

       0        // eod
};

void OPMapGadgetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OPMapGadgetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->defaultLocationAndZoomChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->defaultSafeAreaChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->overlayOpacityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->homePositionUpdated((*reinterpret_cast< UAVObject*(*)>(_a[1]))); break;
        case 4: _t->onTelemetryConnect(); break;
        case 5: _t->onTelemetryDisconnect(); break;
        case 6: _t->wpDoubleClickEvent((*reinterpret_cast< WayPointItem*(*)>(_a[1]))); break;
        case 7: _t->updatePosition(); break;
        case 8: _t->updateMousePos(); break;
        case 9: _t->zoomIn(); break;
        case 10: _t->zoomOut(); break;
        case 11: _t->on_toolButtonZoomM_clicked(); break;
        case 12: _t->on_toolButtonZoomP_clicked(); break;
        case 13: _t->on_toolButtonMapHome_clicked(); break;
        case 14: _t->on_toolButtonMapUAV_clicked(); break;
        case 15: _t->on_toolButtonMapUAVheading_clicked(); break;
        case 16: _t->on_horizontalSliderZoom_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_toolButtonMagicWaypointMapMode_clicked(); break;
        case 18: _t->on_toolButtonNormalMapMode_clicked(); break;
        case 19: _t->on_toolButtonHomeWaypoint_clicked(); break;
        case 20: _t->on_toolButtonMoveToWP_clicked(); break;
        case 21: _t->on_toolButtonHomeSet_clicked(); break;
        case 22: _t->on_toolButtonClearUAVTrail_clicked(); break;
        case 23: _t->on_toolButtonPlanEditor_clicked(); break;
        case 24: _t->on_toolButtonSaveSettings_clicked(); break;
        case 25: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 26: _t->OnCurrentPositionChanged((*reinterpret_cast< internals::PointLatLng(*)>(_a[1]))); break;
        case 27: _t->OnTileLoadComplete(); break;
        case 28: _t->OnTileLoadStart(); break;
        case 29: _t->OnTilesStillToLoad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->onReloadAct_triggered(); break;
        case 31: _t->onRipAct_triggered(); break;
        case 32: _t->onCopyMouseLatLonToClipAct_triggered(); break;
        case 33: _t->onCopyMouseLatToClipAct_triggered(); break;
        case 34: _t->onCopyMouseLonToClipAct_triggered(); break;
        case 35: _t->onShowCompassAct_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->onShowDiagnostics_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->onShowNav_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->onShowUAVInfo_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->onShowUAVAct_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->onShowHomeAct_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->onShowTrailLineAct_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->onShowTrailAct_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->onGoZoomInAct_triggered(); break;
        case 44: _t->onGoZoomOutAct_triggered(); break;
        case 45: _t->onGoMouseClickAct_triggered(); break;
        case 46: _t->onSetHomeAct_triggered(); break;
        case 47: _t->onGoHomeAct_triggered(); break;
        case 48: _t->onGoUAVAct_triggered(); break;
        case 49: _t->onFollowUAVpositionAct_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->onFollowUAVheadingAct_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->onOpenWayPointEditorAct_triggered(); break;
        case 52: _t->onAddWayPointAct_triggeredFromContextMenu(); break;
        case 53: _t->onAddWayPointAct_triggeredFromThis(); break;
        case 54: _t->onAddWayPointAct_triggered((*reinterpret_cast< internals::PointLatLng(*)>(_a[1]))); break;
        case 55: _t->onEditWayPointAct_triggered(); break;
        case 56: _t->onLockWayPointAct_triggered(); break;
        case 57: _t->onDeleteWayPointAct_triggered(); break;
        case 58: _t->onClearWayPointsAct_triggered(); break;
        case 59: _t->onMapModeActGroup_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 60: _t->onZoomActGroup_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 61: _t->onHomeMagicWaypointAct_triggered(); break;
        case 62: _t->onShowSafeAreaAct_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->onSafeAreaActGroup_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 64: _t->onUAVTrailTypeActGroup_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 65: _t->onClearUAVtrailAct_triggered(); break;
        case 66: _t->onUAVTrailTimeActGroup_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 67: _t->onUAVTrailDistanceActGroup_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 68: _t->onMaxUpdateRateActGroup_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 69: _t->onChangeDefaultLocalAndZoom(); break;
        case 70: _t->on_tbFind_clicked(); break;
        case 71: _t->onHomeDoubleClick((*reinterpret_cast< HomeItem*(*)>(_a[1]))); break;
        case 72: _t->onOverlayOpacityActGroup_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 73: _t->on_leFind_returnPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UAVObject* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WayPointItem* >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 71:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HomeItem* >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OPMapGadgetWidget::*)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPMapGadgetWidget::defaultLocationAndZoomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OPMapGadgetWidget::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPMapGadgetWidget::defaultSafeAreaChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OPMapGadgetWidget::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OPMapGadgetWidget::overlayOpacityChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OPMapGadgetWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_OPMapGadgetWidget.data,
    qt_meta_data_OPMapGadgetWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPMapGadgetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPMapGadgetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPMapGadgetWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OPMapGadgetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    }
    return _id;
}

// SIGNAL 0
void OPMapGadgetWidget::defaultLocationAndZoomChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OPMapGadgetWidget::defaultSafeAreaChanged(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OPMapGadgetWidget::overlayOpacityChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
