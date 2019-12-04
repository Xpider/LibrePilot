/********************************************************************************
** Form generated from reading UI file 'opmap_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPMAP_WIDGET_H
#define UI_OPMAP_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OPMap_Widget
{
public:
    QVBoxLayout *verticalLayout_5;
    QFrame *frameTopBar;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *layoutWidgetStatusBar_2;
    QToolButton *toolButtonNormalMapMode;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonMagicWaypointMapMode;
    QFrame *line_6;
    QLabel *label_2;
    QLineEdit *leFind;
    QToolButton *tbFind;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QFrame *lineWaypoint;
    QToolButton *toolButtonMoveToWP;
    QToolButton *toolButtonHomeWaypoint;
    QFrame *line_8;
    QToolButton *toolButtonMapHome;
    QToolButton *toolButtonMapUAV;
    QToolButton *toolButtonMapUAVheading;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *mapWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QFrame *frameMapControls;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QToolButton *toolButtonZoomP;
    QSlider *horizontalSliderZoom;
    QToolButton *toolButtonZoomM;
    QFrame *line_7;
    QToolButton *toolButtonHomeSet;
    QToolButton *toolButtonClearUAVTrail;
    QFrame *line_9;
    QToolButton *toolButtonPlanEditor;
    QFrame *line_10;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_11;
    QToolButton *toolButtonSaveSettings;
    QFrame *frameStatusBar;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *layoutWidgetStatusBar;
    QSpacerItem *horizontalSpacer_7;
    QLabel *labelUAVPos;
    QFrame *line_3;
    QLabel *labelMapPos;
    QFrame *line_4;
    QLabel *labelMousePos;
    QFrame *line;
    QLabel *labelMapZoom;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_3;
    QProgressBar *progressBarMap;

    void setupUi(QWidget *OPMap_Widget)
    {
        if (OPMap_Widget->objectName().isEmpty())
            OPMap_Widget->setObjectName(QString::fromUtf8("OPMap_Widget"));
        OPMap_Widget->resize(746, 572);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OPMap_Widget->sizePolicy().hasHeightForWidth());
        OPMap_Widget->setSizePolicy(sizePolicy);
        OPMap_Widget->setMouseTracking(false);
        OPMap_Widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(OPMap_Widget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        frameTopBar = new QFrame(OPMap_Widget);
        frameTopBar->setObjectName(QString::fromUtf8("frameTopBar"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameTopBar->sizePolicy().hasHeightForWidth());
        frameTopBar->setSizePolicy(sizePolicy1);
        frameTopBar->setMinimumSize(QSize(0, 32));
        frameTopBar->setMaximumSize(QSize(16777215, 40));
        frameTopBar->setContextMenuPolicy(Qt::NoContextMenu);
        frameTopBar->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(71, 71, 71, 255));\n"
"color: rgba(0, 0, 0, 128);\n"
"}\n"
"\n"
"QLabel {\n"
"background-color: transparent;\n"
"/* background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(0, 0, 0, 80), stop:1 rgba(0, 0, 0, 80)); */\n"
"color: rgb(255, 255, 255);\n"
"/*border: 1px solid black;*/\n"
"border: none;\n"
"border-radius: 2px;\n"
"}\n"
"\n"
"QToolButton {	/* all types of tool button */ \n"
"background-color: transparent;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"/*height: 24px;*/\n"
"\n"
"/*border-style: none;*/\n"
"/* border: 1px solid rgba(0, 0, 0, 64);  */\n"
"/* border: 0px; */\n"
"border-radius: 0px;\n"
"/*border-radius: 3px;*/\n"
"}\n"
"QToolButton:disabled {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(128, 128, 128, 128), stop:1 rgba(128, 128, 128, 128));\n"
"color: rgba(255, 255, 255, 128);\n"
"\n"
"/*height"
                        ": 24px;*/\n"
"\n"
"border: none;\n"
"border-radius: 0px;\n"
"/*\n"
"border: 1px  solid rgb(255, 255, 255); \n"
"border-radius: 0px;\n"
"border-top-color: rgba(0, 0, 0, 64);\n"
"border-right-color: rgba(0, 0, 0, 64);\n"
"border-bottom-color: rgba(255, 255, 255, 64);\n"
"border-left-color: rgba(255, 255, 255, 64);\n"
"*/\n"
"}\n"
"QToolButton:hover {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255,128), stop:1 rgba(180, 180, 180, 128));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"/*height: 24px;*/\n"
"\n"
"border: 0px; \n"
"border-radius: 0px;\n"
"/*border-radius: 3px;*/\n"
"}\n"
"QToolButton:pressed {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(64, 64, 64, 255));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"/*height: 24px;*/\n"
"\n"
"border: none;\n"
"border-radius: 0px;\n"
"/*\n"
"border: 1px  solid rgb(255, 255, 255); \n"
"border-radius: 0px;\n"
"border-top-color: rgba(0, 0, 0, 64);\n"
"b"
                        "order-right-color: rgba(0, 0, 0, 64);\n"
