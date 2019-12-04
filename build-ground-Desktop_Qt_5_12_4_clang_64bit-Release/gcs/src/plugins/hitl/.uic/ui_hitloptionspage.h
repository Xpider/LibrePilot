/********************************************************************************
** Form generated from reading UI file 'hitloptionspage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HITLOPTIONSPAGE_H
#define UI_HITLOPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "utils/pathchooser.h"

QT_BEGIN_NAMESPACE

class Ui_HITLOptionsPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *chooseFlightSimulatorLabel;
    QComboBox *chooseFlightSimulator;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *hostAddress;
    QLabel *label_5;
    QLineEdit *inputPort;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *remoteAddress;
    QLabel *label_4;
    QLineEdit *outputPort;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout_3;
    QLabel *label;
    Utils::PathChooser *executablePath;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_11;
    Utils::PathChooser *dataPath;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *startSim;
    QCheckBox *noiseCheckBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLineEdit *latitude;
    QLabel *label_14;
    QLineEdit *longitude;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *attRawCheckbox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QSpinBox *attRawRateSpinbox;
    QGroupBox *attStateCheckbox;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *attActSim;
    QRadioButton *attActHW;
    QRadioButton *attActCalc;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groundTruthCheckbox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QSpinBox *groundTruthRateSpinbox;
    QGroupBox *gpsPositionCheckbox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QSpinBox *gpsPosRateSpinbox;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *airspeedStateCheckbox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_15;
    QSpinBox *airspeedRateSpinbox;
    QGroupBox *baroAltitudeCheckbox;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QSpinBox *sonarMaxAlt;
    QLabel *label_12;
    QSpinBox *baroAltRateSpinbox;
    QGroupBox *inputCommandCheckbox;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *manualControlRadioButton;
    QRadioButton *gcsReceiverRadioButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSpinBox *minOutputPeriodSpinbox;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *HITLOptionsPage)
    {
        if (HITLOptionsPage->objectName().isEmpty())
            HITLOptionsPage->setObjectName(QString::fromUtf8("HITLOptionsPage"));
        HITLOptionsPage->resize(792, 530);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HITLOptionsPage->sizePolicy().hasHeightForWidth());
        HITLOptionsPage->setSizePolicy(sizePolicy);
        HITLOptionsPage->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(HITLOptionsPage);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        chooseFlightSimulatorLabel = new QLabel(HITLOptionsPage);
        chooseFlightSimulatorLabel->setObjectName(QString::fromUtf8("chooseFlightSimulatorLabel"));

        horizontalLayout->addWidget(chooseFlightSimulatorLabel);

        chooseFlightSimulator = new QComboBox(HITLOptionsPage);
        chooseFlightSimulator->setObjectName(QString::fromUtf8("chooseFlightSimulator"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chooseFlightSimulator->sizePolicy().hasHeightForWidth());
        chooseFlightSimulator->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(chooseFlightSimulator);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(HITLOptionsPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMinimumSize(QSize(0, 0));
        groupBox_3->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_10 = new QVBoxLayout(groupBox_3);
        verticalLayout_10->setSpacing(9);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        hostAddress = new QLineEdit(groupBox_3);
        hostAddress->setObjectName(QString::fromUtf8("hostAddress"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hostAddress->sizePolicy().hasHeightForWidth());
        hostAddress->setSizePolicy(sizePolicy2);
        hostAddress->setMaximumSize(QSize(125, 16777215));
        hostAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(hostAddress);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        inputPort = new QLineEdit(groupBox_3);
        inputPort->setObjectName(QString::fromUtf8("inputPort"));
        sizePolicy2.setHeightForWidth(inputPort->sizePolicy().hasHeightForWidth());
        inputPort->setSizePolicy(sizePolicy2);
        inputPort->setMaximumSize(QSize(55, 16777215));
        inputPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(inputPort);


        verticalLayout_10->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        remoteAddress = new QLineEdit(groupBox_3);
        remoteAddress->setObjectName(QString::fromUtf8("remoteAddress"));
        sizePolicy2.setHeightForWidth(remoteAddress->sizePolicy().hasHeightForWidth());
        remoteAddress->setSizePolicy(sizePolicy2);
        remoteAddress->setMaximumSize(QSize(125, 16777215));
        remoteAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(remoteAddress);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_8->addWidget(label_4);

        outputPort = new QLineEdit(groupBox_3);
        outputPort->setObjectName(QString::fromUtf8("outputPort"));
        sizePolicy2.setHeightForWidth(outputPort->sizePolicy().hasHeightForWidth());
        outputPort->setSizePolicy(sizePolicy2);
        outputPort->setMaximumSize(QSize(55, 16777215));
        outputPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(outputPort);


        verticalLayout_10->addLayout(horizontalLayout_8);


        verticalLayout->addWidget(groupBox_3);

        tabWidget = new QTabWidget(HITLOptionsPage);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        verticalLayout_11 = new QVBoxLayout(tab_1);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(6);
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(110, 16777215));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        executablePath = new Utils::PathChooser(tab_1);
        executablePath->setObjectName(QString::fromUtf8("executablePath"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(executablePath->sizePolicy().hasHeightForWidth());
        executablePath->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(executablePath, 0, 1, 1, 1);

        label_2 = new QLabel(tab_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        dataPath = new Utils::PathChooser(tab_1);
        dataPath->setObjectName(QString::fromUtf8("dataPath"));
        sizePolicy3.setHeightForWidth(dataPath->sizePolicy().hasHeightForWidth());
        dataPath->setSizePolicy(sizePolicy3);

        horizontalLayout_11->addWidget(dataPath);


        gridLayout_3->addLayout(horizontalLayout_11, 1, 1, 1, 1);


        verticalLayout_12->addLayout(gridLayout_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        startSim = new QCheckBox(tab_1);
        startSim->setObjectName(QString::fromUtf8("startSim"));
        sizePolicy.setHeightForWidth(startSim->sizePolicy().hasHeightForWidth());
        startSim->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(startSim);

        noiseCheckBox = new QCheckBox(tab_1);
        noiseCheckBox->setObjectName(QString::fromUtf8("noiseCheckBox"));
        sizePolicy.setHeightForWidth(noiseCheckBox->sizePolicy().hasHeightForWidth());
        noiseCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(noiseCheckBox);


        verticalLayout_12->addLayout(horizontalLayout_13);

        line = new QFrame(tab_1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(tab_1);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_12->addWidget(label_13);

        latitude = new QLineEdit(tab_1);
        latitude->setObjectName(QString::fromUtf8("latitude"));
        sizePolicy.setHeightForWidth(latitude->sizePolicy().hasHeightForWidth());
        latitude->setSizePolicy(sizePolicy);
        latitude->setMaximumSize(QSize(16777215, 16777215));
        latitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(latitude);

        label_14 = new QLabel(tab_1);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_12->addWidget(label_14);

        longitude = new QLineEdit(tab_1);
        longitude->setObjectName(QString::fromUtf8("longitude"));
        sizePolicy.setHeightForWidth(longitude->sizePolicy().hasHeightForWidth());
        longitude->setSizePolicy(sizePolicy);
        longitude->setMaximumSize(QSize(16777215, 16777215));
        longitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(longitude);


        verticalLayout_12->addLayout(horizontalLayout_12);


        verticalLayout_11->addLayout(verticalLayout_12);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_14 = new QVBoxLayout(tab_2);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(-1, -1, -1, 0);
        attRawCheckbox = new QGroupBox(tab_2);
        attRawCheckbox->setObjectName(QString::fromUtf8("attRawCheckbox"));
        attRawCheckbox->setEnabled(true);
        attRawCheckbox->setFlat(true);
        attRawCheckbox->setCheckable(true);
        attRawCheckbox->setChecked(false);
        horizontalLayout_4 = new QHBoxLayout(attRawCheckbox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 9, 9, 9);
        label_8 = new QLabel(attRawCheckbox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_8);

        attRawRateSpinbox = new QSpinBox(attRawCheckbox);
        attRawRateSpinbox->setObjectName(QString::fromUtf8("attRawRateSpinbox"));
        attRawRateSpinbox->setEnabled(true);
        sizePolicy1.setHeightForWidth(attRawRateSpinbox->sizePolicy().hasHeightForWidth());
        attRawRateSpinbox->setSizePolicy(sizePolicy1);
        attRawRateSpinbox->setMinimum(10);
        attRawRateSpinbox->setMaximum(100);
        attRawRateSpinbox->setValue(20);

        horizontalLayout_4->addWidget(attRawRateSpinbox);


        verticalLayout_13->addWidget(attRawCheckbox);

        attStateCheckbox = new QGroupBox(tab_2);
        attStateCheckbox->setObjectName(QString::fromUtf8("attStateCheckbox"));
        attStateCheckbox->setEnabled(true);
        attStateCheckbox->setFlat(true);
        attStateCheckbox->setCheckable(true);
        attStateCheckbox->setChecked(true);
        verticalLayout_4 = new QVBoxLayout(attStateCheckbox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 9, 9, 9);
        attActSim = new QRadioButton(attStateCheckbox);
        attActSim->setObjectName(QString::fromUtf8("attActSim"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        attActSim->setFont(font);
        attActSim->setChecked(true);

        verticalLayout_4->addWidget(attActSim);

        attActHW = new QRadioButton(attStateCheckbox);
        attActHW->setObjectName(QString::fromUtf8("attActHW"));

        verticalLayout_4->addWidget(attActHW);

        attActCalc = new QRadioButton(attStateCheckbox);
        attActCalc->setObjectName(QString::fromUtf8("attActCalc"));

        verticalLayout_4->addWidget(attActCalc);


        verticalLayout_13->addWidget(attStateCheckbox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer);


        verticalLayout_14->addLayout(verticalLayout_13);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_16 = new QVBoxLayout(tab_3);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(-1, -1, -1, 0);
        groundTruthCheckbox = new QGroupBox(tab_3);
        groundTruthCheckbox->setObjectName(QString::fromUtf8("groundTruthCheckbox"));
        groundTruthCheckbox->setFlat(true);
        groundTruthCheckbox->setCheckable(true);
        groundTruthCheckbox->setChecked(true);
        horizontalLayout_2 = new QHBoxLayout(groundTruthCheckbox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 9, 9, 9);
        label_7 = new QLabel(groundTruthCheckbox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        groundTruthRateSpinbox = new QSpinBox(groundTruthCheckbox);
        groundTruthRateSpinbox->setObjectName(QString::fromUtf8("groundTruthRateSpinbox"));
        groundTruthRateSpinbox->setEnabled(true);
        groundTruthRateSpinbox->setMinimum(1);
        groundTruthRateSpinbox->setMaximum(5000);
        groundTruthRateSpinbox->setSingleStep(100);
        groundTruthRateSpinbox->setValue(100);

        horizontalLayout_2->addWidget(groundTruthRateSpinbox);


        verticalLayout_15->addWidget(groundTruthCheckbox);

        gpsPositionCheckbox = new QGroupBox(tab_3);
        gpsPositionCheckbox->setObjectName(QString::fromUtf8("gpsPositionCheckbox"));
        gpsPositionCheckbox->setFlat(true);
        gpsPositionCheckbox->setCheckable(true);
        gpsPositionCheckbox->setChecked(false);
        horizontalLayout_5 = new QHBoxLayout(gpsPositionCheckbox);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 9, 9, 9);
        label_10 = new QLabel(gpsPositionCheckbox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setEnabled(true);

        horizontalLayout_5->addWidget(label_10);

        gpsPosRateSpinbox = new QSpinBox(gpsPositionCheckbox);
        gpsPosRateSpinbox->setObjectName(QString::fromUtf8("gpsPosRateSpinbox"));
        gpsPosRateSpinbox->setEnabled(true);
        gpsPosRateSpinbox->setMinimum(1);
        gpsPosRateSpinbox->setMaximum(5000);
        gpsPosRateSpinbox->setSingleStep(100);
        gpsPosRateSpinbox->setValue(100);

        horizontalLayout_5->addWidget(gpsPosRateSpinbox);


        verticalLayout_15->addWidget(gpsPositionCheckbox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_2);


        verticalLayout_16->addLayout(verticalLayout_15);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_9 = new QVBoxLayout(tab_4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        airspeedStateCheckbox = new QGroupBox(tab_4);
        airspeedStateCheckbox->setObjectName(QString::fromUtf8("airspeedStateCheckbox"));
        airspeedStateCheckbox->setMinimumSize(QSize(0, 0));
        airspeedStateCheckbox->setFlat(true);
        airspeedStateCheckbox->setCheckable(true);
        horizontalLayout_9 = new QHBoxLayout(airspeedStateCheckbox);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_15 = new QLabel(airspeedStateCheckbox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_9->addWidget(label_15);

        airspeedRateSpinbox = new QSpinBox(airspeedStateCheckbox);
        airspeedRateSpinbox->setObjectName(QString::fromUtf8("airspeedRateSpinbox"));
        airspeedRateSpinbox->setMaximum(5000);
        airspeedRateSpinbox->setValue(100);

        horizontalLayout_9->addWidget(airspeedRateSpinbox);


        verticalLayout_2->addWidget(airspeedStateCheckbox);

        baroAltitudeCheckbox = new QGroupBox(tab_4);
        baroAltitudeCheckbox->setObjectName(QString::fromUtf8("baroAltitudeCheckbox"));
        baroAltitudeCheckbox->setEnabled(true);
        baroAltitudeCheckbox->setFlat(true);
        baroAltitudeCheckbox->setCheckable(true);
        baroAltitudeCheckbox->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(baroAltitudeCheckbox);
#ifndef Q_OS_MAC
        verticalLayout_6->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        verticalLayout_6->setContentsMargins(9, 9, 9, 9);
#endif
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_11 = new QLabel(baroAltitudeCheckbox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        sonarMaxAlt = new QSpinBox(baroAltitudeCheckbox);
        sonarMaxAlt->setObjectName(QString::fromUtf8("sonarMaxAlt"));
        sonarMaxAlt->setMinimum(1);
        sonarMaxAlt->setMaximum(10);
        sonarMaxAlt->setValue(5);

        gridLayout_2->addWidget(sonarMaxAlt, 0, 1, 1, 1);

        label_12 = new QLabel(baroAltitudeCheckbox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        baroAltRateSpinbox = new QSpinBox(baroAltitudeCheckbox);
        baroAltRateSpinbox->setObjectName(QString::fromUtf8("baroAltRateSpinbox"));
        baroAltRateSpinbox->setMinimum(20);
        baroAltRateSpinbox->setMaximum(2000);
        baroAltRateSpinbox->setSingleStep(10);
        baroAltRateSpinbox->setValue(250);

        gridLayout_2->addWidget(baroAltRateSpinbox, 1, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(baroAltitudeCheckbox);

        inputCommandCheckbox = new QGroupBox(tab_4);
        inputCommandCheckbox->setObjectName(QString::fromUtf8("inputCommandCheckbox"));
        inputCommandCheckbox->setEnabled(true);
        inputCommandCheckbox->setFlat(true);
        inputCommandCheckbox->setCheckable(true);
        inputCommandCheckbox->setChecked(true);
        verticalLayout_5 = new QVBoxLayout(inputCommandCheckbox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 9, 9, 9);
        manualControlRadioButton = new QRadioButton(inputCommandCheckbox);
        manualControlRadioButton->setObjectName(QString::fromUtf8("manualControlRadioButton"));
        manualControlRadioButton->setEnabled(true);
        manualControlRadioButton->setFont(font);
        manualControlRadioButton->setChecked(true);

        verticalLayout_5->addWidget(manualControlRadioButton);

        gcsReceiverRadioButton = new QRadioButton(inputCommandCheckbox);
        gcsReceiverRadioButton->setObjectName(QString::fromUtf8("gcsReceiverRadioButton"));
        gcsReceiverRadioButton->setChecked(false);

        verticalLayout_5->addWidget(gcsReceiverRadioButton);


        verticalLayout_2->addWidget(inputCommandCheckbox);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        minOutputPeriodSpinbox = new QSpinBox(tab_4);
        minOutputPeriodSpinbox->setObjectName(QString::fromUtf8("minOutputPeriodSpinbox"));
        minOutputPeriodSpinbox->setEnabled(true);
        minOutputPeriodSpinbox->setMinimum(10);
        minOutputPeriodSpinbox->setMaximum(500);
        minOutputPeriodSpinbox->setSingleStep(5);
        minOutputPeriodSpinbox->setValue(100);

        horizontalLayout_6->addWidget(minOutputPeriodSpinbox);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        verticalLayout_9->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        QWidget::setTabOrder(chooseFlightSimulator, hostAddress);
        QWidget::setTabOrder(hostAddress, inputPort);
        QWidget::setTabOrder(inputPort, remoteAddress);
        QWidget::setTabOrder(remoteAddress, outputPort);

        retranslateUi(HITLOptionsPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HITLOptionsPage);
    } // setupUi

    void retranslateUi(QWidget *HITLOptionsPage)
    {
        HITLOptionsPage->setWindowTitle(QApplication::translate("HITLOptionsPage", "Form", nullptr));
        chooseFlightSimulatorLabel->setText(QApplication::translate("HITLOptionsPage", "Choose flight simulator:", nullptr));
        groupBox_3->setTitle(QApplication::translate("HITLOptionsPage", "IP addresses", nullptr));
        label_6->setText(QApplication::translate("HITLOptionsPage", "Local host:    ", nullptr));
#ifndef QT_NO_TOOLTIP
        hostAddress->setToolTip(QApplication::translate("HITLOptionsPage", "For communication with sim computer via network. Should be the IP address of one of the interfaces of the GCS computer.", nullptr));
#endif // QT_NO_TOOLTIP
        hostAddress->setText(QString());
        label_5->setText(QApplication::translate("HITLOptionsPage", "Port:", nullptr));
#ifndef QT_NO_TOOLTIP
        inputPort->setToolTip(QApplication::translate("HITLOptionsPage", "IP port for receiving data from sim", nullptr));
#endif // QT_NO_TOOLTIP
        inputPort->setText(QString());
        label_9->setText(QApplication::translate("HITLOptionsPage", "Remote host:", nullptr));
#ifndef QT_NO_TOOLTIP
        remoteAddress->setToolTip(QApplication::translate("HITLOptionsPage", "Only required if running simulator on remote machine. Should be the IP of the machine on which the simulator is running.", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("HITLOptionsPage", "Port:", nullptr));
#ifndef QT_NO_TOOLTIP
        outputPort->setToolTip(QApplication::translate("HITLOptionsPage", "IP port for sending data to sim", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("HITLOptionsPage", "Path executable:", nullptr));
        label_2->setText(QApplication::translate("HITLOptionsPage", "Data directory:", nullptr));
#ifndef QT_NO_TOOLTIP
        startSim->setToolTip(QApplication::translate("HITLOptionsPage", "Check this box to start the simulator on the local computer", nullptr));
#endif // QT_NO_TOOLTIP
        startSim->setText(QApplication::translate("HITLOptionsPage", "Start simulator on local machine", nullptr));
#ifndef QT_NO_TOOLTIP
        noiseCheckBox->setToolTip(QApplication::translate("HITLOptionsPage", "Add noise to sensor simulation", nullptr));
#endif // QT_NO_TOOLTIP
        noiseCheckBox->setText(QApplication::translate("HITLOptionsPage", "Add noise", nullptr));
        label_13->setText(QApplication::translate("HITLOptionsPage", "Initial latitude (decimal):", nullptr));
        latitude->setText(QString());
        label_14->setText(QApplication::translate("HITLOptionsPage", "Initial longitude (decimal):", nullptr));
        longitude->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("HITLOptionsPage", "Program Parameters", nullptr));
        attRawCheckbox->setTitle(QApplication::translate("HITLOptionsPage", "AttitudeRaw (gyro, accels)", nullptr));
        label_8->setText(QApplication::translate("HITLOptionsPage", "Refresh rate:", nullptr));
#ifndef QT_NO_TOOLTIP
        attRawRateSpinbox->setToolTip(QApplication::translate("HITLOptionsPage", "0 - update once, or every N seconds", nullptr));
#endif // QT_NO_TOOLTIP
        attRawRateSpinbox->setSuffix(QApplication::translate("HITLOptionsPage", "ms", nullptr));
        attStateCheckbox->setTitle(QApplication::translate("HITLOptionsPage", "AttitudeState", nullptr));
#ifndef QT_NO_TOOLTIP
        attActSim->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        attActSim->setText(QApplication::translate("HITLOptionsPage", "use values from simulator", nullptr));
        attActHW->setText(QApplication::translate("HITLOptionsPage", "send simulated inertial data to board", nullptr));
#ifndef QT_NO_TOOLTIP
        attActCalc->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        attActCalc->setText(QApplication::translate("HITLOptionsPage", "calculate from simulated sensor data", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("HITLOptionsPage", "Attitude Data", nullptr));
        groundTruthCheckbox->setTitle(QApplication::translate("HITLOptionsPage", "Ground truth position and velocity", nullptr));
        label_7->setText(QApplication::translate("HITLOptionsPage", "Refresh rate:", nullptr));
#ifndef QT_NO_TOOLTIP
        groundTruthRateSpinbox->setToolTip(QApplication::translate("HITLOptionsPage", "0 - update once, or every N seconds", nullptr));
#endif // QT_NO_TOOLTIP
        groundTruthRateSpinbox->setSuffix(QApplication::translate("HITLOptionsPage", "ms", nullptr));
        gpsPositionCheckbox->setTitle(QApplication::translate("HITLOptionsPage", "GPS data", nullptr));
        label_10->setText(QApplication::translate("HITLOptionsPage", "Refresh rate:", nullptr));
#ifndef QT_NO_TOOLTIP
        gpsPosRateSpinbox->setToolTip(QApplication::translate("HITLOptionsPage", "0 - update once, or every N seconds", nullptr));
#endif // QT_NO_TOOLTIP
        gpsPosRateSpinbox->setSuffix(QApplication::translate("HITLOptionsPage", "ms", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("HITLOptionsPage", "Spatial Data", nullptr));
        airspeedStateCheckbox->setTitle(QApplication::translate("HITLOptionsPage", "AirspeedState", nullptr));
        label_15->setText(QApplication::translate("HITLOptionsPage", "Refresh rate:", nullptr));
#ifndef QT_NO_TOOLTIP
        airspeedRateSpinbox->setToolTip(QApplication::translate("HITLOptionsPage", "0 - update once, or every N seconds", nullptr));
#endif // QT_NO_TOOLTIP
        airspeedRateSpinbox->setSuffix(QApplication::translate("HITLOptionsPage", "ms", nullptr));
        baroAltitudeCheckbox->setTitle(QApplication::translate("HITLOptionsPage", "BaroAltitude", nullptr));
        label_11->setText(QApplication::translate("HITLOptionsPage", "Range detection:", nullptr));
        sonarMaxAlt->setSuffix(QApplication::translate("HITLOptionsPage", "m", nullptr));
        label_12->setText(QApplication::translate("HITLOptionsPage", "Refresh rate:", nullptr));
#ifndef QT_NO_TOOLTIP
        baroAltRateSpinbox->setToolTip(QApplication::translate("HITLOptionsPage", "0 - update once, or every N seconds", nullptr));
#endif // QT_NO_TOOLTIP
        baroAltRateSpinbox->setSuffix(QApplication::translate("HITLOptionsPage", "ms", nullptr));
        inputCommandCheckbox->setTitle(QApplication::translate("HITLOptionsPage", "Map transmitter commands...", nullptr));
        manualControlRadioButton->setText(QApplication::translate("HITLOptionsPage", "from hardware to simulator (via ManualCtrl)", nullptr));
        gcsReceiverRadioButton->setText(QApplication::translate("HITLOptionsPage", "from simulator to hardware (via GCSReceiver)", nullptr));
        label_3->setText(QApplication::translate("HITLOptionsPage", "Maximum GCS to hardware output rate:", nullptr));
#ifndef QT_NO_TOOLTIP
        minOutputPeriodSpinbox->setToolTip(QApplication::translate("HITLOptionsPage", "Set the maximum rate at which GCS sends simulator data to the hardware", nullptr));
#endif // QT_NO_TOOLTIP
        minOutputPeriodSpinbox->setSuffix(QApplication::translate("HITLOptionsPage", "ms", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("HITLOptionsPage", "Other Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HITLOptionsPage: public Ui_HITLOptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HITLOPTIONSPAGE_H
