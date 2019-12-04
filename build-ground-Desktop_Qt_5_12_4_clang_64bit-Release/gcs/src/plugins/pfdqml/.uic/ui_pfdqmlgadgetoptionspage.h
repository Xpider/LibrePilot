/********************************************************************************
** Form generated from reading UI file 'pfdqmlgadgetoptionspage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PFDQMLGADGETOPTIONSPAGE_H
#define UI_PFDQMLGADGETOPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <utils/pathchooser.h>

QT_BEGIN_NAMESPACE

class Ui_PfdQmlGadgetOptionsPage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    Utils::PathChooser *qmlSourceFile;
    QFormLayout *formLayout;
    QLabel *label_7;
    QLabel *label_6;
    QComboBox *altUnitCombo;
    QComboBox *speedUnitCombo;
    QTabWidget *tabWidget;
    QWidget *terrainTab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *showTerrain;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    Utils::PathChooser *earthFile;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QLineEdit *latitude;
    QLabel *label_4;
    QLineEdit *longitude;
    QLabel *label_5;
    QLineEdit *altitude;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *useOnlyCache;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *preSeedTerrain;
    QSpacerItem *verticalSpacer;
    QWidget *modelTab;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *showModel;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *useAutomaticModel;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *usePredefinedModel;
    QHBoxLayout *horizontalLayout_2;
    Utils::PathChooser *modelFile;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    Utils::PathChooser *backgroundImageFile;
    QSpacerItem *verticalSpacer_2;
    QWidget *environmentTab;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *useLocalTime;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *usePredefinedTime;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QPushButton *actualizeDateTimeButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QDoubleSpinBox *minAmbientLightSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *videoTab;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QPlainTextEdit *pipelineTextEdit;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *PfdQmlGadgetOptionsPage)
    {
        if (PfdQmlGadgetOptionsPage->objectName().isEmpty())
            PfdQmlGadgetOptionsPage->setObjectName(QString::fromUtf8("PfdQmlGadgetOptionsPage"));
        PfdQmlGadgetOptionsPage->resize(636, 558);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PfdQmlGadgetOptionsPage->sizePolicy().hasHeightForWidth());
        PfdQmlGadgetOptionsPage->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(PfdQmlGadgetOptionsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(PfdQmlGadgetOptionsPage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 636, 558));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        qmlSourceFile = new Utils::PathChooser(scrollAreaWidgetContents);
        qmlSourceFile->setObjectName(QString::fromUtf8("qmlSourceFile"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qmlSourceFile->sizePolicy().hasHeightForWidth());
        qmlSourceFile->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(qmlSourceFile);


        verticalLayout_2->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        altUnitCombo = new QComboBox(scrollAreaWidgetContents);
        altUnitCombo->setObjectName(QString::fromUtf8("altUnitCombo"));
        altUnitCombo->setMaximumSize(QSize(150, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, altUnitCombo);

        speedUnitCombo = new QComboBox(scrollAreaWidgetContents);
        speedUnitCombo->setObjectName(QString::fromUtf8("speedUnitCombo"));
        speedUnitCombo->setMaximumSize(QSize(150, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, speedUnitCombo);


        verticalLayout_2->addLayout(formLayout);

        tabWidget = new QTabWidget(scrollAreaWidgetContents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        terrainTab = new QWidget();
        terrainTab->setObjectName(QString::fromUtf8("terrainTab"));
        verticalLayout_5 = new QVBoxLayout(terrainTab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        showTerrain = new QGroupBox(terrainTab);
        showTerrain->setObjectName(QString::fromUtf8("showTerrain"));
        showTerrain->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(showTerrain);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(showTerrain);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        earthFile = new Utils::PathChooser(showTerrain);
        earthFile->setObjectName(QString::fromUtf8("earthFile"));
        sizePolicy1.setHeightForWidth(earthFile->sizePolicy().hasHeightForWidth());
        earthFile->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(earthFile);


        verticalLayout_4->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(showTerrain);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, -1, -1, -1);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_9->addWidget(label_3);

        latitude = new QLineEdit(groupBox_2);
        latitude->setObjectName(QString::fromUtf8("latitude"));

        horizontalLayout_9->addWidget(latitude);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        longitude = new QLineEdit(groupBox_2);
        longitude->setObjectName(QString::fromUtf8("longitude"));

        horizontalLayout_9->addWidget(longitude);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_9->addWidget(label_5);

        altitude = new QLineEdit(groupBox_2);
        altitude->setObjectName(QString::fromUtf8("altitude"));

        horizontalLayout_9->addWidget(altitude);


        verticalLayout_9->addLayout(horizontalLayout_9);


        verticalLayout_4->addWidget(groupBox_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        useOnlyCache = new QCheckBox(showTerrain);
        useOnlyCache->setObjectName(QString::fromUtf8("useOnlyCache"));
        useOnlyCache->setEnabled(false);
        useOnlyCache->setCheckable(true);

        horizontalLayout_4->addWidget(useOnlyCache);

        horizontalSpacer_2 = new QSpacerItem(74, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        preSeedTerrain = new QPushButton(showTerrain);
        preSeedTerrain->setObjectName(QString::fromUtf8("preSeedTerrain"));
        preSeedTerrain->setEnabled(false);

        horizontalLayout_4->addWidget(preSeedTerrain);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_5->addWidget(showTerrain);

        verticalSpacer = new QSpacerItem(20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        tabWidget->addTab(terrainTab, QString());
        modelTab = new QWidget();
        modelTab->setObjectName(QString::fromUtf8("modelTab"));
        verticalLayout_6 = new QVBoxLayout(modelTab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        showModel = new QGroupBox(modelTab);
        showModel->setObjectName(QString::fromUtf8("showModel"));
        showModel->setCheckable(true);
        verticalLayout_3 = new QVBoxLayout(showModel);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        useAutomaticModel = new QRadioButton(showModel);
        useAutomaticModel->setObjectName(QString::fromUtf8("useAutomaticModel"));
        useAutomaticModel->setEnabled(false);

        verticalLayout_3->addWidget(useAutomaticModel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, -1, -1);
        usePredefinedModel = new QRadioButton(showModel);
        usePredefinedModel->setObjectName(QString::fromUtf8("usePredefinedModel"));
        usePredefinedModel->setEnabled(false);

        horizontalLayout_6->addWidget(usePredefinedModel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        modelFile = new Utils::PathChooser(showModel);
        modelFile->setObjectName(QString::fromUtf8("modelFile"));
        sizePolicy1.setHeightForWidth(modelFile->sizePolicy().hasHeightForWidth());
        modelFile->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(modelFile);


        horizontalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_6->addWidget(showModel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(modelTab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        backgroundImageFile = new Utils::PathChooser(modelTab);
        backgroundImageFile->setObjectName(QString::fromUtf8("backgroundImageFile"));

        horizontalLayout_7->addWidget(backgroundImageFile);


        verticalLayout_6->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        tabWidget->addTab(modelTab, QString());
        environmentTab = new QWidget();
        environmentTab->setObjectName(QString::fromUtf8("environmentTab"));
        verticalLayout_7 = new QVBoxLayout(environmentTab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox = new QGroupBox(environmentTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        useLocalTime = new QRadioButton(groupBox);
        useLocalTime->setObjectName(QString::fromUtf8("useLocalTime"));

        verticalLayout_8->addWidget(useLocalTime);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, -1, -1);
        usePredefinedTime = new QRadioButton(groupBox);
        usePredefinedTime->setObjectName(QString::fromUtf8("usePredefinedTime"));

        horizontalLayout_5->addWidget(usePredefinedTime);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);

        horizontalLayout_5->addWidget(dateEdit);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        horizontalLayout_5->addWidget(timeEdit);

        actualizeDateTimeButton = new QPushButton(groupBox);
        actualizeDateTimeButton->setObjectName(QString::fromUtf8("actualizeDateTimeButton"));

        horizontalLayout_5->addWidget(actualizeDateTimeButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_8->addLayout(horizontalLayout_5);


        verticalLayout_7->addWidget(groupBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(environmentTab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        minAmbientLightSpinBox = new QDoubleSpinBox(environmentTab);
        minAmbientLightSpinBox->setObjectName(QString::fromUtf8("minAmbientLightSpinBox"));
        minAmbientLightSpinBox->setMaximum(1.000000000000000);
        minAmbientLightSpinBox->setSingleStep(0.010000000000000);
        minAmbientLightSpinBox->setValue(0.030000000000000);

        horizontalLayout_8->addWidget(minAmbientLightSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        verticalLayout_7->addLayout(horizontalLayout_8);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        tabWidget->addTab(environmentTab, QString());
        videoTab = new QWidget();
        videoTab->setObjectName(QString::fromUtf8("videoTab"));
        verticalLayout_10 = new QVBoxLayout(videoTab);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_10 = new QLabel(videoTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_10->addWidget(label_10);

        pipelineTextEdit = new QPlainTextEdit(videoTab);
        pipelineTextEdit->setObjectName(QString::fromUtf8("pipelineTextEdit"));
        pipelineTextEdit->setPlainText(QString::fromUtf8(""));

        verticalLayout_10->addWidget(pipelineTextEdit);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        tabWidget->addTab(videoTab, QString());

        verticalLayout_2->addWidget(tabWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(PfdQmlGadgetOptionsPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PfdQmlGadgetOptionsPage);
    } // setupUi

    void retranslateUi(QWidget *PfdQmlGadgetOptionsPage)
    {
        PfdQmlGadgetOptionsPage->setWindowTitle(QApplication::translate("PfdQmlGadgetOptionsPage", "Form", nullptr));
        label->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "QML file: ", nullptr));
        label_7->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Altitude Unit:", nullptr));
        label_6->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Speed Unit:", nullptr));
        showTerrain->setTitle(QApplication::translate("PfdQmlGadgetOptionsPage", "Show Terrain", nullptr));
        label_2->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Terrain file:", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_2->setToolTip(QApplication::translate("PfdQmlGadgetOptionsPage", "This location will be used if no GPS fix or Home location are available", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        groupBox_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox_2->setTitle(QApplication::translate("PfdQmlGadgetOptionsPage", "Default Location", nullptr));
        label_3->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Latitude:", nullptr));
        label_4->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Longitude:", nullptr));
        label_5->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Altitude:", nullptr));
        useOnlyCache->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Use only cache data", nullptr));
        preSeedTerrain->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Pre seed terrain cache", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(terrainTab), QApplication::translate("PfdQmlGadgetOptionsPage", "Terrain", nullptr));
        showModel->setTitle(QApplication::translate("PfdQmlGadgetOptionsPage", "Show Model", nullptr));
        useAutomaticModel->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Use automatic model selection", nullptr));
        usePredefinedModel->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Use this model:", nullptr));
        label_8->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Background image:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(modelTab), QApplication::translate("PfdQmlGadgetOptionsPage", "Model", nullptr));
        groupBox->setTitle(QApplication::translate("PfdQmlGadgetOptionsPage", "Time", nullptr));
        useLocalTime->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Use local time", nullptr));
        usePredefinedTime->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Use this time:", nullptr));
        actualizeDateTimeButton->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Actualize", nullptr));
        label_9->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Minimum ambient light:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(environmentTab), QApplication::translate("PfdQmlGadgetOptionsPage", "Environment", nullptr));
        label_10->setText(QApplication::translate("PfdQmlGadgetOptionsPage", "Pipeline:", nullptr));
        pipelineTextEdit->setPlaceholderText(QApplication::translate("PfdQmlGadgetOptionsPage", "<enter your gstreamer pipeline here>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(videoTab), QApplication::translate("PfdQmlGadgetOptionsPage", "Video", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PfdQmlGadgetOptionsPage: public Ui_PfdQmlGadgetOptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PFDQMLGADGETOPTIONSPAGE_H
