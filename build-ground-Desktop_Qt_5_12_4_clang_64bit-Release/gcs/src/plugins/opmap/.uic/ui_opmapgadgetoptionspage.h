/********************************************************************************
** Form generated from reading UI file 'opmapgadgetoptionspage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPMAPGADGETOPTIONSPAGE_H
#define UI_OPMAPGADGETOPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "utils/pathchooser.h"

QT_BEGIN_NAMESPACE

class Ui_OPMapGadgetOptionsPage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkBoxUseOpenGL;
    QCheckBox *checkBoxShowTileGridLines;
    QLabel *label_2;
    QComboBox *maxUpdateRateComboBox;
    QComboBox *providerComboBox;
    QLabel *label_4;
    QDoubleSpinBox *longitudeSpinBox;
    QSpinBox *zoomSpinBox;
    QLabel *label;
    QDoubleSpinBox *latitudeSpinBox;
    QLabel *label_9;
    QComboBox *safeAreaRadiusComboBox;
    QLabel *label_13;
    QCheckBox *checkBoxShowSafeArea;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QDoubleSpinBox *defaultWaypointAltitude;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_11;
    QDoubleSpinBox *defaultWaypointVelocity;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QComboBox *uavSymbolComboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *accessModeComboBox;
    QCheckBox *checkBoxUseMemoryCache;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    Utils::PathChooser *lineEditCacheLocation;
    QPushButton *pushButtonCacheDefaults;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QWidget *OPMapGadgetOptionsPage)
    {
        if (OPMapGadgetOptionsPage->objectName().isEmpty())
            OPMapGadgetOptionsPage->setObjectName(QString::fromUtf8("OPMapGadgetOptionsPage"));
        OPMapGadgetOptionsPage->resize(564, 391);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OPMapGadgetOptionsPage->sizePolicy().hasHeightForWidth());
        OPMapGadgetOptionsPage->setSizePolicy(sizePolicy);
        OPMapGadgetOptionsPage->setMinimumSize(QSize(445, 5));
        verticalLayout = new QVBoxLayout(OPMapGadgetOptionsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(OPMapGadgetOptionsPage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 550, 422));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_3, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        checkBoxUseOpenGL = new QCheckBox(scrollAreaWidgetContents);
        checkBoxUseOpenGL->setObjectName(QString::fromUtf8("checkBoxUseOpenGL"));
        checkBoxUseOpenGL->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBoxUseOpenGL->sizePolicy().hasHeightForWidth());
        checkBoxUseOpenGL->setSizePolicy(sizePolicy2);
        checkBoxUseOpenGL->setMinimumSize(QSize(0, 0));
        checkBoxUseOpenGL->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(checkBoxUseOpenGL, 4, 2, 1, 1);

        checkBoxShowTileGridLines = new QCheckBox(scrollAreaWidgetContents);
        checkBoxShowTileGridLines->setObjectName(QString::fromUtf8("checkBoxShowTileGridLines"));
        checkBoxShowTileGridLines->setEnabled(true);
        sizePolicy2.setHeightForWidth(checkBoxShowTileGridLines->sizePolicy().hasHeightForWidth());
        checkBoxShowTileGridLines->setSizePolicy(sizePolicy2);
        checkBoxShowTileGridLines->setMinimumSize(QSize(161, 0));
        checkBoxShowTileGridLines->setMouseTracking(true);
        checkBoxShowTileGridLines->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(checkBoxShowTileGridLines, 4, 3, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 0, 3, 1, 1);

        maxUpdateRateComboBox = new QComboBox(scrollAreaWidgetContents);
        maxUpdateRateComboBox->setObjectName(QString::fromUtf8("maxUpdateRateComboBox"));

        gridLayout_3->addWidget(maxUpdateRateComboBox, 5, 3, 1, 1);

        providerComboBox = new QComboBox(scrollAreaWidgetContents);
        providerComboBox->setObjectName(QString::fromUtf8("providerComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(providerComboBox->sizePolicy().hasHeightForWidth());
        providerComboBox->setSizePolicy(sizePolicy3);
        providerComboBox->setMinimumSize(QSize(0, 0));
        providerComboBox->setCursor(QCursor(Qt::OpenHandCursor));
        providerComboBox->setMaxVisibleItems(15);
        providerComboBox->setFrame(true);

        gridLayout_3->addWidget(providerComboBox, 0, 2, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_4, 2, 2, 1, 1);

        longitudeSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents);
        longitudeSpinBox->setObjectName(QString::fromUtf8("longitudeSpinBox"));
        sizePolicy2.setHeightForWidth(longitudeSpinBox->sizePolicy().hasHeightForWidth());
        longitudeSpinBox->setSizePolicy(sizePolicy2);
        longitudeSpinBox->setMinimumSize(QSize(120, 0));
        longitudeSpinBox->setFrame(true);
        longitudeSpinBox->setDecimals(8);
        longitudeSpinBox->setMinimum(-180.000000000000000);
        longitudeSpinBox->setMaximum(180.000000000000000);

        gridLayout_3->addWidget(longitudeSpinBox, 2, 3, 1, 1);

        zoomSpinBox = new QSpinBox(scrollAreaWidgetContents);
        zoomSpinBox->setObjectName(QString::fromUtf8("zoomSpinBox"));
        sizePolicy2.setHeightForWidth(zoomSpinBox->sizePolicy().hasHeightForWidth());
        zoomSpinBox->setSizePolicy(sizePolicy2);
        zoomSpinBox->setMinimumSize(QSize(0, 0));
        zoomSpinBox->setMaximumSize(QSize(50, 16777215));
        zoomSpinBox->setFrame(true);
        zoomSpinBox->setMinimum(2);
        zoomSpinBox->setMaximum(18);

        gridLayout_3->addWidget(zoomSpinBox, 0, 4, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        latitudeSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents);
        latitudeSpinBox->setObjectName(QString::fromUtf8("latitudeSpinBox"));
        sizePolicy2.setHeightForWidth(latitudeSpinBox->sizePolicy().hasHeightForWidth());
        latitudeSpinBox->setSizePolicy(sizePolicy2);
        latitudeSpinBox->setMinimumSize(QSize(120, 0));
        latitudeSpinBox->setFrame(true);
        latitudeSpinBox->setDecimals(8);
        latitudeSpinBox->setMinimum(-90.000000000000000);
        latitudeSpinBox->setMaximum(90.000000000000000);

        gridLayout_3->addWidget(latitudeSpinBox, 1, 3, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_9, 5, 2, 1, 1);

        safeAreaRadiusComboBox = new QComboBox(scrollAreaWidgetContents);
        safeAreaRadiusComboBox->setObjectName(QString::fromUtf8("safeAreaRadiusComboBox"));

        gridLayout_3->addWidget(safeAreaRadiusComboBox, 6, 3, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_13, 6, 2, 1, 1);

        checkBoxShowSafeArea = new QCheckBox(scrollAreaWidgetContents);
        checkBoxShowSafeArea->setObjectName(QString::fromUtf8("checkBoxShowSafeArea"));
        checkBoxShowSafeArea->setEnabled(true);
        sizePolicy2.setHeightForWidth(checkBoxShowSafeArea->sizePolicy().hasHeightForWidth());
        checkBoxShowSafeArea->setSizePolicy(sizePolicy2);
        checkBoxShowSafeArea->setMinimumSize(QSize(0, 0));
        checkBoxShowSafeArea->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(checkBoxShowSafeArea, 6, 0, 1, 1);

        gridLayout_3->setRowMinimumHeight(0, 22);
        gridLayout_3->setRowMinimumHeight(1, 22);
        gridLayout_3->setRowMinimumHeight(2, 22);
        gridLayout_3->setRowMinimumHeight(4, 22);

        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(label_10);

        defaultWaypointAltitude = new QDoubleSpinBox(scrollAreaWidgetContents);
        defaultWaypointAltitude->setObjectName(QString::fromUtf8("defaultWaypointAltitude"));
        defaultWaypointAltitude->setDecimals(1);
        defaultWaypointAltitude->setMinimum(-1000.000000000000000);
        defaultWaypointAltitude->setMaximum(1000.000000000000000);

        horizontalLayout_4->addWidget(defaultWaypointAltitude);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy4.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(label_11);

        defaultWaypointVelocity = new QDoubleSpinBox(scrollAreaWidgetContents);
        defaultWaypointVelocity->setObjectName(QString::fromUtf8("defaultWaypointVelocity"));
        defaultWaypointVelocity->setDecimals(1);
        defaultWaypointVelocity->setMaximum(50.000000000000000);

        horizontalLayout_4->addWidget(defaultWaypointVelocity);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy4.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(label_8);

        uavSymbolComboBox = new QComboBox(scrollAreaWidgetContents);
        uavSymbolComboBox->setObjectName(QString::fromUtf8("uavSymbolComboBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(uavSymbolComboBox->sizePolicy().hasHeightForWidth());
        uavSymbolComboBox->setSizePolicy(sizePolicy5);

        horizontalLayout_2->addWidget(uavSymbolComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 9, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_6);

        accessModeComboBox = new QComboBox(scrollAreaWidgetContents);
        accessModeComboBox->setObjectName(QString::fromUtf8("accessModeComboBox"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(accessModeComboBox->sizePolicy().hasHeightForWidth());
        accessModeComboBox->setSizePolicy(sizePolicy6);
        accessModeComboBox->setMinimumSize(QSize(160, 0));
        accessModeComboBox->setCursor(QCursor(Qt::OpenHandCursor));
        accessModeComboBox->setFrame(true);

        horizontalLayout->addWidget(accessModeComboBox);

        checkBoxUseMemoryCache = new QCheckBox(scrollAreaWidgetContents);
        checkBoxUseMemoryCache->setObjectName(QString::fromUtf8("checkBoxUseMemoryCache"));
        checkBoxUseMemoryCache->setEnabled(true);
        sizePolicy2.setHeightForWidth(checkBoxUseMemoryCache->sizePolicy().hasHeightForWidth());
        checkBoxUseMemoryCache->setSizePolicy(sizePolicy2);
        checkBoxUseMemoryCache->setMinimumSize(QSize(0, 0));
        checkBoxUseMemoryCache->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(checkBoxUseMemoryCache);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(label_5);

        lineEditCacheLocation = new Utils::PathChooser(scrollAreaWidgetContents);
        lineEditCacheLocation->setObjectName(QString::fromUtf8("lineEditCacheLocation"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lineEditCacheLocation->sizePolicy().hasHeightForWidth());
        lineEditCacheLocation->setSizePolicy(sizePolicy7);

        horizontalLayout_3->addWidget(lineEditCacheLocation);

        pushButtonCacheDefaults = new QPushButton(scrollAreaWidgetContents);
        pushButtonCacheDefaults->setObjectName(QString::fromUtf8("pushButtonCacheDefaults"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(pushButtonCacheDefaults->sizePolicy().hasHeightForWidth());
        pushButtonCacheDefaults->setSizePolicy(sizePolicy8);
        pushButtonCacheDefaults->setMinimumSize(QSize(0, 0));
        pushButtonCacheDefaults->setCursor(QCursor(Qt::OpenHandCursor));
        pushButtonCacheDefaults->setCheckable(false);
        pushButtonCacheDefaults->setChecked(false);
        pushButtonCacheDefaults->setFlat(false);

        horizontalLayout_3->addWidget(pushButtonCacheDefaults);


        gridLayout->addLayout(horizontalLayout_3, 8, 0, 1, 2);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 5, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 4, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(OPMapGadgetOptionsPage);

        QMetaObject::connectSlotsByName(OPMapGadgetOptionsPage);
    } // setupUi

    void retranslateUi(QWidget *OPMapGadgetOptionsPage)
    {
        OPMapGadgetOptionsPage->setWindowTitle(QApplication::translate("OPMapGadgetOptionsPage", "Form", nullptr));
        label_12->setText(QApplication::translate("OPMapGadgetOptionsPage", "Waypoint Options", nullptr));
        label_3->setText(QApplication::translate("OPMapGadgetOptionsPage", "Default latitude ", nullptr));
        checkBoxUseOpenGL->setText(QApplication::translate("OPMapGadgetOptionsPage", "Use OpenGL", nullptr));
        checkBoxShowTileGridLines->setText(QApplication::translate("OPMapGadgetOptionsPage", "Show Tile Grid Lines", nullptr));
        label_2->setText(QApplication::translate("OPMapGadgetOptionsPage", "Default zoom ", nullptr));
        label_4->setText(QApplication::translate("OPMapGadgetOptionsPage", "Default longitude ", nullptr));
        label->setText(QApplication::translate("OPMapGadgetOptionsPage", "Map type ", nullptr));
        label_9->setText(QApplication::translate("OPMapGadgetOptionsPage", "Default Max Update Rate ", nullptr));
        label_13->setText(QApplication::translate("OPMapGadgetOptionsPage", "Default Safe Area Radius ", nullptr));
        checkBoxShowSafeArea->setText(QApplication::translate("OPMapGadgetOptionsPage", "Show Safe Area", nullptr));
        label_10->setText(QApplication::translate("OPMapGadgetOptionsPage", "Default relative Altitude", nullptr));
        label_11->setText(QApplication::translate("OPMapGadgetOptionsPage", "Default Velocity", nullptr));
        label_8->setText(QApplication::translate("OPMapGadgetOptionsPage", "UAV Symbol", nullptr));
        label_6->setText(QApplication::translate("OPMapGadgetOptionsPage", "Access mode ", nullptr));
        checkBoxUseMemoryCache->setText(QApplication::translate("OPMapGadgetOptionsPage", "Use Memory Cache", nullptr));
        label_5->setText(QApplication::translate("OPMapGadgetOptionsPage", "Cache location ", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonCacheDefaults->setToolTip(QApplication::translate("OPMapGadgetOptionsPage", "Restore default server and cache settings", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonCacheDefaults->setText(QApplication::translate("OPMapGadgetOptionsPage", " Default ", nullptr));
        label_7->setText(QApplication::translate("OPMapGadgetOptionsPage", "Server and Cache", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OPMapGadgetOptionsPage: public Ui_OPMapGadgetOptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPMAPGADGETOPTIONSPAGE_H
