/********************************************************************************
** Form generated from reading UI file 'gpsdisplaygadgetoptionspage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPSDISPLAYGADGETOPTIONSPAGE_H
#define UI_GPSDISPLAYGADGETOPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GpsDisplayGadgetOptionsPage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *connectionMode;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QStackedWidget *stackedWidget;
    QWidget *serialPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *serialLabel;
    QFormLayout *serialFormLayout;
    QComboBox *portComboBox;
    QComboBox *portSpeedComboBox;
    QLabel *dataBitsLabel;
    QLabel *stopBitsLabel;
    QLabel *parityLabel;
    QLabel *timeoutLabel;
    QComboBox *flowControlComboBox;
    QComboBox *dataBitsComboBox;
    QComboBox *stopBitsComboBox;
    QLabel *portLabel;
    QLabel *portSpeedLabel;
    QComboBox *parityComboBox;
    QLabel *flowControlLabel;
    QSpinBox *timeoutSpinBox;
    QWidget *ipPage;
    QVBoxLayout *verticalLayout_3;
    QLabel *ipLabel;
    QFormLayout *ipFormLayout;
    QLabel *ipHostLabel;
    QLineEdit *ipHostLineEdit;
    QLabel *ipPortLabel;
    QLineEdit *ipPortLineEdit;
    QWidget *telemetryPage;
    QVBoxLayout *verticalLayout_5;
    QLabel *telemetryLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GpsDisplayGadgetOptionsPage)
    {
        if (GpsDisplayGadgetOptionsPage->objectName().isEmpty())
            GpsDisplayGadgetOptionsPage->setObjectName(QString::fromUtf8("GpsDisplayGadgetOptionsPage"));
        GpsDisplayGadgetOptionsPage->resize(477, 416);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GpsDisplayGadgetOptionsPage->sizePolicy().hasHeightForWidth());
        GpsDisplayGadgetOptionsPage->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(GpsDisplayGadgetOptionsPage);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(GpsDisplayGadgetOptionsPage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 477, 416));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        connectionMode = new QComboBox(widget);
        connectionMode->setObjectName(QString::fromUtf8("connectionMode"));

        horizontalLayout->addWidget(connectionMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        serialPage = new QWidget();
        serialPage->setObjectName(QString::fromUtf8("serialPage"));
        verticalLayout_2 = new QVBoxLayout(serialPage);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        serialLabel = new QLabel(serialPage);
        serialLabel->setObjectName(QString::fromUtf8("serialLabel"));

        verticalLayout_2->addWidget(serialLabel);

        serialFormLayout = new QFormLayout();
        serialFormLayout->setObjectName(QString::fromUtf8("serialFormLayout"));
        portComboBox = new QComboBox(serialPage);
        portComboBox->setObjectName(QString::fromUtf8("portComboBox"));

        serialFormLayout->setWidget(0, QFormLayout::FieldRole, portComboBox);

        portSpeedComboBox = new QComboBox(serialPage);
        portSpeedComboBox->setObjectName(QString::fromUtf8("portSpeedComboBox"));

        serialFormLayout->setWidget(1, QFormLayout::FieldRole, portSpeedComboBox);

        dataBitsLabel = new QLabel(serialPage);
        dataBitsLabel->setObjectName(QString::fromUtf8("dataBitsLabel"));

        serialFormLayout->setWidget(3, QFormLayout::LabelRole, dataBitsLabel);

        stopBitsLabel = new QLabel(serialPage);
        stopBitsLabel->setObjectName(QString::fromUtf8("stopBitsLabel"));

        serialFormLayout->setWidget(4, QFormLayout::LabelRole, stopBitsLabel);

        parityLabel = new QLabel(serialPage);
        parityLabel->setObjectName(QString::fromUtf8("parityLabel"));

        serialFormLayout->setWidget(5, QFormLayout::LabelRole, parityLabel);

        timeoutLabel = new QLabel(serialPage);
        timeoutLabel->setObjectName(QString::fromUtf8("timeoutLabel"));

        serialFormLayout->setWidget(6, QFormLayout::LabelRole, timeoutLabel);

        flowControlComboBox = new QComboBox(serialPage);
        flowControlComboBox->setObjectName(QString::fromUtf8("flowControlComboBox"));

        serialFormLayout->setWidget(2, QFormLayout::FieldRole, flowControlComboBox);

        dataBitsComboBox = new QComboBox(serialPage);
        dataBitsComboBox->setObjectName(QString::fromUtf8("dataBitsComboBox"));

        serialFormLayout->setWidget(3, QFormLayout::FieldRole, dataBitsComboBox);

        stopBitsComboBox = new QComboBox(serialPage);
        stopBitsComboBox->setObjectName(QString::fromUtf8("stopBitsComboBox"));

        serialFormLayout->setWidget(4, QFormLayout::FieldRole, stopBitsComboBox);

        portLabel = new QLabel(serialPage);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));

        serialFormLayout->setWidget(0, QFormLayout::LabelRole, portLabel);

        portSpeedLabel = new QLabel(serialPage);
        portSpeedLabel->setObjectName(QString::fromUtf8("portSpeedLabel"));

        serialFormLayout->setWidget(1, QFormLayout::LabelRole, portSpeedLabel);

        parityComboBox = new QComboBox(serialPage);
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));

        serialFormLayout->setWidget(5, QFormLayout::FieldRole, parityComboBox);

        flowControlLabel = new QLabel(serialPage);
        flowControlLabel->setObjectName(QString::fromUtf8("flowControlLabel"));

        serialFormLayout->setWidget(2, QFormLayout::LabelRole, flowControlLabel);

        timeoutSpinBox = new QSpinBox(serialPage);
        timeoutSpinBox->setObjectName(QString::fromUtf8("timeoutSpinBox"));
        timeoutSpinBox->setMaximum(100000);

        serialFormLayout->setWidget(6, QFormLayout::FieldRole, timeoutSpinBox);


        verticalLayout_2->addLayout(serialFormLayout);

        verticalLayout_2->setStretch(1, 1);
        stackedWidget->addWidget(serialPage);
        ipPage = new QWidget();
        ipPage->setObjectName(QString::fromUtf8("ipPage"));
        verticalLayout_3 = new QVBoxLayout(ipPage);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ipLabel = new QLabel(ipPage);
        ipLabel->setObjectName(QString::fromUtf8("ipLabel"));

        verticalLayout_3->addWidget(ipLabel);

        ipFormLayout = new QFormLayout();
        ipFormLayout->setObjectName(QString::fromUtf8("ipFormLayout"));
        ipHostLabel = new QLabel(ipPage);
        ipHostLabel->setObjectName(QString::fromUtf8("ipHostLabel"));

        ipFormLayout->setWidget(0, QFormLayout::LabelRole, ipHostLabel);

        ipHostLineEdit = new QLineEdit(ipPage);
        ipHostLineEdit->setObjectName(QString::fromUtf8("ipHostLineEdit"));

        ipFormLayout->setWidget(0, QFormLayout::FieldRole, ipHostLineEdit);

        ipPortLabel = new QLabel(ipPage);
        ipPortLabel->setObjectName(QString::fromUtf8("ipPortLabel"));

        ipFormLayout->setWidget(1, QFormLayout::LabelRole, ipPortLabel);

        ipPortLineEdit = new QLineEdit(ipPage);
        ipPortLineEdit->setObjectName(QString::fromUtf8("ipPortLineEdit"));

        ipFormLayout->setWidget(1, QFormLayout::FieldRole, ipPortLineEdit);


        verticalLayout_3->addLayout(ipFormLayout);

        verticalLayout_3->setStretch(1, 1);
        stackedWidget->addWidget(ipPage);
        telemetryPage = new QWidget();
        telemetryPage->setObjectName(QString::fromUtf8("telemetryPage"));
        verticalLayout_5 = new QVBoxLayout(telemetryPage);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        telemetryLabel = new QLabel(telemetryPage);
        telemetryLabel->setObjectName(QString::fromUtf8("telemetryLabel"));

        verticalLayout_5->addWidget(telemetryLabel);

        verticalSpacer = new QSpacerItem(20, 276, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        stackedWidget->addWidget(telemetryPage);

        verticalLayout_4->addWidget(stackedWidget);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(GpsDisplayGadgetOptionsPage);
        QObject::connect(connectionMode, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GpsDisplayGadgetOptionsPage);
    } // setupUi

    void retranslateUi(QWidget *GpsDisplayGadgetOptionsPage)
    {
        GpsDisplayGadgetOptionsPage->setWindowTitle(QApplication::translate("GpsDisplayGadgetOptionsPage", "Form", nullptr));
        label->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Mode:", nullptr));
        serialLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Serial Connection", nullptr));
        dataBitsLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Data Bits:", nullptr));
        stopBitsLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Stop Bits:", nullptr));
        parityLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Parity:", nullptr));
        timeoutLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Timeout(ms):", nullptr));
        portLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Port:", nullptr));
        portSpeedLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Port Speed:", nullptr));
        flowControlLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Flow Control:", nullptr));
        ipLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "IP Connection", nullptr));
        ipHostLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Host", nullptr));
        ipPortLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Port", nullptr));
        telemetryLabel->setText(QApplication::translate("GpsDisplayGadgetOptionsPage", "Telemetry", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GpsDisplayGadgetOptionsPage: public Ui_GpsDisplayGadgetOptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPSDISPLAYGADGETOPTIONSPAGE_H
