/********************************************************************************
** Form generated from reading UI file 'gpsdisplaywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPSDISPLAYWIDGET_H
#define UI_GPSDISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "flatearthwidget.h"
#include "gpsconstellationwidget.h"
#include "gpssnrwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GpsDisplayWidget
{
public:
    QVBoxLayout *verticalLayoutTop;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *infoVerticalLayout;
    QHBoxLayout *infoHorizontalLayout1;
    QLabel *lat_label;
    QSpacerItem *horizontalSpacer_4;
    QLabel *coord_value;
    QSpacerItem *horizontalSpacer_5;
    QLabel *coord_value_2;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *infoHorizontalLayout2;
    QLabel *speed_label;
    QSpacerItem *horizontalSpacer_7;
    QLabel *speed_value;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_9;
    QLabel *bear_label;
    QSpacerItem *horizontalSpacer_8;
    QLabel *bear_value;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *alt_label;
    QSpacerItem *horizontalSpacer_15;
    QLabel *coord_value_3;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_5;
    QFrame *line1;
    GpsConstellationWidget *gpsSky;
    FlatEarthWidget *flatEarth;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *infoHorizontalLayout3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_13;
    QLabel *dop_value;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *infoHorizontalLayout4;
    QLabel *status_label;
    QSpacerItem *horizontalSpacer_10;
    QLabel *status_value;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_11;
    QLabel *fix_label;
    QSpacerItem *horizontalSpacer_20;
    QLabel *fix_value;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *infoHorizontalLayout5;
    QLabel *datetime_label;
    QSpacerItem *horizontalSpacer_22;
    QLabel *time_value;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_10;
    QFrame *line2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    GpsSnrWidget *gpsSnrWidget;
    QGroupBox *dataStreamGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *GpsDisplayWidget)
    {
        if (GpsDisplayWidget->objectName().isEmpty())
            GpsDisplayWidget->setObjectName(QString::fromUtf8("GpsDisplayWidget"));
        GpsDisplayWidget->resize(664, 606);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GpsDisplayWidget->sizePolicy().hasHeightForWidth());
        GpsDisplayWidget->setSizePolicy(sizePolicy);
        verticalLayoutTop = new QVBoxLayout(GpsDisplayWidget);
        verticalLayoutTop->setSpacing(0);
        verticalLayoutTop->setObjectName(QString::fromUtf8("verticalLayoutTop"));
        verticalLayoutTop->setContentsMargins(6, 6, 6, 6);
        splitter = new QSplitter(GpsDisplayWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(true);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        infoVerticalLayout = new QVBoxLayout();
        infoVerticalLayout->setSpacing(0);
        infoVerticalLayout->setObjectName(QString::fromUtf8("infoVerticalLayout"));
        infoHorizontalLayout1 = new QHBoxLayout();
        infoHorizontalLayout1->setSpacing(0);
        infoHorizontalLayout1->setObjectName(QString::fromUtf8("infoHorizontalLayout1"));
        lat_label = new QLabel(layoutWidget);
        lat_label->setObjectName(QString::fromUtf8("lat_label"));

        infoHorizontalLayout1->addWidget(lat_label);

        horizontalSpacer_4 = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        infoHorizontalLayout1->addItem(horizontalSpacer_4);

        coord_value = new QLabel(layoutWidget);
        coord_value->setObjectName(QString::fromUtf8("coord_value"));
        coord_value->setMinimumSize(QSize(80, 0));
        coord_value->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        coord_value->setFont(font);

        infoHorizontalLayout1->addWidget(coord_value);

        horizontalSpacer_5 = new QSpacerItem(6, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        infoHorizontalLayout1->addItem(horizontalSpacer_5);

        coord_value_2 = new QLabel(layoutWidget);
        coord_value_2->setObjectName(QString::fromUtf8("coord_value_2"));
        coord_value_2->setMinimumSize(QSize(80, 0));
        coord_value_2->setMaximumSize(QSize(100, 16777215));
        coord_value_2->setFont(font);

        infoHorizontalLayout1->addWidget(coord_value_2);

        horizontalSpacer_23 = new QSpacerItem(6, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        infoHorizontalLayout1->addItem(horizontalSpacer_23);

        infoHorizontalLayout1->setStretch(2, 1);
        infoHorizontalLayout1->setStretch(4, 1);

        infoVerticalLayout->addLayout(infoHorizontalLayout1);

        verticalSpacer_9 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Preferred);

        infoVerticalLayout->addItem(verticalSpacer_9);

        infoHorizontalLayout2 = new QHBoxLayout();
        infoHorizontalLayout2->setSpacing(0);
        infoHorizontalLayout2->setObjectName(QString::fromUtf8("infoHorizontalLayout2"));
        speed_label = new QLabel(layoutWidget);
        speed_label->setObjectName(QString::fromUtf8("speed_label"));

        infoHorizontalLayout2->addWidget(speed_label);

        horizontalSpacer_7 = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        infoHorizontalLayout2->addItem(horizontalSpacer_7);

        speed_value = new QLabel(layoutWidget);
        speed_value->setObjectName(QString::fromUtf8("speed_value"));
        speed_value->setMinimumSize(QSize(40, 0));
        speed_value->setFont(font);
        speed_value->setScaledContents(false);

        infoHorizontalLayout2->addWidget(speed_value);

        horizontalSpacer_19 = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        infoHorizontalLayout2->addItem(horizontalSpacer_19);

        horizontalSpacer_9 = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        infoHorizontalLayout2->addItem(horizontalSpacer_9);

        bear_label = new QLabel(layoutWidget);
        bear_label->setObjectName(QString::fromUtf8("bear_label"));

        infoHorizontalLayout2->addWidget(bear_label);

        horizontalSpacer_8 = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        infoHorizontalLayout2->addItem(horizontalSpacer_8);

        bear_value = new QLabel(layoutWidget);
        bear_value->setObjectName(QString::fromUtf8("bear_value"));
        bear_value->setMinimumSize(QSize(50, 0));
        bear_value->setFont(font);

        infoHorizontalLayout2->addWidget(bear_value);

        infoHorizontalLayout2->setStretch(2, 1);
        infoHorizontalLayout2->setStretch(7, 1);

        infoVerticalLayout->addLayout(infoHorizontalLayout2);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Preferred);

        infoVerticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        alt_label = new QLabel(layoutWidget);
        alt_label->setObjectName(QString::fromUtf8("alt_label"));

        horizontalLayout_2->addWidget(alt_label);

        horizontalSpacer_15 = new QSpacerItem(6, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);

        coord_value_3 = new QLabel(layoutWidget);
        coord_value_3->setObjectName(QString::fromUtf8("coord_value_3"));
        coord_value_3->setFont(font);

        horizontalLayout_2->addWidget(coord_value_3);

        horizontalSpacer_16 = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_16);


        infoVerticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Preferred);

        infoVerticalLayout->addItem(verticalSpacer_5);

        line1 = new QFrame(layoutWidget);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);

        infoVerticalLayout->addWidget(line1);


        gridLayout->addLayout(infoVerticalLayout, 0, 0, 1, 1);

        gpsSky = new GpsConstellationWidget(layoutWidget);
        gpsSky->setObjectName(QString::fromUtf8("gpsSky"));
        gpsSky->setEnabled(true);
        gpsSky->setMaximumSize(QSize(600, 600));
        gpsSky->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        gpsSky->setFrameShape(QFrame::Panel);
        gpsSky->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        gpsSky->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        gpsSky->setBackgroundBrush(brush);

        gridLayout->addWidget(gpsSky, 1, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        flatEarth = new FlatEarthWidget(layoutWidget);
        flatEarth->setObjectName(QString::fromUtf8("flatEarth"));
        sizePolicy.setHeightForWidth(flatEarth->sizePolicy().hasHeightForWidth());
        flatEarth->setSizePolicy(sizePolicy);
        flatEarth->setMinimumSize(QSize(90, 45));
        flatEarth->setMaximumSize(QSize(1440, 720));
        flatEarth->setSizeIncrement(QSize(0, 0));
        flatEarth->setBaseSize(QSize(0, 0));
        QPalette palette;
        QBrush brush1(QColor(170, 255, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(240, 34, 223, 0));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        flatEarth->setPalette(palette);
        flatEarth->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        flatEarth->setFrameShape(QFrame::NoFrame);
        flatEarth->setLineWidth(0);
        flatEarth->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        flatEarth->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        flatEarth->setOptimizationFlags(QGraphicsView::DontAdjustForAntialiasing);

        gridLayout->addWidget(flatEarth, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        infoHorizontalLayout3 = new QHBoxLayout();
        infoHorizontalLayout3->setSpacing(0);
        infoHorizontalLayout3->setObjectName(QString::fromUtf8("infoHorizontalLayout3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        infoHorizontalLayout3->addWidget(label);

        horizontalSpacer_13 = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        infoHorizontalLayout3->addItem(horizontalSpacer_13);

        dop_value = new QLabel(layoutWidget);
        dop_value->setObjectName(QString::fromUtf8("dop_value"));
        dop_value->setFont(font);
        dop_value->setText(QString::fromUtf8("0 / 0 / 0"));

        infoHorizontalLayout3->addWidget(dop_value);

        horizontalSpacer_24 = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        infoHorizontalLayout3->addItem(horizontalSpacer_24);

        infoHorizontalLayout3->setStretch(2, 1);

        verticalLayout_3->addLayout(infoHorizontalLayout3);

        verticalSpacer_7 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_7);

        infoHorizontalLayout4 = new QHBoxLayout();
        infoHorizontalLayout4->setSpacing(0);
        infoHorizontalLayout4->setObjectName(QString::fromUtf8("infoHorizontalLayout4"));
        status_label = new QLabel(layoutWidget);
        status_label->setObjectName(QString::fromUtf8("status_label"));

        infoHorizontalLayout4->addWidget(status_label);

        horizontalSpacer_10 = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        infoHorizontalLayout4->addItem(horizontalSpacer_10);

        status_value = new QLabel(layoutWidget);
        status_value->setObjectName(QString::fromUtf8("status_value"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(status_value->sizePolicy().hasHeightForWidth());
        status_value->setSizePolicy(sizePolicy2);
        status_value->setMinimumSize(QSize(30, 0));
        status_value->setMaximumSize(QSize(16777215, 16777215));
        status_value->setFont(font);

        infoHorizontalLayout4->addWidget(status_value);

        horizontalSpacer_17 = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        infoHorizontalLayout4->addItem(horizontalSpacer_17);

        horizontalSpacer_11 = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        infoHorizontalLayout4->addItem(horizontalSpacer_11);

        fix_label = new QLabel(layoutWidget);
        fix_label->setObjectName(QString::fromUtf8("fix_label"));

        infoHorizontalLayout4->addWidget(fix_label);

        horizontalSpacer_20 = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        infoHorizontalLayout4->addItem(horizontalSpacer_20);

        fix_value = new QLabel(layoutWidget);
        fix_value->setObjectName(QString::fromUtf8("fix_value"));
        fix_value->setMinimumSize(QSize(80, 0));
        fix_value->setFont(font);

        infoHorizontalLayout4->addWidget(fix_value);

        infoHorizontalLayout4->setStretch(2, 1);

        verticalLayout_3->addLayout(infoHorizontalLayout4);

        verticalSpacer_4 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_4);

        infoHorizontalLayout5 = new QHBoxLayout();
        infoHorizontalLayout5->setSpacing(0);
        infoHorizontalLayout5->setObjectName(QString::fromUtf8("infoHorizontalLayout5"));
        infoHorizontalLayout5->setContentsMargins(-1, 0, -1, -1);
        datetime_label = new QLabel(layoutWidget);
        datetime_label->setObjectName(QString::fromUtf8("datetime_label"));
        datetime_label->setMinimumSize(QSize(0, 0));

        infoHorizontalLayout5->addWidget(datetime_label);

        horizontalSpacer_22 = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        infoHorizontalLayout5->addItem(horizontalSpacer_22);

        time_value = new QLabel(layoutWidget);
        time_value->setObjectName(QString::fromUtf8("time_value"));
        time_value->setMinimumSize(QSize(50, 0));
        time_value->setMaximumSize(QSize(16777215, 16777215));
        time_value->setFont(font);

        infoHorizontalLayout5->addWidget(time_value);

        horizontalSpacer_18 = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        infoHorizontalLayout5->addItem(horizontalSpacer_18);


        verticalLayout_3->addLayout(infoHorizontalLayout5);

        verticalSpacer_10 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_10);

        line2 = new QFrame(layoutWidget);
        line2->setObjectName(QString::fromUtf8("line2"));
        line2->setFrameShape(QFrame::HLine);
        line2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line2);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        groupBox->setFocusPolicy(Qt::NoFocus);
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gpsSnrWidget = new GpsSnrWidget(groupBox);
        gpsSnrWidget->setObjectName(QString::fromUtf8("gpsSnrWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(gpsSnrWidget->sizePolicy().hasHeightForWidth());
        gpsSnrWidget->setSizePolicy(sizePolicy4);
        gpsSnrWidget->setMinimumSize(QSize(0, 80));
        gpsSnrWidget->setMaximumSize(QSize(16777215, 100));
        gpsSnrWidget->setBaseSize(QSize(0, 0));
        QPalette palette1;
        QBrush brush3(QColor(236, 236, 236, 0));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        QBrush brush4(QColor(237, 237, 237, 0));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        gpsSnrWidget->setPalette(palette1);
        gpsSnrWidget->setAutoFillBackground(false);
        gpsSnrWidget->setFrameShape(QFrame::NoFrame);
        gpsSnrWidget->setFrameShadow(QFrame::Plain);
        gpsSnrWidget->setLineWidth(0);
        gpsSnrWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        gpsSnrWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_5->addWidget(gpsSnrWidget);


        gridLayout->addWidget(groupBox, 2, 0, 1, 2);

        gridLayout->setRowStretch(0, 1);
        splitter->addWidget(layoutWidget);
        dataStreamGroupBox = new QGroupBox(splitter);
        dataStreamGroupBox->setObjectName(QString::fromUtf8("dataStreamGroupBox"));
        verticalLayout_4 = new QVBoxLayout(dataStreamGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, -1, 9, -1);
        connectButton = new QPushButton(dataStreamGroupBox);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        verticalLayout->addWidget(connectButton);

        disconnectButton = new QPushButton(dataStreamGroupBox);
        disconnectButton->setObjectName(QString::fromUtf8("disconnectButton"));

        verticalLayout->addWidget(disconnectButton);


        horizontalLayout->addLayout(verticalLayout);

        textBrowser = new QTextBrowser(dataStreamGroupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy5);
        textBrowser->setMinimumSize(QSize(0, 50));
        textBrowser->setLineWidth(0);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        textBrowser->setLineWrapMode(QTextEdit::WidgetWidth);
        textBrowser->setAcceptRichText(false);

        horizontalLayout->addWidget(textBrowser);


        verticalLayout_4->addLayout(horizontalLayout);

        splitter->addWidget(dataStreamGroupBox);

        verticalLayoutTop->addWidget(splitter);


        retranslateUi(GpsDisplayWidget);

        QMetaObject::connectSlotsByName(GpsDisplayWidget);
    } // setupUi

    void retranslateUi(QWidget *GpsDisplayWidget)
    {
        lat_label->setText(QApplication::translate("GpsDisplayWidget", "Coord:", nullptr));
        coord_value->setText(QApplication::translate("GpsDisplayWidget", "Unknown", nullptr));
        coord_value_2->setText(QApplication::translate("GpsDisplayWidget", "Unknown", nullptr));
        speed_label->setText(QApplication::translate("GpsDisplayWidget", "Speed:", nullptr));
        speed_value->setText(QApplication::translate("GpsDisplayWidget", "Unknown", nullptr));
        bear_label->setText(QApplication::translate("GpsDisplayWidget", "Heading:", nullptr));
        bear_value->setText(QApplication::translate("GpsDisplayWidget", "Unknown", nullptr));
        alt_label->setText(QApplication::translate("GpsDisplayWidget", "Altitude (AMSL):", nullptr));
        coord_value_3->setText(QApplication::translate("GpsDisplayWidget", "Unknown", nullptr));
#ifndef QT_NO_TOOLTIP
        flatEarth->setToolTip(QApplication::translate("GpsDisplayWidget", "<html><head/><body><p>Location of the UAV on the Earth</p><p>Click to toggle zoomlevel.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("GpsDisplayWidget", "H / V / P DOP:", nullptr));
        status_label->setText(QApplication::translate("GpsDisplayWidget", "Sats Used:", nullptr));
        status_value->setText(QApplication::translate("GpsDisplayWidget", "Unknown", nullptr));
        fix_label->setText(QApplication::translate("GpsDisplayWidget", "Fix Type:", nullptr));
        fix_value->setText(QApplication::translate("GpsDisplayWidget", "Unknown", nullptr));
        datetime_label->setText(QApplication::translate("GpsDisplayWidget", "Date & time:", nullptr));
        time_value->setText(QApplication::translate("GpsDisplayWidget", "Unknown", nullptr));
        groupBox->setTitle(QApplication::translate("GpsDisplayWidget", "Signal to Noise Ratio", nullptr));
#ifndef QT_NO_TOOLTIP
        gpsSnrWidget->setToolTip(QApplication::translate("GpsDisplayWidget", "<html><head/><body><p>Displays the SNR for each detected satellite.</p> <ul><li> GPS satellites are shown in green</li><li> GLONASS in cyan</li><li> BeiDou in red</li><li> Galileo in magenta </li><li> SBAS/QZSS in orange <li></ul><p> Satellite SNR is displayed above (in dBHz ) <br/> Satellite number (PRN) is displayed below the bar. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        dataStreamGroupBox->setTitle(QApplication::translate("GpsDisplayWidget", "GPS Data Stream", nullptr));
        connectButton->setText(QApplication::translate("GpsDisplayWidget", "Connect", nullptr));
        disconnectButton->setText(QApplication::translate("GpsDisplayWidget", "Disconnect", nullptr));
        Q_UNUSED(GpsDisplayWidget);
    } // retranslateUi

};

namespace Ui {
    class GpsDisplayWidget: public Ui_GpsDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPSDISPLAYWIDGET_H
