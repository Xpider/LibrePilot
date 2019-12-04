/********************************************************************************
** Form generated from reading UI file 'opmap_edit_waypoint_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPMAP_EDIT_WAYPOINT_DIALOG_H
#define UI_OPMAP_EDIT_WAYPOINT_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opmap_edit_waypoint_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *lbLat;
    QLabel *lbLong;
    QLabel *label_8;
    QLineEdit *lineEditDescription;
    QDoubleSpinBox *doubleSpinBoxLatitude;
    QDoubleSpinBox *doubleSpinBoxLongitude;
    QLabel *lbDegLong;
    QLabel *lbDegLat;
    QLabel *Type;
    QLabel *lbDistanceMeters;
    QLabel *lbBearingDeg;
    QLabel *lbBearing;
    QDoubleSpinBox *doubleSpinBoxBearing;
    QLabel *lbDistance;
    QCheckBox *checkBoxLocked;
    QLabel *label_7;
    QLabel *lbNumber;
    QDoubleSpinBox *doubleSpinBoxVelocity;
    QCheckBox *checkBoxRelative;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBoxRelativeAltitude;
    QDoubleSpinBox *doubleSpinBoxAltitude;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBoxDistance;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_4;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *descriptionModeLabel;
    QSpacerItem *verticalSpacer_8;
    QLabel *label;
    QComboBox *cbMode;
    QDoubleSpinBox *dsb_modeParam1;
    QLabel *modeParam1;
    QLabel *modeParam2;
    QLabel *modeParam3;
    QLabel *modeParam4;
    QDoubleSpinBox *dsb_modeParam2;
    QDoubleSpinBox *dsb_modeParam3;
    QDoubleSpinBox *dsb_modeParam4;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *Condition;
    QComboBox *cbCondition;
    QDoubleSpinBox *dsb_condParam1;
    QLabel *condParam1;
    QLabel *condParam2;
    QLabel *condParam3;
    QLabel *condParam4;
    QDoubleSpinBox *dsb_condParam2;
    QDoubleSpinBox *dsb_condParam3;
    QDoubleSpinBox *dsb_condParam4;
    QVBoxLayout *verticalLayout_4;
    QLabel *descriptionConditionLabel;
    QSpacerItem *verticalSpacer_9;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QGridLayout *gridLayout_5;
    QLabel *descriptionCommandLabel;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *sbJump;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *cbCommand;
    QLabel *jumpDest;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_9;
    QLabel *descriptionErrorDestinationLabel;
    QLabel *condParam2_2;
    QSpacerItem *horizontalSpacer_8;
    QSpinBox *sbError;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonPrevious;
    QSpinBox *wpNumberSpinBox;
    QPushButton *pushButtonNext;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QWidget *opmap_edit_waypoint_dialog)
    {
        if (opmap_edit_waypoint_dialog->objectName().isEmpty())
            opmap_edit_waypoint_dialog->setObjectName(QString::fromUtf8("opmap_edit_waypoint_dialog"));
        opmap_edit_waypoint_dialog->setProperty("modal", QVariant(false));
        opmap_edit_waypoint_dialog->setWindowModality(Qt::NonModal);
        opmap_edit_waypoint_dialog->resize(606, 420);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(opmap_edit_waypoint_dialog->sizePolicy().hasHeightForWidth());
        opmap_edit_waypoint_dialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/core/images/librepilot_logo_128.png"), QSize(), QIcon::Normal, QIcon::Off);
        opmap_edit_waypoint_dialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(opmap_edit_waypoint_dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(opmap_edit_waypoint_dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbLat = new QLabel(tab_3);
        lbLat->setObjectName(QString::fromUtf8("lbLat"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbLat->sizePolicy().hasHeightForWidth());
        lbLat->setSizePolicy(sizePolicy2);
        lbLat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbLat, 2, 0, 1, 1);

        lbLong = new QLabel(tab_3);
        lbLong->setObjectName(QString::fromUtf8("lbLong"));
        lbLong->setEnabled(true);
        sizePolicy2.setHeightForWidth(lbLong->sizePolicy().hasHeightForWidth());
        lbLong->setSizePolicy(sizePolicy2);
        lbLong->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbLong, 3, 0, 1, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 9, 0, 1, 1);

        lineEditDescription = new QLineEdit(tab_3);
        lineEditDescription->setObjectName(QString::fromUtf8("lineEditDescription"));

        gridLayout->addWidget(lineEditDescription, 9, 1, 1, 2);

        doubleSpinBoxLatitude = new QDoubleSpinBox(tab_3);
        doubleSpinBoxLatitude->setObjectName(QString::fromUtf8("doubleSpinBoxLatitude"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(doubleSpinBoxLatitude->sizePolicy().hasHeightForWidth());
        doubleSpinBoxLatitude->setSizePolicy(sizePolicy3);
        doubleSpinBoxLatitude->setDecimals(5);
        doubleSpinBoxLatitude->setMinimum(-90.000000000000000);
        doubleSpinBoxLatitude->setMaximum(90.000000000000000);

        gridLayout->addWidget(doubleSpinBoxLatitude, 2, 1, 1, 1);

        doubleSpinBoxLongitude = new QDoubleSpinBox(tab_3);
        doubleSpinBoxLongitude->setObjectName(QString::fromUtf8("doubleSpinBoxLongitude"));
        doubleSpinBoxLongitude->setDecimals(5);
        doubleSpinBoxLongitude->setMinimum(-180.000000000000000);
        doubleSpinBoxLongitude->setMaximum(180.000000000000000);

        gridLayout->addWidget(doubleSpinBoxLongitude, 3, 1, 1, 1);

        lbDegLong = new QLabel(tab_3);
        lbDegLong->setObjectName(QString::fromUtf8("lbDegLong"));

        gridLayout->addWidget(lbDegLong, 3, 2, 1, 1);

        lbDegLat = new QLabel(tab_3);
        lbDegLat->setObjectName(QString::fromUtf8("lbDegLat"));

        gridLayout->addWidget(lbDegLat, 2, 2, 1, 1);

        Type = new QLabel(tab_3);
        Type->setObjectName(QString::fromUtf8("Type"));
        sizePolicy2.setHeightForWidth(Type->sizePolicy().hasHeightForWidth());
        Type->setSizePolicy(sizePolicy2);
        Type->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Type, 1, 0, 1, 1);

        lbDistanceMeters = new QLabel(tab_3);
        lbDistanceMeters->setObjectName(QString::fromUtf8("lbDistanceMeters"));

        gridLayout->addWidget(lbDistanceMeters, 5, 2, 1, 1);

        lbBearingDeg = new QLabel(tab_3);
        lbBearingDeg->setObjectName(QString::fromUtf8("lbBearingDeg"));

        gridLayout->addWidget(lbBearingDeg, 6, 2, 1, 1);

        lbBearing = new QLabel(tab_3);
        lbBearing->setObjectName(QString::fromUtf8("lbBearing"));
        lbBearing->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbBearing, 6, 0, 1, 1);

        doubleSpinBoxBearing = new QDoubleSpinBox(tab_3);
        doubleSpinBoxBearing->setObjectName(QString::fromUtf8("doubleSpinBoxBearing"));
        doubleSpinBoxBearing->setDecimals(2);
        doubleSpinBoxBearing->setMaximum(360.000000000000000);

        gridLayout->addWidget(doubleSpinBoxBearing, 6, 1, 1, 1);

        lbDistance = new QLabel(tab_3);
        lbDistance->setObjectName(QString::fromUtf8("lbDistance"));
        sizePolicy2.setHeightForWidth(lbDistance->sizePolicy().hasHeightForWidth());
        lbDistance->setSizePolicy(sizePolicy2);
        lbDistance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbDistance, 5, 0, 1, 1);

        checkBoxLocked = new QCheckBox(tab_3);
        checkBoxLocked->setObjectName(QString::fromUtf8("checkBoxLocked"));
        checkBoxLocked->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(checkBoxLocked, 0, 2, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        lbNumber = new QLabel(tab_3);
        lbNumber->setObjectName(QString::fromUtf8("lbNumber"));

        gridLayout->addWidget(lbNumber, 0, 1, 1, 1);

        doubleSpinBoxVelocity = new QDoubleSpinBox(tab_3);
        doubleSpinBoxVelocity->setObjectName(QString::fromUtf8("doubleSpinBoxVelocity"));
        doubleSpinBoxVelocity->setMaximum(999999999.000000000000000);

        gridLayout->addWidget(doubleSpinBoxVelocity, 8, 1, 1, 1);

        checkBoxRelative = new QCheckBox(tab_3);
        checkBoxRelative->setObjectName(QString::fromUtf8("checkBoxRelative"));

        gridLayout->addWidget(checkBoxRelative, 1, 1, 1, 1);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 2, 1, 1);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        doubleSpinBoxRelativeAltitude = new QDoubleSpinBox(tab_3);
        doubleSpinBoxRelativeAltitude->setObjectName(QString::fromUtf8("doubleSpinBoxRelativeAltitude"));
        doubleSpinBoxRelativeAltitude->setMinimum(-999999999.000000000000000);
        doubleSpinBoxRelativeAltitude->setMaximum(999999999.000000000000000);

        gridLayout->addWidget(doubleSpinBoxRelativeAltitude, 7, 1, 1, 1);

        doubleSpinBoxAltitude = new QDoubleSpinBox(tab_3);
        doubleSpinBoxAltitude->setObjectName(QString::fromUtf8("doubleSpinBoxAltitude"));
        doubleSpinBoxAltitude->setMinimum(-5000.000000000000000);
        doubleSpinBoxAltitude->setMaximum(5000.000000000000000);

        gridLayout->addWidget(doubleSpinBoxAltitude, 4, 1, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 7, 2, 1, 1);

        doubleSpinBoxDistance = new QDoubleSpinBox(tab_3);
        doubleSpinBoxDistance->setObjectName(QString::fromUtf8("doubleSpinBoxDistance"));
        doubleSpinBoxDistance->setDecimals(2);
        doubleSpinBoxDistance->setMaximum(999999999.000000000000000);

        gridLayout->addWidget(doubleSpinBoxDistance, 5, 1, 1, 1);

        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 8, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_8 = new QGridLayout(tab_4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 0, -1, -1);
        descriptionModeLabel = new QLabel(tab_4);
        descriptionModeLabel->setObjectName(QString::fromUtf8("descriptionModeLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(descriptionModeLabel->sizePolicy().hasHeightForWidth());
        descriptionModeLabel->setSizePolicy(sizePolicy4);
        descriptionModeLabel->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        descriptionModeLabel->setWordWrap(true);

        verticalLayout_2->addWidget(descriptionModeLabel);

        verticalSpacer_8 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);


        gridLayout_3->addLayout(verticalLayout_2, 0, 2, 6, 1);

        label = new QLabel(tab_4);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(120, 0));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        cbMode = new QComboBox(tab_4);
        cbMode->setObjectName(QString::fromUtf8("cbMode"));
        cbMode->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(cbMode, 0, 1, 1, 1);

        dsb_modeParam1 = new QDoubleSpinBox(tab_4);
        dsb_modeParam1->setObjectName(QString::fromUtf8("dsb_modeParam1"));
        dsb_modeParam1->setMaximum(999999999.000000000000000);
        dsb_modeParam1->setSingleStep(0.010000000000000);

        gridLayout_3->addWidget(dsb_modeParam1, 1, 1, 1, 1);

        modeParam1 = new QLabel(tab_4);
        modeParam1->setObjectName(QString::fromUtf8("modeParam1"));
        sizePolicy2.setHeightForWidth(modeParam1->sizePolicy().hasHeightForWidth());
        modeParam1->setSizePolicy(sizePolicy2);
        modeParam1->setMinimumSize(QSize(100, 0));
        modeParam1->setLayoutDirection(Qt::LeftToRight);
        modeParam1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(modeParam1, 1, 0, 1, 1);

        modeParam2 = new QLabel(tab_4);
        modeParam2->setObjectName(QString::fromUtf8("modeParam2"));
        sizePolicy2.setHeightForWidth(modeParam2->sizePolicy().hasHeightForWidth());
        modeParam2->setSizePolicy(sizePolicy2);
        modeParam2->setLayoutDirection(Qt::LeftToRight);
        modeParam2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        modeParam2->setWordWrap(true);

        gridLayout_3->addWidget(modeParam2, 2, 0, 1, 1);

        modeParam3 = new QLabel(tab_4);
        modeParam3->setObjectName(QString::fromUtf8("modeParam3"));
        sizePolicy2.setHeightForWidth(modeParam3->sizePolicy().hasHeightForWidth());
        modeParam3->setSizePolicy(sizePolicy2);
        modeParam3->setLayoutDirection(Qt::LeftToRight);
        modeParam3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        modeParam3->setWordWrap(true);

        gridLayout_3->addWidget(modeParam3, 3, 0, 1, 1);

        modeParam4 = new QLabel(tab_4);
        modeParam4->setObjectName(QString::fromUtf8("modeParam4"));
        sizePolicy2.setHeightForWidth(modeParam4->sizePolicy().hasHeightForWidth());
        modeParam4->setSizePolicy(sizePolicy2);
        modeParam4->setLayoutDirection(Qt::LeftToRight);
        modeParam4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        modeParam4->setWordWrap(true);

        gridLayout_3->addWidget(modeParam4, 4, 0, 1, 1);

        dsb_modeParam2 = new QDoubleSpinBox(tab_4);
        dsb_modeParam2->setObjectName(QString::fromUtf8("dsb_modeParam2"));
        dsb_modeParam2->setMaximum(999999999.000000000000000);
        dsb_modeParam2->setSingleStep(0.010000000000000);

        gridLayout_3->addWidget(dsb_modeParam2, 2, 1, 1, 1);

        dsb_modeParam3 = new QDoubleSpinBox(tab_4);
        dsb_modeParam3->setObjectName(QString::fromUtf8("dsb_modeParam3"));
        dsb_modeParam3->setMaximum(999999999.000000000000000);
        dsb_modeParam3->setSingleStep(0.010000000000000);

        gridLayout_3->addWidget(dsb_modeParam3, 3, 1, 1, 1);

        dsb_modeParam4 = new QDoubleSpinBox(tab_4);
        dsb_modeParam4->setObjectName(QString::fromUtf8("dsb_modeParam4"));
        dsb_modeParam4->setMaximum(999999999.000000000000000);
        dsb_modeParam4->setSingleStep(0.010000000000000);

        gridLayout_3->addWidget(dsb_modeParam4, 4, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 5, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_3, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_7 = new QGridLayout(tab);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 5, 1, 1, 1);

        Condition = new QLabel(tab);
        Condition->setObjectName(QString::fromUtf8("Condition"));
        sizePolicy2.setHeightForWidth(Condition->sizePolicy().hasHeightForWidth());
        Condition->setSizePolicy(sizePolicy2);
        Condition->setMinimumSize(QSize(120, 0));
        Condition->setLayoutDirection(Qt::LeftToRight);
        Condition->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(Condition, 0, 0, 1, 1);

        cbCondition = new QComboBox(tab);
        cbCondition->setObjectName(QString::fromUtf8("cbCondition"));
        cbCondition->setMinimumSize(QSize(150, 0));

        gridLayout_4->addWidget(cbCondition, 0, 1, 1, 1);

        dsb_condParam1 = new QDoubleSpinBox(tab);
        dsb_condParam1->setObjectName(QString::fromUtf8("dsb_condParam1"));
        dsb_condParam1->setMaximum(999999999.000000000000000);
        dsb_condParam1->setSingleStep(0.010000000000000);

        gridLayout_4->addWidget(dsb_condParam1, 1, 1, 1, 1);

        condParam1 = new QLabel(tab);
        condParam1->setObjectName(QString::fromUtf8("condParam1"));
        sizePolicy2.setHeightForWidth(condParam1->sizePolicy().hasHeightForWidth());
        condParam1->setSizePolicy(sizePolicy2);
        condParam1->setLayoutDirection(Qt::LeftToRight);
        condParam1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        condParam1->setWordWrap(true);

        gridLayout_4->addWidget(condParam1, 1, 0, 1, 1);

        condParam2 = new QLabel(tab);
        condParam2->setObjectName(QString::fromUtf8("condParam2"));
        sizePolicy2.setHeightForWidth(condParam2->sizePolicy().hasHeightForWidth());
        condParam2->setSizePolicy(sizePolicy2);
        condParam2->setLayoutDirection(Qt::LeftToRight);
        condParam2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        condParam2->setWordWrap(true);

        gridLayout_4->addWidget(condParam2, 2, 0, 1, 1);

        condParam3 = new QLabel(tab);
        condParam3->setObjectName(QString::fromUtf8("condParam3"));
        sizePolicy2.setHeightForWidth(condParam3->sizePolicy().hasHeightForWidth());
        condParam3->setSizePolicy(sizePolicy2);
        condParam3->setLayoutDirection(Qt::LeftToRight);
        condParam3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        condParam3->setWordWrap(true);

        gridLayout_4->addWidget(condParam3, 3, 0, 1, 1);

        condParam4 = new QLabel(tab);
        condParam4->setObjectName(QString::fromUtf8("condParam4"));
        sizePolicy2.setHeightForWidth(condParam4->sizePolicy().hasHeightForWidth());
        condParam4->setSizePolicy(sizePolicy2);
        condParam4->setLayoutDirection(Qt::LeftToRight);
        condParam4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        condParam4->setWordWrap(true);

        gridLayout_4->addWidget(condParam4, 4, 0, 1, 1);

        dsb_condParam2 = new QDoubleSpinBox(tab);
        dsb_condParam2->setObjectName(QString::fromUtf8("dsb_condParam2"));
        dsb_condParam2->setMaximum(999999999.000000000000000);
        dsb_condParam2->setSingleStep(0.010000000000000);

        gridLayout_4->addWidget(dsb_condParam2, 2, 1, 1, 1);

        dsb_condParam3 = new QDoubleSpinBox(tab);
        dsb_condParam3->setObjectName(QString::fromUtf8("dsb_condParam3"));
        dsb_condParam3->setMaximum(999999999.000000000000000);
        dsb_condParam3->setSingleStep(0.010000000000000);

        gridLayout_4->addWidget(dsb_condParam3, 3, 1, 1, 1);

        dsb_condParam4 = new QDoubleSpinBox(tab);
        dsb_condParam4->setObjectName(QString::fromUtf8("dsb_condParam4"));
        dsb_condParam4->setMaximum(999999999.000000000000000);
        dsb_condParam4->setSingleStep(0.010000000000000);

        gridLayout_4->addWidget(dsb_condParam4, 4, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 0, -1, -1);
        descriptionConditionLabel = new QLabel(tab);
        descriptionConditionLabel->setObjectName(QString::fromUtf8("descriptionConditionLabel"));
        sizePolicy4.setHeightForWidth(descriptionConditionLabel->sizePolicy().hasHeightForWidth());
        descriptionConditionLabel->setSizePolicy(sizePolicy4);
        descriptionConditionLabel->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        descriptionConditionLabel->setWordWrap(true);

        verticalLayout_4->addWidget(descriptionConditionLabel);

        verticalSpacer_9 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);


        gridLayout_4->addLayout(verticalLayout_4, 0, 2, 6, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 4, 0, 1, 1);

        line = new QFrame(tab_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_5->setContentsMargins(-1, -1, 0, -1);
        descriptionCommandLabel = new QLabel(tab_2);
        descriptionCommandLabel->setObjectName(QString::fromUtf8("descriptionCommandLabel"));
        sizePolicy4.setHeightForWidth(descriptionCommandLabel->sizePolicy().hasHeightForWidth());
        descriptionCommandLabel->setSizePolicy(sizePolicy4);
        descriptionCommandLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        descriptionCommandLabel->setWordWrap(true);

        gridLayout_5->addWidget(descriptionCommandLabel, 2, 1, 1, 4);

        horizontalSpacer_5 = new QSpacerItem(6, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        sbJump = new QSpinBox(tab_2);
        sbJump->setObjectName(QString::fromUtf8("sbJump"));
        sbJump->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(sbJump);

        horizontalSpacer_2 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_5->addLayout(horizontalLayout_2, 1, 2, 1, 2);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(130, 0));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 2);

        cbCommand = new QComboBox(tab_2);
        cbCommand->setObjectName(QString::fromUtf8("cbCommand"));
        cbCommand->setMinimumSize(QSize(210, 0));

        gridLayout_5->addWidget(cbCommand, 0, 2, 1, 2);

        jumpDest = new QLabel(tab_2);
        jumpDest->setObjectName(QString::fromUtf8("jumpDest"));
        sizePolicy2.setHeightForWidth(jumpDest->sizePolicy().hasHeightForWidth());
        jumpDest->setSizePolicy(sizePolicy2);
        jumpDest->setLayoutDirection(Qt::LeftToRight);
        jumpDest->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        jumpDest->setWordWrap(true);

        gridLayout_5->addWidget(jumpDest, 1, 0, 1, 2);

        horizontalSpacer_7 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 2, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, -1);
        horizontalSpacer_9 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        descriptionErrorDestinationLabel = new QLabel(tab_2);
        descriptionErrorDestinationLabel->setObjectName(QString::fromUtf8("descriptionErrorDestinationLabel"));
        sizePolicy4.setHeightForWidth(descriptionErrorDestinationLabel->sizePolicy().hasHeightForWidth());
        descriptionErrorDestinationLabel->setSizePolicy(sizePolicy4);
        descriptionErrorDestinationLabel->setWordWrap(true);

        gridLayout_9->addWidget(descriptionErrorDestinationLabel, 1, 1, 1, 3);

        condParam2_2 = new QLabel(tab_2);
        condParam2_2->setObjectName(QString::fromUtf8("condParam2_2"));
        sizePolicy2.setHeightForWidth(condParam2_2->sizePolicy().hasHeightForWidth());
        condParam2_2->setSizePolicy(sizePolicy2);
        condParam2_2->setMinimumSize(QSize(130, 0));
        condParam2_2->setLayoutDirection(Qt::LeftToRight);
        condParam2_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        condParam2_2->setWordWrap(true);

        gridLayout_9->addWidget(condParam2_2, 0, 0, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_8, 1, 4, 1, 1);

        sbError = new QSpinBox(tab_2);
        sbError->setObjectName(QString::fromUtf8("sbError"));
        sbError->setMinimumSize(QSize(60, 0));

        gridLayout_9->addWidget(sbError, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 0, 3, 1, 1);


        gridLayout_6->addLayout(gridLayout_9, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonPrevious = new QPushButton(opmap_edit_waypoint_dialog);
        pushButtonPrevious->setObjectName(QString::fromUtf8("pushButtonPrevious"));

        horizontalLayout->addWidget(pushButtonPrevious);

        wpNumberSpinBox = new QSpinBox(opmap_edit_waypoint_dialog);
        wpNumberSpinBox->setObjectName(QString::fromUtf8("wpNumberSpinBox"));
        wpNumberSpinBox->setAlignment(Qt::AlignCenter);
        wpNumberSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(wpNumberSpinBox);

        pushButtonNext = new QPushButton(opmap_edit_waypoint_dialog);
        pushButtonNext->setObjectName(QString::fromUtf8("pushButtonNext"));

        horizontalLayout->addWidget(pushButtonNext);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonApply = new QPushButton(opmap_edit_waypoint_dialog);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));

        horizontalLayout->addWidget(pushButtonApply);

        pushButtonOK = new QPushButton(opmap_edit_waypoint_dialog);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(opmap_edit_waypoint_dialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(opmap_edit_waypoint_dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(opmap_edit_waypoint_dialog);
    } // setupUi

    void retranslateUi(QWidget *opmap_edit_waypoint_dialog)
    {
        opmap_edit_waypoint_dialog->setWindowTitle(QApplication::translate("opmap_edit_waypoint_dialog", "LibrePilot GCS Edit Waypoint", nullptr));
        lbLat->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Latitude ", nullptr));
        lbLong->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Longitude ", nullptr));
        label_8->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Description ", nullptr));
        lbDegLong->setText(QApplication::translate("opmap_edit_waypoint_dialog", "degrees", nullptr));
        lbDegLat->setText(QApplication::translate("opmap_edit_waypoint_dialog", "degrees", nullptr));
        Type->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Relative to Home ", nullptr));
        lbDistanceMeters->setText(QApplication::translate("opmap_edit_waypoint_dialog", "meters", nullptr));
        lbBearingDeg->setText(QApplication::translate("opmap_edit_waypoint_dialog", "degrees", nullptr));
        lbBearing->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Bearing ", nullptr));
        lbDistance->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Distance ", nullptr));
        checkBoxLocked->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Locked", nullptr));
        label_7->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Number ", nullptr));
        lbNumber->setText(QApplication::translate("opmap_edit_waypoint_dialog", "0", nullptr));
        checkBoxRelative->setText(QString());
        label_4->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Velocity ", nullptr));
        label_3->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Altitude ", nullptr));
        label_6->setText(QApplication::translate("opmap_edit_waypoint_dialog", "meters", nullptr));
        label_5->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Relative altitude ", nullptr));
        label_9->setText(QApplication::translate("opmap_edit_waypoint_dialog", "meters", nullptr));
        label_10->setText(QApplication::translate("opmap_edit_waypoint_dialog", "m/s", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("opmap_edit_waypoint_dialog", "Position", nullptr));
        descriptionModeLabel->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Description", nullptr));
        label->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Mode", nullptr));
        modeParam1->setText(QApplication::translate("opmap_edit_waypoint_dialog", "param1", nullptr));
        modeParam2->setText(QApplication::translate("opmap_edit_waypoint_dialog", "param2", nullptr));
        modeParam3->setText(QApplication::translate("opmap_edit_waypoint_dialog", "param3", nullptr));
        modeParam4->setText(QApplication::translate("opmap_edit_waypoint_dialog", "param4", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("opmap_edit_waypoint_dialog", "Mode", nullptr));
        Condition->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Condition", nullptr));
        condParam1->setText(QApplication::translate("opmap_edit_waypoint_dialog", "param1", nullptr));
        condParam2->setText(QApplication::translate("opmap_edit_waypoint_dialog", "param2", nullptr));
        condParam3->setText(QApplication::translate("opmap_edit_waypoint_dialog", "param3", nullptr));
        condParam4->setText(QApplication::translate("opmap_edit_waypoint_dialog", "param4", nullptr));
        descriptionConditionLabel->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Description", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("opmap_edit_waypoint_dialog", "End condition", nullptr));
        descriptionCommandLabel->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Description", nullptr));
        label_2->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Command", nullptr));
        jumpDest->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Jump Destination", nullptr));
        descriptionErrorDestinationLabel->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Description", nullptr));
        condParam2_2->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Error Destination", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("opmap_edit_waypoint_dialog", "Command", nullptr));
        pushButtonPrevious->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Previous", nullptr));
        pushButtonNext->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Next", nullptr));
        pushButtonApply->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Apply", nullptr));
        pushButtonOK->setText(QApplication::translate("opmap_edit_waypoint_dialog", "OK", nullptr));
        pushButtonCancel->setText(QApplication::translate("opmap_edit_waypoint_dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opmap_edit_waypoint_dialog: public Ui_opmap_edit_waypoint_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPMAP_EDIT_WAYPOINT_DIALOG_H