"border-bottom-color: rgba(255, 255, 255, 64);\n"
"border-left-color: rgba(255, 255, 255, 64);\n"
"*/\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(64, 64, 64, 255));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"/*height: 24px;*/\n"
"\n"
"border: none;\n"
"border-radius: 0px;\n"
"/*\n"
"border: 1px  solid rgb(255, 255, 255); \n"
"border-radius: 0px;\n"
"border-top-color: rgba(0, 0, 0, 64);\n"
"border-right-color: rgba(0, 0, 0, 64);\n"
"border-bottom-color: rgba(255, 255, 255, 64);\n"
"border-left-color: rgba(255, 255, 255, 64);\n"
"*/\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: transparent;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"/*height: 24px;*/\n"
"\n"
"/*border-style: none;*/\n"
"/* border: 1px solid rgba(0, 0, 0, 64);  */\n"
"/* border: 0px; */\n"
"border-radius: 0px;\n"
"/*border-radius: 3px;*/\n"
"}\n"
"QPushButton:disabled {\n"
"background-color: qlin"
                        "eargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(128, 128, 128, 128), stop:1 rgba(128, 128, 128, 128));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"/*height: 24px;*/\n"
"\n"
"border: none;\n"
"border-radius: 0px;\n"
"/*\n"
"border: 1px  solid rgb(255, 255, 255); \n"
"border-radius: 0px;\n"
"border-top-color: rgba(0, 0, 0, 64);\n"
"border-right-color: rgba(0, 0, 0, 64);\n"
"border-bottom-color: rgba(255, 255, 255, 64);\n"
"border-left-color: rgba(255, 255, 255, 64);\n"
"*/\n"
"}\n"
"QPushButton:hover {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255,128), stop:1 rgba(180, 180, 180, 128));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"/*height: 24px;*/\n"
"\n"
"border: 0px; \n"
"border-radius: 0px;\n"
"/*border-radius: 3px;*/\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(64, 64, 64, 255));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"/*height: 24px;*/\n"
""
                        "\n"
"border: none;\n"
"border-radius: 0px;\n"
"/*\n"
"border: 1px  solid rgb(255, 255, 255); \n"
"border-radius: 0px;\n"
"border-top-color: rgba(0, 0, 0, 64);\n"
"border-right-color: rgba(0, 0, 0, 64);\n"
"border-bottom-color: rgba(255, 255, 255, 64);\n"
"border-left-color: rgba(255, 255, 255, 64);\n"
"*/\n"
"}\n"
"\n"
"QComboBox {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"color: rgba(255, 255, 255, 255);\n"
"border: 1px solid rgba(0, 0, 0, 128); \n"
"border-radius: 0px;\n"
"}\n"
"QComboBox::down-arrow:on {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"top: 1px; left: 1px;	/* move the arrow when the popup is open */\n"
"}\n"
"QComboBox::down-arrow {\n"
"     image: url(:/opmap/images/combobox_down_arrow.png);\n"
"}\n"
"QComboBox:drop-down {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5"
                        ", y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(71, 71, 71, 255));\n"
