/********************************************************************************
** Form generated from reading UI file 'gcscontrolgadgetoptionspage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GCSCONTROLGADGETOPTIONSPAGE_H
#define UI_GCSCONTROLGADGETOPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GCSControlGadgetOptionsPage
{
public:
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *controlsMode;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QComboBox *AvailableControllerList;
    QTabWidget *UDPSetup;
    QWidget *tabWidgetPage2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QComboBox *channel0;
    QCheckBox *revCheckBox_1;
    QCheckBox *revCheckBox_2;
    QComboBox *channel1;
    QComboBox *channel2;
    QComboBox *channel3;
    QComboBox *channel4;
    QComboBox *channel5;
    QComboBox *channel6;
    QComboBox *channel7;
    QProgressBar *joyCh1;
    QProgressBar *joyCh0;
    QProgressBar *joyCh2;
    QProgressBar *joyCh3;
    QProgressBar *joyCh4;
    QProgressBar *joyCh5;
    QProgressBar *joyCh6;
    QProgressBar *joyCh7;
    QCheckBox *revCheckBox_3;
    QCheckBox *revCheckBox_4;
    QCheckBox *revCheckBox_5;
    QCheckBox *revCheckBox_6;
    QCheckBox *revCheckBox_7;
    QCheckBox *revCheckBox_8;
    QLabel *label_3;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *buttonAmount0;
    QDoubleSpinBox *buttonAmount1;
    QDoubleSpinBox *buttonAmount2;
    QDoubleSpinBox *buttonAmount3;
    QDoubleSpinBox *buttonAmount4;
    QDoubleSpinBox *buttonAmount5;
    QDoubleSpinBox *buttonAmount6;
    QDoubleSpinBox *buttonAmount7;
    QCheckBox *buttonInput0;
    QCheckBox *buttonInput1;
    QCheckBox *buttonInput7;
    QCheckBox *buttonInput6;
    QCheckBox *buttonInput5;
    QCheckBox *buttonInput4;
    QCheckBox *buttonInput3;
    QCheckBox *buttonInput2;
    QComboBox *buttonFunction0;
    QComboBox *buttonFunction1;
    QComboBox *buttonFunction2;
    QComboBox *buttonFunction3;
    QComboBox *buttonAction3;
    QComboBox *buttonAction2;
    QComboBox *buttonAction1;
    QComboBox *buttonAction0;
    QComboBox *buttonAction4;
    QComboBox *buttonAction5;
    QComboBox *buttonAction6;
    QComboBox *buttonAction7;
    QComboBox *buttonFunction4;
    QComboBox *buttonFunction5;
    QComboBox *buttonFunction6;
    QLabel *buttonLabel7;
    QComboBox *buttonFunction7;
    QLabel *buttonLabel6;
    QLabel *buttonLabel5;
    QLabel *buttonLabel4;
    QLabel *buttonLabel3;
    QLabel *buttonLabel2;
    QLabel *buttonLabel1;
    QLabel *buttonLabel0;
    QWidget *tabWidgetPage3;
    QVBoxLayout *verticalLayout_5;
    QLabel *telemetryLabel;
    QSpacerItem *verticalSpacer;
    QWidget *UDPSetup_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *udp_host;
    QLabel *label_6;
    QLineEdit *udp_port;

    void setupUi(QWidget *GCSControlGadgetOptionsPage)
    {
        if (GCSControlGadgetOptionsPage->objectName().isEmpty())
            GCSControlGadgetOptionsPage->setObjectName(QString::fromUtf8("GCSControlGadgetOptionsPage"));
        GCSControlGadgetOptionsPage->resize(810, 464);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GCSControlGadgetOptionsPage->sizePolicy().hasHeightForWidth());
        GCSControlGadgetOptionsPage->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(GCSControlGadgetOptionsPage);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        scrollArea = new QScrollArea(GCSControlGadgetOptionsPage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 810, 464));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(scrollAreaWidgetContents_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        controlsMode = new QComboBox(widget);
        controlsMode->addItem(QString());
        controlsMode->addItem(QString());
        controlsMode->addItem(QString());
        controlsMode->addItem(QString());
        controlsMode->setObjectName(QString::fromUtf8("controlsMode"));

        horizontalLayout->addWidget(controlsMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(false);

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        AvailableControllerList = new QComboBox(widget);
        AvailableControllerList->addItem(QString());
        AvailableControllerList->setObjectName(QString::fromUtf8("AvailableControllerList"));
        AvailableControllerList->setEnabled(true);

        horizontalLayout->addWidget(AvailableControllerList);


        verticalLayout_4->addLayout(horizontalLayout);

        UDPSetup = new QTabWidget(widget);
        UDPSetup->setObjectName(QString::fromUtf8("UDPSetup"));
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QString::fromUtf8("tabWidgetPage2"));
        verticalLayout_3 = new QVBoxLayout(tabWidgetPage2);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        channel0 = new QComboBox(tabWidgetPage2);
        channel0->setObjectName(QString::fromUtf8("channel0"));

        gridLayout_2->addWidget(channel0, 2, 0, 1, 1);

        revCheckBox_1 = new QCheckBox(tabWidgetPage2);
        revCheckBox_1->setObjectName(QString::fromUtf8("revCheckBox_1"));

        gridLayout_2->addWidget(revCheckBox_1, 2, 2, 1, 1);

        revCheckBox_2 = new QCheckBox(tabWidgetPage2);
        revCheckBox_2->setObjectName(QString::fromUtf8("revCheckBox_2"));

        gridLayout_2->addWidget(revCheckBox_2, 3, 2, 1, 1);

        channel1 = new QComboBox(tabWidgetPage2);
        channel1->setObjectName(QString::fromUtf8("channel1"));

        gridLayout_2->addWidget(channel1, 3, 0, 1, 1);

        channel2 = new QComboBox(tabWidgetPage2);
        channel2->setObjectName(QString::fromUtf8("channel2"));

        gridLayout_2->addWidget(channel2, 4, 0, 1, 1);

        channel3 = new QComboBox(tabWidgetPage2);
        channel3->setObjectName(QString::fromUtf8("channel3"));

        gridLayout_2->addWidget(channel3, 5, 0, 1, 1);

        channel4 = new QComboBox(tabWidgetPage2);
        channel4->setObjectName(QString::fromUtf8("channel4"));

        gridLayout_2->addWidget(channel4, 6, 0, 1, 1);

        channel5 = new QComboBox(tabWidgetPage2);
        channel5->setObjectName(QString::fromUtf8("channel5"));

        gridLayout_2->addWidget(channel5, 7, 0, 1, 1);

        channel6 = new QComboBox(tabWidgetPage2);
        channel6->setObjectName(QString::fromUtf8("channel6"));

        gridLayout_2->addWidget(channel6, 8, 0, 1, 1);

        channel7 = new QComboBox(tabWidgetPage2);
        channel7->setObjectName(QString::fromUtf8("channel7"));

        gridLayout_2->addWidget(channel7, 9, 0, 1, 1);

        joyCh1 = new QProgressBar(tabWidgetPage2);
        joyCh1->setObjectName(QString::fromUtf8("joyCh1"));
        joyCh1->setValue(24);

        gridLayout_2->addWidget(joyCh1, 3, 1, 1, 1);

        joyCh0 = new QProgressBar(tabWidgetPage2);
        joyCh0->setObjectName(QString::fromUtf8("joyCh0"));
        joyCh0->setValue(24);

        gridLayout_2->addWidget(joyCh0, 2, 1, 1, 1);

        joyCh2 = new QProgressBar(tabWidgetPage2);
        joyCh2->setObjectName(QString::fromUtf8("joyCh2"));
        joyCh2->setValue(24);

        gridLayout_2->addWidget(joyCh2, 4, 1, 1, 1);

        joyCh3 = new QProgressBar(tabWidgetPage2);
        joyCh3->setObjectName(QString::fromUtf8("joyCh3"));
        joyCh3->setValue(24);

        gridLayout_2->addWidget(joyCh3, 5, 1, 1, 1);

        joyCh4 = new QProgressBar(tabWidgetPage2);
        joyCh4->setObjectName(QString::fromUtf8("joyCh4"));
        joyCh4->setValue(24);

        gridLayout_2->addWidget(joyCh4, 6, 1, 1, 1);

        joyCh5 = new QProgressBar(tabWidgetPage2);
        joyCh5->setObjectName(QString::fromUtf8("joyCh5"));
        joyCh5->setValue(24);

        gridLayout_2->addWidget(joyCh5, 7, 1, 1, 1);

        joyCh6 = new QProgressBar(tabWidgetPage2);
        joyCh6->setObjectName(QString::fromUtf8("joyCh6"));
        joyCh6->setValue(24);

        gridLayout_2->addWidget(joyCh6, 8, 1, 1, 1);

        joyCh7 = new QProgressBar(tabWidgetPage2);
        joyCh7->setObjectName(QString::fromUtf8("joyCh7"));
        joyCh7->setValue(24);

        gridLayout_2->addWidget(joyCh7, 9, 1, 1, 1);

        revCheckBox_3 = new QCheckBox(tabWidgetPage2);
        revCheckBox_3->setObjectName(QString::fromUtf8("revCheckBox_3"));

        gridLayout_2->addWidget(revCheckBox_3, 4, 2, 1, 1);

        revCheckBox_4 = new QCheckBox(tabWidgetPage2);
        revCheckBox_4->setObjectName(QString::fromUtf8("revCheckBox_4"));

        gridLayout_2->addWidget(revCheckBox_4, 5, 2, 1, 1);

        revCheckBox_5 = new QCheckBox(tabWidgetPage2);
        revCheckBox_5->setObjectName(QString::fromUtf8("revCheckBox_5"));

        gridLayout_2->addWidget(revCheckBox_5, 6, 2, 1, 1);

        revCheckBox_6 = new QCheckBox(tabWidgetPage2);
        revCheckBox_6->setObjectName(QString::fromUtf8("revCheckBox_6"));

        gridLayout_2->addWidget(revCheckBox_6, 7, 2, 1, 1);

        revCheckBox_7 = new QCheckBox(tabWidgetPage2);
        revCheckBox_7->setObjectName(QString::fromUtf8("revCheckBox_7"));

        gridLayout_2->addWidget(revCheckBox_7, 8, 2, 1, 1);

        revCheckBox_8 = new QCheckBox(tabWidgetPage2);
        revCheckBox_8->setObjectName(QString::fromUtf8("revCheckBox_8"));

        gridLayout_2->addWidget(revCheckBox_8, 9, 2, 1, 1);

        label_3 = new QLabel(tabWidgetPage2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        verticalLayout_3->setStretch(0, 1);
        UDPSetup->addTab(tabWidgetPage2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_3->setVerticalSpacing(4);
        buttonAmount0 = new QDoubleSpinBox(tab);
        buttonAmount0->setObjectName(QString::fromUtf8("buttonAmount0"));
        sizePolicy1.setHeightForWidth(buttonAmount0->sizePolicy().hasHeightForWidth());
        buttonAmount0->setSizePolicy(sizePolicy1);
        buttonAmount0->setDecimals(2);
        buttonAmount0->setMinimum(0.000000000000000);
        buttonAmount0->setMaximum(1.000000000000000);
        buttonAmount0->setSingleStep(0.100000000000000);
        buttonAmount0->setValue(0.100000000000000);

        gridLayout_3->addWidget(buttonAmount0, 0, 5, 1, 1);

        buttonAmount1 = new QDoubleSpinBox(tab);
        buttonAmount1->setObjectName(QString::fromUtf8("buttonAmount1"));
        sizePolicy1.setHeightForWidth(buttonAmount1->sizePolicy().hasHeightForWidth());
        buttonAmount1->setSizePolicy(sizePolicy1);
        buttonAmount1->setDecimals(2);
        buttonAmount1->setMinimum(0.000000000000000);
        buttonAmount1->setMaximum(1.000000000000000);
        buttonAmount1->setSingleStep(0.100000000000000);
        buttonAmount1->setValue(0.100000000000000);

        gridLayout_3->addWidget(buttonAmount1, 1, 5, 1, 1);

        buttonAmount2 = new QDoubleSpinBox(tab);
        buttonAmount2->setObjectName(QString::fromUtf8("buttonAmount2"));
        sizePolicy1.setHeightForWidth(buttonAmount2->sizePolicy().hasHeightForWidth());
        buttonAmount2->setSizePolicy(sizePolicy1);
        buttonAmount2->setDecimals(2);
        buttonAmount2->setMinimum(0.000000000000000);
        buttonAmount2->setMaximum(1.000000000000000);
        buttonAmount2->setSingleStep(0.100000000000000);
        buttonAmount2->setValue(0.100000000000000);

        gridLayout_3->addWidget(buttonAmount2, 2, 5, 1, 1);

        buttonAmount3 = new QDoubleSpinBox(tab);
        buttonAmount3->setObjectName(QString::fromUtf8("buttonAmount3"));
        sizePolicy1.setHeightForWidth(buttonAmount3->sizePolicy().hasHeightForWidth());
        buttonAmount3->setSizePolicy(sizePolicy1);
        buttonAmount3->setDecimals(2);
        buttonAmount3->setMinimum(0.000000000000000);
        buttonAmount3->setMaximum(1.000000000000000);
        buttonAmount3->setSingleStep(0.100000000000000);
        buttonAmount3->setValue(0.100000000000000);

        gridLayout_3->addWidget(buttonAmount3, 3, 5, 1, 1);

        buttonAmount4 = new QDoubleSpinBox(tab);
        buttonAmount4->setObjectName(QString::fromUtf8("buttonAmount4"));
        sizePolicy1.setHeightForWidth(buttonAmount4->sizePolicy().hasHeightForWidth());
        buttonAmount4->setSizePolicy(sizePolicy1);
        buttonAmount4->setDecimals(2);
        buttonAmount4->setMinimum(0.000000000000000);
        buttonAmount4->setMaximum(1.000000000000000);
        buttonAmount4->setSingleStep(0.100000000000000);
        buttonAmount4->setValue(0.100000000000000);

        gridLayout_3->addWidget(buttonAmount4, 4, 5, 1, 1);

        buttonAmount5 = new QDoubleSpinBox(tab);
        buttonAmount5->setObjectName(QString::fromUtf8("buttonAmount5"));
        sizePolicy1.setHeightForWidth(buttonAmount5->sizePolicy().hasHeightForWidth());
        buttonAmount5->setSizePolicy(sizePolicy1);
        buttonAmount5->setDecimals(2);
        buttonAmount5->setMinimum(0.000000000000000);
        buttonAmount5->setMaximum(1.000000000000000);
        buttonAmount5->setSingleStep(0.100000000000000);
        buttonAmount5->setValue(0.100000000000000);

        gridLayout_3->addWidget(buttonAmount5, 5, 5, 1, 1);

        buttonAmount6 = new QDoubleSpinBox(tab);
        buttonAmount6->setObjectName(QString::fromUtf8("buttonAmount6"));
        sizePolicy1.setHeightForWidth(buttonAmount6->sizePolicy().hasHeightForWidth());
        buttonAmount6->setSizePolicy(sizePolicy1);
        buttonAmount6->setDecimals(2);
        buttonAmount6->setMinimum(0.000000000000000);
        buttonAmount6->setMaximum(1.000000000000000);
        buttonAmount6->setSingleStep(0.100000000000000);
        buttonAmount6->setValue(0.100000000000000);

        gridLayout_3->addWidget(buttonAmount6, 6, 5, 1, 1);

        buttonAmount7 = new QDoubleSpinBox(tab);
        buttonAmount7->setObjectName(QString::fromUtf8("buttonAmount7"));
        sizePolicy1.setHeightForWidth(buttonAmount7->sizePolicy().hasHeightForWidth());
        buttonAmount7->setSizePolicy(sizePolicy1);
        buttonAmount7->setDecimals(2);
        buttonAmount7->setMinimum(0.000000000000000);
        buttonAmount7->setMaximum(1.000000000000000);
        buttonAmount7->setSingleStep(0.100000000000000);
        buttonAmount7->setValue(0.100000000000000);

        gridLayout_3->addWidget(buttonAmount7, 7, 5, 1, 1);

        buttonInput0 = new QCheckBox(tab);
        buttonInput0->setObjectName(QString::fromUtf8("buttonInput0"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonInput0->sizePolicy().hasHeightForWidth());
        buttonInput0->setSizePolicy(sizePolicy2);
        buttonInput0->setCheckable(true);

        gridLayout_3->addWidget(buttonInput0, 0, 1, 1, 1);

        buttonInput1 = new QCheckBox(tab);
        buttonInput1->setObjectName(QString::fromUtf8("buttonInput1"));
        sizePolicy2.setHeightForWidth(buttonInput1->sizePolicy().hasHeightForWidth());
        buttonInput1->setSizePolicy(sizePolicy2);
        buttonInput1->setCheckable(true);

        gridLayout_3->addWidget(buttonInput1, 1, 1, 1, 1);

        buttonInput7 = new QCheckBox(tab);
        buttonInput7->setObjectName(QString::fromUtf8("buttonInput7"));
        sizePolicy2.setHeightForWidth(buttonInput7->sizePolicy().hasHeightForWidth());
        buttonInput7->setSizePolicy(sizePolicy2);
        buttonInput7->setCheckable(true);

        gridLayout_3->addWidget(buttonInput7, 7, 1, 1, 1);

        buttonInput6 = new QCheckBox(tab);
        buttonInput6->setObjectName(QString::fromUtf8("buttonInput6"));
        sizePolicy2.setHeightForWidth(buttonInput6->sizePolicy().hasHeightForWidth());
        buttonInput6->setSizePolicy(sizePolicy2);
        buttonInput6->setCheckable(true);

        gridLayout_3->addWidget(buttonInput6, 6, 1, 1, 1);

        buttonInput5 = new QCheckBox(tab);
        buttonInput5->setObjectName(QString::fromUtf8("buttonInput5"));
        sizePolicy2.setHeightForWidth(buttonInput5->sizePolicy().hasHeightForWidth());
        buttonInput5->setSizePolicy(sizePolicy2);
        buttonInput5->setCheckable(true);

        gridLayout_3->addWidget(buttonInput5, 5, 1, 1, 1);

        buttonInput4 = new QCheckBox(tab);
        buttonInput4->setObjectName(QString::fromUtf8("buttonInput4"));
        sizePolicy2.setHeightForWidth(buttonInput4->sizePolicy().hasHeightForWidth());
        buttonInput4->setSizePolicy(sizePolicy2);
        buttonInput4->setCheckable(true);

        gridLayout_3->addWidget(buttonInput4, 4, 1, 1, 1);

        buttonInput3 = new QCheckBox(tab);
        buttonInput3->setObjectName(QString::fromUtf8("buttonInput3"));
        sizePolicy2.setHeightForWidth(buttonInput3->sizePolicy().hasHeightForWidth());
        buttonInput3->setSizePolicy(sizePolicy2);
        buttonInput3->setCheckable(true);

        gridLayout_3->addWidget(buttonInput3, 3, 1, 1, 1);

        buttonInput2 = new QCheckBox(tab);
        buttonInput2->setObjectName(QString::fromUtf8("buttonInput2"));
        sizePolicy2.setHeightForWidth(buttonInput2->sizePolicy().hasHeightForWidth());
        buttonInput2->setSizePolicy(sizePolicy2);
        buttonInput2->setCheckable(true);

        gridLayout_3->addWidget(buttonInput2, 2, 1, 1, 1);

        buttonFunction0 = new QComboBox(tab);
        buttonFunction0->setObjectName(QString::fromUtf8("buttonFunction0"));
        sizePolicy1.setHeightForWidth(buttonFunction0->sizePolicy().hasHeightForWidth());
        buttonFunction0->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonFunction0, 0, 3, 1, 1);

        buttonFunction1 = new QComboBox(tab);
        buttonFunction1->setObjectName(QString::fromUtf8("buttonFunction1"));
        sizePolicy1.setHeightForWidth(buttonFunction1->sizePolicy().hasHeightForWidth());
        buttonFunction1->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonFunction1, 1, 3, 1, 1);

        buttonFunction2 = new QComboBox(tab);
        buttonFunction2->setObjectName(QString::fromUtf8("buttonFunction2"));
        sizePolicy1.setHeightForWidth(buttonFunction2->sizePolicy().hasHeightForWidth());
        buttonFunction2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonFunction2, 2, 3, 1, 1);

        buttonFunction3 = new QComboBox(tab);
        buttonFunction3->setObjectName(QString::fromUtf8("buttonFunction3"));
        sizePolicy1.setHeightForWidth(buttonFunction3->sizePolicy().hasHeightForWidth());
        buttonFunction3->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonFunction3, 3, 3, 1, 1);

        buttonAction3 = new QComboBox(tab);
        buttonAction3->setObjectName(QString::fromUtf8("buttonAction3"));
        sizePolicy1.setHeightForWidth(buttonAction3->sizePolicy().hasHeightForWidth());
        buttonAction3->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonAction3, 3, 2, 1, 1);

        buttonAction2 = new QComboBox(tab);
        buttonAction2->setObjectName(QString::fromUtf8("buttonAction2"));
        sizePolicy1.setHeightForWidth(buttonAction2->sizePolicy().hasHeightForWidth());
        buttonAction2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonAction2, 2, 2, 1, 1);

        buttonAction1 = new QComboBox(tab);
        buttonAction1->setObjectName(QString::fromUtf8("buttonAction1"));
        sizePolicy1.setHeightForWidth(buttonAction1->sizePolicy().hasHeightForWidth());
        buttonAction1->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonAction1, 1, 2, 1, 1);

        buttonAction0 = new QComboBox(tab);
        buttonAction0->setObjectName(QString::fromUtf8("buttonAction0"));
        sizePolicy1.setHeightForWidth(buttonAction0->sizePolicy().hasHeightForWidth());
        buttonAction0->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonAction0, 0, 2, 1, 1);

        buttonAction4 = new QComboBox(tab);
        buttonAction4->setObjectName(QString::fromUtf8("buttonAction4"));
        sizePolicy1.setHeightForWidth(buttonAction4->sizePolicy().hasHeightForWidth());
        buttonAction4->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonAction4, 4, 2, 1, 1);

        buttonAction5 = new QComboBox(tab);
        buttonAction5->setObjectName(QString::fromUtf8("buttonAction5"));
        sizePolicy1.setHeightForWidth(buttonAction5->sizePolicy().hasHeightForWidth());
        buttonAction5->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonAction5, 5, 2, 1, 1);

        buttonAction6 = new QComboBox(tab);
        buttonAction6->setObjectName(QString::fromUtf8("buttonAction6"));
        sizePolicy1.setHeightForWidth(buttonAction6->sizePolicy().hasHeightForWidth());
        buttonAction6->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonAction6, 6, 2, 1, 1);

        buttonAction7 = new QComboBox(tab);
        buttonAction7->setObjectName(QString::fromUtf8("buttonAction7"));
        sizePolicy1.setHeightForWidth(buttonAction7->sizePolicy().hasHeightForWidth());
        buttonAction7->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonAction7, 7, 2, 1, 1);

        buttonFunction4 = new QComboBox(tab);
        buttonFunction4->setObjectName(QString::fromUtf8("buttonFunction4"));
        sizePolicy1.setHeightForWidth(buttonFunction4->sizePolicy().hasHeightForWidth());
        buttonFunction4->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonFunction4, 4, 3, 1, 1);

        buttonFunction5 = new QComboBox(tab);
        buttonFunction5->setObjectName(QString::fromUtf8("buttonFunction5"));
        sizePolicy1.setHeightForWidth(buttonFunction5->sizePolicy().hasHeightForWidth());
        buttonFunction5->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonFunction5, 5, 3, 1, 1);

        buttonFunction6 = new QComboBox(tab);
        buttonFunction6->setObjectName(QString::fromUtf8("buttonFunction6"));
        sizePolicy1.setHeightForWidth(buttonFunction6->sizePolicy().hasHeightForWidth());
        buttonFunction6->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonFunction6, 6, 3, 1, 1);

        buttonLabel7 = new QLabel(tab);
        buttonLabel7->setObjectName(QString::fromUtf8("buttonLabel7"));
        buttonLabel7->setMinimumSize(QSize(15, 0));
        buttonLabel7->setMaximumSize(QSize(15, 16777215));

        gridLayout_3->addWidget(buttonLabel7, 7, 4, 1, 1);

        buttonFunction7 = new QComboBox(tab);
        buttonFunction7->setObjectName(QString::fromUtf8("buttonFunction7"));
        sizePolicy1.setHeightForWidth(buttonFunction7->sizePolicy().hasHeightForWidth());
        buttonFunction7->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonFunction7, 7, 3, 1, 1);

        buttonLabel6 = new QLabel(tab);
        buttonLabel6->setObjectName(QString::fromUtf8("buttonLabel6"));
        buttonLabel6->setMinimumSize(QSize(15, 0));
        buttonLabel6->setMaximumSize(QSize(15, 16777215));

        gridLayout_3->addWidget(buttonLabel6, 6, 4, 1, 1);

        buttonLabel5 = new QLabel(tab);
        buttonLabel5->setObjectName(QString::fromUtf8("buttonLabel5"));
        buttonLabel5->setMinimumSize(QSize(15, 0));
        buttonLabel5->setMaximumSize(QSize(15, 16777215));

        gridLayout_3->addWidget(buttonLabel5, 5, 4, 1, 1);

        buttonLabel4 = new QLabel(tab);
        buttonLabel4->setObjectName(QString::fromUtf8("buttonLabel4"));
        buttonLabel4->setMinimumSize(QSize(15, 0));
        buttonLabel4->setMaximumSize(QSize(15, 16777215));

        gridLayout_3->addWidget(buttonLabel4, 4, 4, 1, 1);

        buttonLabel3 = new QLabel(tab);
        buttonLabel3->setObjectName(QString::fromUtf8("buttonLabel3"));
        buttonLabel3->setMinimumSize(QSize(15, 0));
        buttonLabel3->setMaximumSize(QSize(15, 16777215));

        gridLayout_3->addWidget(buttonLabel3, 3, 4, 1, 1);

        buttonLabel2 = new QLabel(tab);
        buttonLabel2->setObjectName(QString::fromUtf8("buttonLabel2"));
        buttonLabel2->setMinimumSize(QSize(15, 0));
        buttonLabel2->setMaximumSize(QSize(15, 16777215));

        gridLayout_3->addWidget(buttonLabel2, 2, 4, 1, 1);

        buttonLabel1 = new QLabel(tab);
        buttonLabel1->setObjectName(QString::fromUtf8("buttonLabel1"));
        buttonLabel1->setMinimumSize(QSize(15, 0));
        buttonLabel1->setMaximumSize(QSize(15, 16777215));

        gridLayout_3->addWidget(buttonLabel1, 1, 4, 1, 1);

        buttonLabel0 = new QLabel(tab);
        buttonLabel0->setObjectName(QString::fromUtf8("buttonLabel0"));
        buttonLabel0->setMinimumSize(QSize(15, 0));
        buttonLabel0->setMaximumSize(QSize(15, 16777215));

        gridLayout_3->addWidget(buttonLabel0, 0, 4, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        UDPSetup->addTab(tab, QString());
        tabWidgetPage3 = new QWidget();
        tabWidgetPage3->setObjectName(QString::fromUtf8("tabWidgetPage3"));
        verticalLayout_5 = new QVBoxLayout(tabWidgetPage3);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        telemetryLabel = new QLabel(tabWidgetPage3);
        telemetryLabel->setObjectName(QString::fromUtf8("telemetryLabel"));

        verticalLayout_5->addWidget(telemetryLabel);

        verticalSpacer = new QSpacerItem(20, 276, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        UDPSetup->addTab(tabWidgetPage3, QString());
        UDPSetup_2 = new QWidget();
        UDPSetup_2->setObjectName(QString::fromUtf8("UDPSetup_2"));
        groupBox = new QGroupBox(UDPSetup_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 301, 71));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        udp_host = new QLineEdit(groupBox);
        udp_host->setObjectName(QString::fromUtf8("udp_host"));
        udp_host->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(udp_host);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        udp_port = new QLineEdit(groupBox);
        udp_port->setObjectName(QString::fromUtf8("udp_port"));
        udp_port->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(udp_port);

        UDPSetup->addTab(UDPSetup_2, QString());

        verticalLayout_4->addWidget(UDPSetup);


        verticalLayout->addWidget(widget);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_6->addWidget(scrollArea);


        retranslateUi(GCSControlGadgetOptionsPage);

        UDPSetup->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GCSControlGadgetOptionsPage);
    } // setupUi

    void retranslateUi(QWidget *GCSControlGadgetOptionsPage)
    {
        GCSControlGadgetOptionsPage->setWindowTitle(QApplication::translate("GCSControlGadgetOptionsPage", "Form", nullptr));
        label->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Control Mode:", nullptr));
        controlsMode->setItemText(0, QApplication::translate("GCSControlGadgetOptionsPage", "Mode 1", nullptr));
        controlsMode->setItemText(1, QApplication::translate("GCSControlGadgetOptionsPage", "Mode 2", nullptr));
        controlsMode->setItemText(2, QApplication::translate("GCSControlGadgetOptionsPage", "Mode 3", nullptr));
        controlsMode->setItemText(3, QApplication::translate("GCSControlGadgetOptionsPage", "Mode 4", nullptr));

        label_2->setText(QApplication::translate("GCSControlGadgetOptionsPage", "External input Device:", nullptr));
        comboBox->setItemText(0, QApplication::translate("GCSControlGadgetOptionsPage", "Joystick", nullptr));
        comboBox->setItemText(1, QApplication::translate("GCSControlGadgetOptionsPage", "Audio", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("GCSControlGadgetOptionsPage", "Only joystick is implemented at this stage, so this control is disabled.", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Available controllers", nullptr));
        AvailableControllerList->setItemText(0, QApplication::translate("GCSControlGadgetOptionsPage", "Default", nullptr));

        revCheckBox_1->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Rev", nullptr));
        revCheckBox_2->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Rev", nullptr));
        revCheckBox_3->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Rev", nullptr));
        revCheckBox_4->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Rev", nullptr));
        revCheckBox_5->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Rev", nullptr));
        revCheckBox_6->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Rev", nullptr));
        revCheckBox_7->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Rev", nullptr));
        revCheckBox_8->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Rev", nullptr));
        label_3->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Move your joystick controls to identify channels", nullptr));
        UDPSetup->setTabText(UDPSetup->indexOf(tabWidgetPage2), QApplication::translate("GCSControlGadgetOptionsPage", "Joystick Axes", nullptr));
        label_4->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Press buttons on controller to identify mappings", nullptr));
        buttonInput0->setText(QApplication::translate("GCSControlGadgetOptionsPage", "button 1", nullptr));
        buttonInput1->setText(QApplication::translate("GCSControlGadgetOptionsPage", "button 2", nullptr));
        buttonInput7->setText(QApplication::translate("GCSControlGadgetOptionsPage", "button 8", nullptr));
        buttonInput6->setText(QApplication::translate("GCSControlGadgetOptionsPage", "button 7", nullptr));
        buttonInput5->setText(QApplication::translate("GCSControlGadgetOptionsPage", "button 6", nullptr));
        buttonInput4->setText(QApplication::translate("GCSControlGadgetOptionsPage", "button 5", nullptr));
        buttonInput3->setText(QApplication::translate("GCSControlGadgetOptionsPage", "button 4", nullptr));
        buttonInput2->setText(QApplication::translate("GCSControlGadgetOptionsPage", "button 3", nullptr));
        buttonLabel7->setText(QApplication::translate("GCSControlGadgetOptionsPage", "by", nullptr));
        buttonLabel6->setText(QApplication::translate("GCSControlGadgetOptionsPage", "by", nullptr));
        buttonLabel5->setText(QApplication::translate("GCSControlGadgetOptionsPage", "by", nullptr));
        buttonLabel4->setText(QApplication::translate("GCSControlGadgetOptionsPage", "by", nullptr));
        buttonLabel3->setText(QApplication::translate("GCSControlGadgetOptionsPage", "by", nullptr));
        buttonLabel2->setText(QApplication::translate("GCSControlGadgetOptionsPage", "by", nullptr));
        buttonLabel1->setText(QApplication::translate("GCSControlGadgetOptionsPage", "by", nullptr));
        buttonLabel0->setText(QApplication::translate("GCSControlGadgetOptionsPage", "by", nullptr));
        UDPSetup->setTabText(UDPSetup->indexOf(tab), QApplication::translate("GCSControlGadgetOptionsPage", "Joystick Buttons", nullptr));
        telemetryLabel->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Audio: soundcard-based PPM decoding for trainer port. Not implemented yet.", nullptr));
        UDPSetup->setTabText(UDPSetup->indexOf(tabWidgetPage3), QApplication::translate("GCSControlGadgetOptionsPage", "Audio", nullptr));
        groupBox->setTitle(QApplication::translate("GCSControlGadgetOptionsPage", "UDP Port Configuration", nullptr));
        label_7->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Host:", nullptr));
        udp_host->setText(QApplication::translate("GCSControlGadgetOptionsPage", "127.0.0.1", nullptr));
        label_6->setText(QApplication::translate("GCSControlGadgetOptionsPage", "Port:", nullptr));
        udp_port->setText(QApplication::translate("GCSControlGadgetOptionsPage", "2323", nullptr));
        UDPSetup->setTabText(UDPSetup->indexOf(UDPSetup_2), QApplication::translate("GCSControlGadgetOptionsPage", "UDP Setup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GCSControlGadgetOptionsPage: public Ui_GCSControlGadgetOptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GCSCONTROLGADGETOPTIONSPAGE_H