"border-left: 1px solid rgba(0, 0, 0, 128);\n"
"/*     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     border-top-right-radius: 1px;\n"
"     border-bottom-right-radius: 1px; */\n"
"}\n"
"QComboBox QAbstractItemView { /* the drop down list */\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 1px solid rgba(0, 0, 0, 128);\n"
"selection-background-color: rgb(160, 160, 255);\n"
"border-radius: 2px;\n"
"}\n"
""));
        frameTopBar->setFrameShape(QFrame::NoFrame);
        frameTopBar->setFrameShadow(QFrame::Plain);
        horizontalLayout_4 = new QHBoxLayout(frameTopBar);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        layoutWidgetStatusBar_2 = new QHBoxLayout();
        layoutWidgetStatusBar_2->setSpacing(5);
        layoutWidgetStatusBar_2->setObjectName(QString::fromUtf8("layoutWidgetStatusBar_2"));
        layoutWidgetStatusBar_2->setContentsMargins(8, 5, 8, 5);
        toolButtonNormalMapMode = new QToolButton(frameTopBar);
        toolButtonNormalMapMode->setObjectName(QString::fromUtf8("toolButtonNormalMapMode"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButtonNormalMapMode->sizePolicy().hasHeightForWidth());
        toolButtonNormalMapMode->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(8);
        toolButtonNormalMapMode->setFont(font);
        toolButtonNormalMapMode->setIconSize(QSize(16, 32));
        toolButtonNormalMapMode->setCheckable(true);
        toolButtonNormalMapMode->setChecked(true);
        toolButtonNormalMapMode->setToolButtonStyle(Qt::ToolButtonTextOnly);

        layoutWidgetStatusBar_2->addWidget(toolButtonNormalMapMode);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        layoutWidgetStatusBar_2->addItem(horizontalSpacer);

        toolButtonMagicWaypointMapMode = new QToolButton(frameTopBar);
        toolButtonMagicWaypointMapMode->setObjectName(QString::fromUtf8("toolButtonMagicWaypointMapMode"));
        sizePolicy2.setHeightForWidth(toolButtonMagicWaypointMapMode->sizePolicy().hasHeightForWidth());
        toolButtonMagicWaypointMapMode->setSizePolicy(sizePolicy2);
        toolButtonMagicWaypointMapMode->setFont(font);
        toolButtonMagicWaypointMapMode->setIconSize(QSize(16, 32));
        toolButtonMagicWaypointMapMode->setCheckable(true);
        toolButtonMagicWaypointMapMode->setToolButtonStyle(Qt::ToolButtonTextOnly);

        layoutWidgetStatusBar_2->addWidget(toolButtonMagicWaypointMapMode);

        line_6 = new QFrame(frameTopBar);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setFrameShape(QFrame::VLine);

        layoutWidgetStatusBar_2->addWidget(line_6);

        label_2 = new QLabel(frameTopBar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        layoutWidgetStatusBar_2->addWidget(label_2);

        leFind = new QLineEdit(frameTopBar);
        leFind->setObjectName(QString::fromUtf8("leFind"));

        layoutWidgetStatusBar_2->addWidget(leFind);

        tbFind = new QToolButton(frameTopBar);
        tbFind->setObjectName(QString::fromUtf8("tbFind"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/opmap/images/button_search.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbFind->setIcon(icon);
        tbFind->setIconSize(QSize(22, 22));

        layoutWidgetStatusBar_2->addWidget(tbFind);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutWidgetStatusBar_2->addItem(horizontalSpacer_4);

        label = new QLabel(frameTopBar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        layoutWidgetStatusBar_2->addWidget(label);

        lineWaypoint = new QFrame(frameTopBar);
        lineWaypoint->setObjectName(QString::fromUtf8("lineWaypoint"));
        lineWaypoint->setFrameShadow(QFrame::Plain);
        lineWaypoint->setFrameShape(QFrame::VLine);

        layoutWidgetStatusBar_2->addWidget(lineWaypoint);

        toolButtonMoveToWP = new QToolButton(frameTopBar);
        toolButtonMoveToWP->setObjectName(QString::fromUtf8("toolButtonMoveToWP"));
        sizePolicy2.setHeightForWidth(toolButtonMoveToWP->sizePolicy().hasHeightForWidth());
        toolButtonMoveToWP->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/opmap/images/button_move_to_wp.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonMoveToWP->setIcon(icon1);
        toolButtonMoveToWP->setIconSize(QSize(28, 28));

        layoutWidgetStatusBar_2->addWidget(toolButtonMoveToWP);

        toolButtonHomeWaypoint = new QToolButton(frameTopBar);
        toolButtonHomeWaypoint->setObjectName(QString::fromUtf8("toolButtonHomeWaypoint"));
        sizePolicy2.setHeightForWidth(toolButtonHomeWaypoint->sizePolicy().hasHeightForWidth());
        toolButtonHomeWaypoint->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/opmap/images/button_home_wp.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonHomeWaypoint->setIcon(icon2);
        toolButtonHomeWaypoint->setIconSize(QSize(28, 28));

        layoutWidgetStatusBar_2->addWidget(toolButtonHomeWaypoint);

        line_8 = new QFrame(frameTopBar);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShadow(QFrame::Plain);
        line_8->setFrameShape(QFrame::VLine);

        layoutWidgetStatusBar_2->addWidget(line_8);

        toolButtonMapHome = new QToolButton(frameTopBar);
        toolButtonMapHome->setObjectName(QString::fromUtf8("toolButtonMapHome"));
        sizePolicy2.setHeightForWidth(toolButtonMapHome->sizePolicy().hasHeightForWidth());
        toolButtonMapHome->setSizePolicy(sizePolicy2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/opmap/images/button_home.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonMapHome->setIcon(icon3);
        toolButtonMapHome->setIconSize(QSize(28, 28));
        toolButtonMapHome->setAutoRepeat(false);
        toolButtonMapHome->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButtonMapHome->setAutoRaise(false);

        layoutWidgetStatusBar_2->addWidget(toolButtonMapHome);

        toolButtonMapUAV = new QToolButton(frameTopBar);
        toolButtonMapUAV->setObjectName(QString::fromUtf8("toolButtonMapUAV"));
        sizePolicy2.setHeightForWidth(toolButtonMapUAV->sizePolicy().hasHeightForWidth());
        toolButtonMapUAV->setSizePolicy(sizePolicy2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/opmap/images/button_uav.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonMapUAV->setIcon(icon4);
        toolButtonMapUAV->setIconSize(QSize(28, 28));
        toolButtonMapUAV->setCheckable(true);
        toolButtonMapUAV->setAutoRepeat(false);
        toolButtonMapUAV->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButtonMapUAV->setAutoRaise(false);

        layoutWidgetStatusBar_2->addWidget(toolButtonMapUAV);

        toolButtonMapUAVheading = new QToolButton(frameTopBar);
        toolButtonMapUAVheading->setObjectName(QString::fromUtf8("toolButtonMapUAVheading"));
        sizePolicy2.setHeightForWidth(toolButtonMapUAVheading->sizePolicy().hasHeightForWidth());
        toolButtonMapUAVheading->setSizePolicy(sizePolicy2);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/opmap/images/button_uav_heading.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonMapUAVheading->setIcon(icon5);
        toolButtonMapUAVheading->setIconSize(QSize(28, 28));
        toolButtonMapUAVheading->setCheckable(true);
        toolButtonMapUAVheading->setAutoRepeat(false);
        toolButtonMapUAVheading->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButtonMapUAVheading->setAutoRaise(false);

        layoutWidgetStatusBar_2->addWidget(toolButtonMapUAVheading);


        horizontalLayout_4->addLayout(layoutWidgetStatusBar_2);


        verticalLayout_5->addWidget(frameTopBar);

        splitter = new QSplitter(OPMap_Widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setStyleSheet(QString::fromUtf8("QSplitter::handle {\n"
"/* image: url(images/splitter.png); */\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(71, 71, 71, 255), stop:0.5 rgba(200, 200, 200, 255), stop:1 rgba(110, 110, 110, 255));\n"
"}\n"
"QSplitter::handle:horizontal {\n"
"/* height: 5px; */\n"
"}\n"
"QSplitter::handle:vertical {\n"
"/* width: 5px; */\n"
"}\n"
""));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mapWidget = new QWidget(layoutWidget);
        mapWidget->setObjectName(QString::fromUtf8("mapWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mapWidget->sizePolicy().hasHeightForWidth());
        mapWidget->setSizePolicy(sizePolicy3);
        mapWidget->setMinimumSize(QSize(64, 64));
        mapWidget->setMouseTracking(false);
        mapWidget->setAcceptDrops(false);
        mapWidget->setStyleSheet(QString::fromUtf8("\n"
"/* background-color: black; */\n"
"border: 1px solid black;\n"
"\n"
"QLabel { /* all label types */\n"
"/* background-color: rgba(255, 255, 255, 0); */\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(64, 64, 64, 255), stop:1 rgba(128, 128, 128, 255));\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton {	/* all types of tool button */ \n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
"/*border-style: none;*/\n"
"border: 0px; \n"
"}\n"
"QToolButton:hover {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 160, 0, 255), stop:1 rgba(160, 100, 0, 255));\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"QToolButton:pressed {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:"
                        "0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: none;\n"
"height: 4px;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(80, 80, 80, 255));\n"
"margin: 2px 0;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"border: 1px solid #5c5c5c;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(128, 128, 128, 255));\n"
"width: 24px;\n"
"margin: -2px 0;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QComboBox {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox:hover {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"	background-color: rgb(197, 138,"
                        " 0);\n"
"}\n"
"QComboBox::down-arrow {\n"
"     image: url(:/opmap/images/combobox_down_arrow.png);\n"
"}\n"
"QComboBox:drop-down {\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     border-left-style: none;\n"
"     border-top-right-radius: 1px;\n"
"     border-bottom-right-radius: 1px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(mapWidget);

        widget = new QWidget(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        widget->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(71, 71, 71, 255), stop:1 rgba(110, 110, 110, 255));\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton {	/* all types of tool button */ \n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
"/*border-style: none;*/\n"
"border: 0px; \n"
"border-radius: 3px;\n"
"}\n"
"QToolButton:hover {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255, 200), stop:1 rgba(180, 180, 180, 200));\n"
"color: rgb(255, 255, 255);\n"
"border: 0px; \n"
"border-radius: 3px;\n"
"}\n"
"QToolButton:pressed {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"color: rgb(255, 255, 255);\n"
"border: 0px; \n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255),"
                        " stop:1 rgba(120, 120, 120, 255));\n"
"color: rgb(255, 255, 255);\n"
"border: 0px; \n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: none;\n"
"height: 4px;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(80, 80, 80, 255));\n"
"margin: 2px 0;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"border: 1px solid #5c5c5c;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(128, 128, 128, 255));\n"
"width: 24px;\n"
"margin: -2px 0;\n"
"border-radius: 3px;\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frameMapControls = new QFrame(widget);
        frameMapControls->setObjectName(QString::fromUtf8("frameMapControls"));
        sizePolicy4.setHeightForWidth(frameMapControls->sizePolicy().hasHeightForWidth());
        frameMapControls->setSizePolicy(sizePolicy4);
        frameMapControls->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(71, 71, 71, 255), stop:1 rgba(110, 110, 110, 255));\n"
"color: rgba(0, 0, 0, 48);\n"
"}\n"
"\n"
"QToolButton {	/* all types of tool button */ \n"
"background-color: transparent;\n"
"/*background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(71, 71, 71, 255));*/\n"
"color: rgb(255, 255, 255);\n"
"/*\n"
"border: 1px solid black; \n"
"border-radius: 0px;\n"
"*/\n"
"border: none;\n"
"border-radius: 0px;\n"
"/*border: 1px solid white; \n"
"border-radius: 3px;\n"
"border-top-color: rgba(255, 255, 255, 48);\n"
"border-right-color: rgba(255, 255, 255, 48);\n"
"border-bottom-color: rgba(0, 0, 0, 48);\n"
"border-left-color: rgba(0, 0, 0, 48);*/\n"
"}\n"
"QToolButton:hover {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255, 200), stop:1 rgba(180, 180, 180, 200));\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
""
                        "/*border: 1px solid white; \n"
"border-radius:3px;\n"
"border-top-color: rgba(255, 255, 255, 48);\n"
"border-right-color: rgba(255, 255, 255, 48);\n"
"border-bottom-color: rgba(0, 0, 0, 48);\n"
"border-left-color: rgba(0, 0, 0, 48);*/\n"
"}\n"
"QToolButton:pressed {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(80, 80, 80, 255));\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
"border-radius:3px;\n"
"border-top-color: rgba(0, 0, 0,160);\n"
"border-right-color: rgba(0, 0, 0, 160);\n"
"border-bottom-color: rgba(255, 255, 255, 80);\n"
"border-left-color: rgba(255, 255, 255, 80);\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(80, 80, 80, 255));\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
"border-radius: 3px;\n"
"border-top-color: rgba(0, 0, 0,160);\n"
"border-right-color: rgba(0, 0, 0, 160);\n"
"bo"
                        "rder-bottom-color: rgba(255, 255, 255, 80);\n"
"border-left-color: rgba(255, 255, 255, 80);\n"
"}\n"
"\n"
"QSliderl {\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QSlider::groove:vertical {\n"
"border: none;\n"
"width: 4px;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(80, 80, 80, 255));\n"
"margin: 2px 0;\n"
"}\n"
"QSlider::handle:vertical {\n"
"border: 1px solid #5c5c5c;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(128, 128, 128, 255));\n"
"height: 10px;\n"
"margin: 0 -9px; /* expand outside the groove */ \n"
"border-radius: 3px;\n"
"}\n"
""));
        frameMapControls->setFrameShape(QFrame::NoFrame);
        frameMapControls->setFrameShadow(QFrame::Plain);
        frameMapControls->setLineWidth(2);
        frameMapControls->setMidLineWidth(0);
        verticalLayout_2 = new QVBoxLayout(frameMapControls);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        toolButtonZoomP = new QToolButton(frameMapControls);
        toolButtonZoomP->setObjectName(QString::fromUtf8("toolButtonZoomP"));
        toolButtonZoomP->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/opmap/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonZoomP->setIcon(icon6);
        toolButtonZoomP->setIconSize(QSize(28, 28));
        toolButtonZoomP->setAutoRepeat(true);
        toolButtonZoomP->setAutoRepeatDelay(1000);
        toolButtonZoomP->setAutoRepeatInterval(1000);
        toolButtonZoomP->setAutoRaise(false);

        verticalLayout_2->addWidget(toolButtonZoomP);

        horizontalSliderZoom = new QSlider(frameMapControls);
        horizontalSliderZoom->setObjectName(QString::fromUtf8("horizontalSliderZoom"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(horizontalSliderZoom->sizePolicy().hasHeightForWidth());
        horizontalSliderZoom->setSizePolicy(sizePolicy5);
        horizontalSliderZoom->setMinimumSize(QSize(0, 50));
        horizontalSliderZoom->setMaximumSize(QSize(16777215, 200));
        horizontalSliderZoom->setCursor(QCursor(Qt::OpenHandCursor));
        horizontalSliderZoom->setAutoFillBackground(false);
        horizontalSliderZoom->setStyleSheet(QString::fromUtf8(""));
        horizontalSliderZoom->setMinimum(2);
        horizontalSliderZoom->setMaximum(17);
        horizontalSliderZoom->setPageStep(1);
        horizontalSliderZoom->setOrientation(Qt::Vertical);
        horizontalSliderZoom->setInvertedControls(false);
        horizontalSliderZoom->setTickPosition(QSlider::NoTicks);
        horizontalSliderZoom->setTickInterval(2);

        verticalLayout_2->addWidget(horizontalSliderZoom);

        toolButtonZoomM = new QToolButton(frameMapControls);
        toolButtonZoomM->setObjectName(QString::fromUtf8("toolButtonZoomM"));
        toolButtonZoomM->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/opmap/images/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonZoomM->setIcon(icon7);
        toolButtonZoomM->setIconSize(QSize(28, 28));
        toolButtonZoomM->setAutoRepeat(true);
        toolButtonZoomM->setAutoRepeatDelay(1000);
        toolButtonZoomM->setAutoRepeatInterval(1000);
        toolButtonZoomM->setAutoRaise(false);

        verticalLayout_2->addWidget(toolButtonZoomM);

        line_7 = new QFrame(frameMapControls);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line_7);

        toolButtonHomeSet = new QToolButton(frameMapControls);
        toolButtonHomeSet->setObjectName(QString::fromUtf8("toolButtonHomeSet"));
        sizePolicy2.setHeightForWidth(toolButtonHomeSet->sizePolicy().hasHeightForWidth());
        toolButtonHomeSet->setSizePolicy(sizePolicy2);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/opmap/images/button_home_not_set.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/opmap/images/button_home_set.png"), QSize(), QIcon::Normal, QIcon::On);
        toolButtonHomeSet->setIcon(icon8);
        toolButtonHomeSet->setIconSize(QSize(28, 28));
        toolButtonHomeSet->setCheckable(true);
        toolButtonHomeSet->setAutoRepeat(false);
        toolButtonHomeSet->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButtonHomeSet->setAutoRaise(false);

        verticalLayout_2->addWidget(toolButtonHomeSet);

        toolButtonClearUAVTrail = new QToolButton(frameMapControls);
        toolButtonClearUAVTrail->setObjectName(QString::fromUtf8("toolButtonClearUAVTrail"));
        sizePolicy2.setHeightForWidth(toolButtonClearUAVTrail->sizePolicy().hasHeightForWidth());
        toolButtonClearUAVTrail->setSizePolicy(sizePolicy2);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/opmap/images/button_clear_uavtrail.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonClearUAVTrail->setIcon(icon9);
        toolButtonClearUAVTrail->setIconSize(QSize(28, 28));
        toolButtonClearUAVTrail->setCheckable(false);
        toolButtonClearUAVTrail->setAutoRepeat(false);
        toolButtonClearUAVTrail->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButtonClearUAVTrail->setAutoRaise(false);

        verticalLayout_2->addWidget(toolButtonClearUAVTrail);

        line_9 = new QFrame(frameMapControls);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShadow(QFrame::Plain);
        line_9->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line_9);

        toolButtonPlanEditor = new QToolButton(frameMapControls);
        toolButtonPlanEditor->setObjectName(QString::fromUtf8("toolButtonPlanEditor"));
        sizePolicy2.setHeightForWidth(toolButtonPlanEditor->sizePolicy().hasHeightForWidth());
        toolButtonPlanEditor->setSizePolicy(sizePolicy2);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/opmap/images/button_edit_plan.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonPlanEditor->setIcon(icon10);
        toolButtonPlanEditor->setIconSize(QSize(28, 28));
        toolButtonPlanEditor->setCheckable(false);
        toolButtonPlanEditor->setAutoRepeat(false);
        toolButtonPlanEditor->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButtonPlanEditor->setAutoRaise(false);

        verticalLayout_2->addWidget(toolButtonPlanEditor);

        line_10 = new QFrame(frameMapControls);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShadow(QFrame::Plain);
        line_10->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line_10);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        line_11 = new QFrame(frameMapControls);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShadow(QFrame::Plain);
        line_11->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line_11);

        toolButtonSaveSettings = new QToolButton(frameMapControls);
        toolButtonSaveSettings->setObjectName(QString::fromUtf8("toolButtonSaveSettings"));
        sizePolicy2.setHeightForWidth(toolButtonSaveSettings->sizePolicy().hasHeightForWidth());
        toolButtonSaveSettings->setSizePolicy(sizePolicy2);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/opmap/images/button_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonSaveSettings->setIcon(icon11);
        toolButtonSaveSettings->setIconSize(QSize(28, 28));
        toolButtonSaveSettings->setCheckable(false);
        toolButtonSaveSettings->setAutoRepeat(false);
        toolButtonSaveSettings->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButtonSaveSettings->setAutoRaise(false);

        verticalLayout_2->addWidget(toolButtonSaveSettings);


        verticalLayout_3->addWidget(frameMapControls);


        horizontalLayout_2->addWidget(widget);

        splitter->addWidget(layoutWidget);

        verticalLayout_5->addWidget(splitter);

        frameStatusBar = new QFrame(OPMap_Widget);
        frameStatusBar->setObjectName(QString::fromUtf8("frameStatusBar"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frameStatusBar->sizePolicy().hasHeightForWidth());
        frameStatusBar->setSizePolicy(sizePolicy6);
        frameStatusBar->setMinimumSize(QSize(0, 0));
        frameStatusBar->setMaximumSize(QSize(16777215, 25));
        frameStatusBar->setContextMenuPolicy(Qt::NoContextMenu);
        frameStatusBar->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(71, 71, 71, 255));\n"
"color: rgba(0, 0, 0, 128);\n"
"}\n"
"\n"
"QLabel {\n"
"background-color: transparent;\n"
"/* background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(0, 0, 0, 80), stop:1 rgba(0, 0, 0, 80)); */\n"
"color: rgb(255, 255, 255);\n"
"/*border: 1px solid black;*/\n"
"border: none;\n"
"border-radius: 2px;\n"
"}\n"
""));
        frameStatusBar->setFrameShape(QFrame::NoFrame);
        frameStatusBar->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frameStatusBar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 3, 0, 3);
        layoutWidgetStatusBar = new QHBoxLayout();
        layoutWidgetStatusBar->setSpacing(5);
        layoutWidgetStatusBar->setObjectName(QString::fromUtf8("layoutWidgetStatusBar"));
        layoutWidgetStatusBar->setContentsMargins(3, -1, 8, -1);
        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        layoutWidgetStatusBar->addItem(horizontalSpacer_7);

        labelUAVPos = new QLabel(frameStatusBar);
        labelUAVPos->setObjectName(QString::fromUtf8("labelUAVPos"));
        sizePolicy.setHeightForWidth(labelUAVPos->sizePolicy().hasHeightForWidth());
        labelUAVPos->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setKerning(true);
        labelUAVPos->setFont(font1);
        labelUAVPos->setStyleSheet(QString::fromUtf8(""));
        labelUAVPos->setFrameShape(QFrame::NoFrame);
        labelUAVPos->setFrameShadow(QFrame::Plain);
        labelUAVPos->setAlignment(Qt::AlignCenter);
        labelUAVPos->setMargin(0);

        layoutWidgetStatusBar->addWidget(labelUAVPos);

        line_3 = new QFrame(frameStatusBar);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(1);
        line_3->setFrameShape(QFrame::VLine);

        layoutWidgetStatusBar->addWidget(line_3);

        labelMapPos = new QLabel(frameStatusBar);
        labelMapPos->setObjectName(QString::fromUtf8("labelMapPos"));
        sizePolicy.setHeightForWidth(labelMapPos->sizePolicy().hasHeightForWidth());
        labelMapPos->setSizePolicy(sizePolicy);
        labelMapPos->setFont(font1);
        labelMapPos->setStyleSheet(QString::fromUtf8(""));
        labelMapPos->setFrameShape(QFrame::NoFrame);
        labelMapPos->setAlignment(Qt::AlignCenter);
        labelMapPos->setMargin(0);

        layoutWidgetStatusBar->addWidget(labelMapPos);

        line_4 = new QFrame(frameStatusBar);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::VLine);

        layoutWidgetStatusBar->addWidget(line_4);

        labelMousePos = new QLabel(frameStatusBar);
        labelMousePos->setObjectName(QString::fromUtf8("labelMousePos"));
        sizePolicy.setHeightForWidth(labelMousePos->sizePolicy().hasHeightForWidth());
        labelMousePos->setSizePolicy(sizePolicy);
        labelMousePos->setFont(font1);
        labelMousePos->setStyleSheet(QString::fromUtf8(""));
        labelMousePos->setFrameShape(QFrame::NoFrame);
        labelMousePos->setFrameShadow(QFrame::Plain);
        labelMousePos->setScaledContents(false);
        labelMousePos->setAlignment(Qt::AlignCenter);
        labelMousePos->setMargin(0);

        layoutWidgetStatusBar->addWidget(labelMousePos);

        line = new QFrame(frameStatusBar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::VLine);

        layoutWidgetStatusBar->addWidget(line);

        labelMapZoom = new QLabel(frameStatusBar);
        labelMapZoom->setObjectName(QString::fromUtf8("labelMapZoom"));
        labelMapZoom->setFont(font);

        layoutWidgetStatusBar->addWidget(labelMapZoom);

        line_2 = new QFrame(frameStatusBar);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::VLine);

        layoutWidgetStatusBar->addWidget(line_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutWidgetStatusBar->addItem(horizontalSpacer_3);

        progressBarMap = new QProgressBar(frameStatusBar);
        progressBarMap->setObjectName(QString::fromUtf8("progressBarMap"));
        sizePolicy1.setHeightForWidth(progressBarMap->sizePolicy().hasHeightForWidth());
        progressBarMap->setSizePolicy(sizePolicy1);
        progressBarMap->setMinimumSize(QSize(40, 0));
        progressBarMap->setMaximumSize(QSize(100, 16777215));
        progressBarMap->setAutoFillBackground(false);
        progressBarMap->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding: 3px;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"QProgressBar::chunk {\n"
"background-color: rgb(85, 85, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(160, 160, 255, 255), stop:1 rgba(80, 80, 160, 255));\n"
"border: none;\n"
"border-radius: 3px;\n"
"}"));
        progressBarMap->setValue(50);
        progressBarMap->setAlignment(Qt::AlignCenter);
        progressBarMap->setTextVisible(true);
        progressBarMap->setInvertedAppearance(false);

        layoutWidgetStatusBar->addWidget(progressBarMap);


        horizontalLayout->addLayout(layoutWidgetStatusBar);


        verticalLayout_5->addWidget(frameStatusBar);


        retranslateUi(OPMap_Widget);

        QMetaObject::connectSlotsByName(OPMap_Widget);
    } // setupUi

    void retranslateUi(QWidget *OPMap_Widget)
    {
        OPMap_Widget->setWindowTitle(QApplication::translate("OPMap_Widget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonNormalMapMode->setToolTip(QApplication::translate("OPMap_Widget", "Normal Map Mode", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonNormalMapMode->setText(QApplication::translate("OPMap_Widget", "   Normal   ", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonMagicWaypointMapMode->setToolTip(QApplication::translate("OPMap_Widget", "Magic Waypoint Map Mode", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonMagicWaypointMapMode->setText(QApplication::translate("OPMap_Widget", "   Magic Waypoint   ", nullptr));
        label_2->setText(QApplication::translate("OPMap_Widget", "Go To Place:", nullptr));
        tbFind->setText(QApplication::translate("OPMap_Widget", "...", nullptr));
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonMoveToWP->setToolTip(QApplication::translate("OPMap_Widget", "Click to move the UAV to the magic waypoint position", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonMoveToWP->setText(QApplication::translate("OPMap_Widget", "Move to WP", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonHomeWaypoint->setToolTip(QApplication::translate("OPMap_Widget", "Move the magic waypoint to the home position", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonHomeWaypoint->setText(QApplication::translate("OPMap_Widget", "Home WP", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonMapHome->setToolTip(QApplication::translate("OPMap_Widget", "Center map over home position", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonMapHome->setText(QApplication::translate("OPMap_Widget", "Home", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonMapUAV->setToolTip(QApplication::translate("OPMap_Widget", "Center map over UAV position", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonMapUAV->setText(QApplication::translate("OPMap_Widget", "UAV", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonMapUAVheading->setToolTip(QApplication::translate("OPMap_Widget", "Map rotation follows UAV heading", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonMapUAVheading->setText(QApplication::translate("OPMap_Widget", "Heading", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonZoomP->setToolTip(QApplication::translate("OPMap_Widget", "Zoom in", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonZoomP->setText(QString());
#ifndef QT_NO_TOOLTIP
        horizontalSliderZoom->setToolTip(QApplication::translate("OPMap_Widget", "Zoom level", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolButtonZoomM->setToolTip(QApplication::translate("OPMap_Widget", "Zoom out", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonZoomM->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonHomeSet->setToolTip(QApplication::translate("OPMap_Widget", "Set HomeLocation to be used by the\n"
"autopilot or just pick the first GPS fix.", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonHomeSet->setText(QApplication::translate("OPMap_Widget", "Home Set", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonClearUAVTrail->setToolTip(QApplication::translate("OPMap_Widget", "Clear UAV trail", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonClearUAVTrail->setText(QApplication::translate("OPMap_Widget", "Clear UAV trail", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonPlanEditor->setToolTip(QApplication::translate("OPMap_Widget", "Edit PathPlan", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonPlanEditor->setText(QApplication::translate("OPMap_Widget", "Edit plan", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonSaveSettings->setToolTip(QApplication::translate("OPMap_Widget", "Save current map settings", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonSaveSettings->setText(QApplication::translate("OPMap_Widget", "Save settings", nullptr));
#ifndef QT_NO_TOOLTIP
        labelUAVPos->setToolTip(QApplication::translate("OPMap_Widget", "UAV position", nullptr));
#endif // QT_NO_TOOLTIP
        labelUAVPos->setText(QApplication::translate("OPMap_Widget", "labelUAVPos", nullptr));
#ifndef QT_NO_TOOLTIP
        labelMapPos->setToolTip(QApplication::translate("OPMap_Widget", "Map position", nullptr));
#endif // QT_NO_TOOLTIP
        labelMapPos->setText(QApplication::translate("OPMap_Widget", "labelMapPos", nullptr));
#ifndef QT_NO_TOOLTIP
        labelMousePos->setToolTip(QApplication::translate("OPMap_Widget", "Mouse position", nullptr));
#endif // QT_NO_TOOLTIP
        labelMousePos->setText(QApplication::translate("OPMap_Widget", "labelMousePos", nullptr));
        labelMapZoom->setText(QApplication::translate("OPMap_Widget", "labelMapZoom", nullptr));
        progressBarMap->setFormat(QApplication::translate("OPMap_Widget", "%v", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OPMap_Widget: public Ui_OPMap_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPMAP_WIDGET_H
