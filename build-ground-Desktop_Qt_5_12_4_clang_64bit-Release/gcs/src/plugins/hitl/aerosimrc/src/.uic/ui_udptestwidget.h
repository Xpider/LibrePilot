/********************************************************************************
** Form generated from reading UI file 'udptestwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPTESTWIDGET_H
#define UI_UDPTESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btReciveStart;
    QLineEdit *localPort;
    QLineEdit *localHost;
    QLabel *lbLocalHost;
    QLabel *lbSimHost;
    QLabel *lbSimPort;
    QPushButton *btReciveStop;
    QLineEdit *simHost;
    QLabel *lbLocalPort;
    QLineEdit *simPort;
    QPushButton *btTransmitStart;
    QPushButton *btTransmitStop;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *autoAnswer;
    QRadioButton *autoSend;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QSlider *flightMode;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *disarmed;
    QRadioButton *arming;
    QRadioButton *armed;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QLabel *lbCH1n;
    QSlider *ch1;
    QLabel *lbCH1;
    QLabel *lbCH2n;
    QSlider *ch2;
    QLabel *lbCH2;
    QLabel *lbCH3n;
    QSlider *ch3;
    QLabel *lbCH3;
    QLabel *lbCH4n;
    QSlider *ch4;
    QLabel *lbCH4;
    QLabel *lbCH5n;
    QSlider *ch5;
    QLabel *lbCH5;
    QLabel *lbCH6n;
    QLabel *lbCH6;
    QLabel *lbCH7n;
    QLabel *lbCH7;
    QLabel *lbCH8n;
    QLabel *lbCH8;
    QLabel *lbCH9n;
    QSlider *ch9;
    QLabel *lbCH9;
    QLabel *lbCH10n;
    QSlider *ch10;
    QLabel *lbCH10;
    QSlider *ch6;
    QSlider *ch7;
    QSlider *ch8;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(440, 525);
        Widget->setWindowTitle(QString::fromUtf8("udp_test"));
        Widget->setWindowFilePath(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btReciveStart = new QPushButton(Widget);
        btReciveStart->setObjectName(QString::fromUtf8("btReciveStart"));
        btReciveStart->setMinimumSize(QSize(60, 0));
        btReciveStart->setText(QString::fromUtf8("Connect"));

        gridLayout->addWidget(btReciveStart, 0, 4, 1, 1);

        localPort = new QLineEdit(Widget);
        localPort->setObjectName(QString::fromUtf8("localPort"));
        localPort->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(localPort->sizePolicy().hasHeightForWidth());
        localPort->setSizePolicy(sizePolicy);
        localPort->setMinimumSize(QSize(50, 0));
        localPort->setText(QString::fromUtf8("40100"));
        localPort->setMaxLength(5);

        gridLayout->addWidget(localPort, 0, 3, 1, 1);

        localHost = new QLineEdit(Widget);
        localHost->setObjectName(QString::fromUtf8("localHost"));
        localHost->setEnabled(true);
        sizePolicy.setHeightForWidth(localHost->sizePolicy().hasHeightForWidth());
        localHost->setSizePolicy(sizePolicy);
        localHost->setText(QString::fromUtf8("127.0.0.1"));

        gridLayout->addWidget(localHost, 0, 1, 1, 1);

        lbLocalHost = new QLabel(Widget);
        lbLocalHost->setObjectName(QString::fromUtf8("lbLocalHost"));
        lbLocalHost->setText(QString::fromUtf8("sim host"));

        gridLayout->addWidget(lbLocalHost, 1, 0, 1, 1);

        lbSimHost = new QLabel(Widget);
        lbSimHost->setObjectName(QString::fromUtf8("lbSimHost"));
        lbSimHost->setText(QString::fromUtf8("local host:"));

        gridLayout->addWidget(lbSimHost, 0, 0, 1, 1);

        lbSimPort = new QLabel(Widget);
        lbSimPort->setObjectName(QString::fromUtf8("lbSimPort"));
        lbSimPort->setText(QString::fromUtf8("local port:"));

        gridLayout->addWidget(lbSimPort, 0, 2, 1, 1);

        btReciveStop = new QPushButton(Widget);
        btReciveStop->setObjectName(QString::fromUtf8("btReciveStop"));
        btReciveStop->setEnabled(false);
        btReciveStop->setMinimumSize(QSize(60, 0));
        btReciveStop->setText(QString::fromUtf8("Disconnect"));

        gridLayout->addWidget(btReciveStop, 0, 5, 1, 1);

        simHost = new QLineEdit(Widget);
        simHost->setObjectName(QString::fromUtf8("simHost"));
        simHost->setEnabled(true);
        sizePolicy.setHeightForWidth(simHost->sizePolicy().hasHeightForWidth());
        simHost->setSizePolicy(sizePolicy);
        simHost->setText(QString::fromUtf8("127.0.0.1"));

        gridLayout->addWidget(simHost, 1, 1, 1, 1);

        lbLocalPort = new QLabel(Widget);
        lbLocalPort->setObjectName(QString::fromUtf8("lbLocalPort"));
        lbLocalPort->setText(QString::fromUtf8("sim port"));

        gridLayout->addWidget(lbLocalPort, 1, 2, 1, 1);

        simPort = new QLineEdit(Widget);
        simPort->setObjectName(QString::fromUtf8("simPort"));
        sizePolicy.setHeightForWidth(simPort->sizePolicy().hasHeightForWidth());
        simPort->setSizePolicy(sizePolicy);
        simPort->setMinimumSize(QSize(50, 0));
        simPort->setText(QString::fromUtf8("40200"));
        simPort->setMaxLength(5);

        gridLayout->addWidget(simPort, 1, 3, 1, 1);

        btTransmitStart = new QPushButton(Widget);
        btTransmitStart->setObjectName(QString::fromUtf8("btTransmitStart"));
        btTransmitStart->setMinimumSize(QSize(60, 0));
        btTransmitStart->setText(QString::fromUtf8("Transmit"));

        gridLayout->addWidget(btTransmitStart, 1, 4, 1, 1);

        btTransmitStop = new QPushButton(Widget);
        btTransmitStop->setObjectName(QString::fromUtf8("btTransmitStop"));
        btTransmitStop->setEnabled(false);
        btTransmitStop->setMinimumSize(QSize(60, 0));
        btTransmitStop->setText(QString::fromUtf8("Stop"));

        gridLayout->addWidget(btTransmitStop, 1, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        verticalLayout_2 = new QVBoxLayout(tab_1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listWidget = new QListWidget(tab_1);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("Terminal"));
        font.setPointSize(10);
        listWidget->setFont(font);

        verticalLayout_2->addWidget(listWidget);

        tabWidget->addTab(tab_1, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QString::fromUtf8("raw data"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 9);
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 0, -1, 3);
        autoAnswer = new QRadioButton(groupBox);
        autoAnswer->setObjectName(QString::fromUtf8("autoAnswer"));
        autoAnswer->setEnabled(true);
        autoAnswer->setText(QString::fromUtf8("answer on recieve"));
        autoAnswer->setChecked(true);

        horizontalLayout_2->addWidget(autoAnswer);

        autoSend = new QRadioButton(groupBox);
        autoSend->setObjectName(QString::fromUtf8("autoSend"));
        autoSend->setEnabled(true);
        autoSend->setText(QString::fromUtf8("auto send"));
        autoSend->setChecked(false);

        horizontalLayout_2->addWidget(autoSend);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 0, -1, 3);
        flightMode = new QSlider(groupBox_2);
        flightMode->setObjectName(QString::fromUtf8("flightMode"));
        flightMode->setMaximum(6);
        flightMode->setPageStep(1);
        flightMode->setOrientation(Qt::Horizontal);
        flightMode->setTickPosition(QSlider::TicksAbove);
        flightMode->setTickInterval(1);

        horizontalLayout->addWidget(flightMode);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(9, 0, -1, 3);
        disarmed = new QRadioButton(groupBox_3);
        disarmed->setObjectName(QString::fromUtf8("disarmed"));
        disarmed->setChecked(true);

        horizontalLayout_3->addWidget(disarmed);

        arming = new QRadioButton(groupBox_3);
        arming->setObjectName(QString::fromUtf8("arming"));

        horizontalLayout_3->addWidget(arming);

        armed = new QRadioButton(groupBox_3);
        armed->setObjectName(QString::fromUtf8("armed"));

        horizontalLayout_3->addWidget(armed);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setSpacing(3);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(9, 0, 9, 3);
        lbCH1n = new QLabel(groupBox_4);
        lbCH1n->setObjectName(QString::fromUtf8("lbCH1n"));
        lbCH1n->setText(QString::fromUtf8("CH1"));
        lbCH1n->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCH1n, 0, 0, 1, 1);

        ch1 = new QSlider(groupBox_4);
        ch1->setObjectName(QString::fromUtf8("ch1"));
        ch1->setMinimum(-511);
        ch1->setMaximum(512);
        ch1->setSingleStep(16);
        ch1->setPageStep(32);
        ch1->setOrientation(Qt::Horizontal);
        ch1->setTickPosition(QSlider::TicksAbove);
        ch1->setTickInterval(128);

        gridLayout_3->addWidget(ch1, 0, 1, 1, 1);

        lbCH1 = new QLabel(groupBox_4);
        lbCH1->setObjectName(QString::fromUtf8("lbCH1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbCH1->sizePolicy().hasHeightForWidth());
        lbCH1->setSizePolicy(sizePolicy1);
        lbCH1->setMinimumSize(QSize(30, 0));
        lbCH1->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(lbCH1, 0, 2, 1, 1);

        lbCH2n = new QLabel(groupBox_4);
        lbCH2n->setObjectName(QString::fromUtf8("lbCH2n"));
        lbCH2n->setText(QString::fromUtf8("CH2"));
        lbCH2n->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCH2n, 1, 0, 1, 1);

        ch2 = new QSlider(groupBox_4);
        ch2->setObjectName(QString::fromUtf8("ch2"));
        ch2->setMinimum(-511);
        ch2->setMaximum(512);
        ch2->setSingleStep(16);
        ch2->setPageStep(32);
        ch2->setOrientation(Qt::Horizontal);
        ch2->setTickPosition(QSlider::TicksAbove);
        ch2->setTickInterval(128);

        gridLayout_3->addWidget(ch2, 1, 1, 1, 1);

        lbCH2 = new QLabel(groupBox_4);
        lbCH2->setObjectName(QString::fromUtf8("lbCH2"));
        sizePolicy1.setHeightForWidth(lbCH2->sizePolicy().hasHeightForWidth());
        lbCH2->setSizePolicy(sizePolicy1);
        lbCH2->setMinimumSize(QSize(30, 0));
        lbCH2->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(lbCH2, 1, 2, 1, 1);

        lbCH3n = new QLabel(groupBox_4);
        lbCH3n->setObjectName(QString::fromUtf8("lbCH3n"));
        lbCH3n->setText(QString::fromUtf8("CH3"));
        lbCH3n->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCH3n, 2, 0, 1, 1);

        ch3 = new QSlider(groupBox_4);
        ch3->setObjectName(QString::fromUtf8("ch3"));
        ch3->setMinimum(-511);
        ch3->setMaximum(512);
        ch3->setSingleStep(16);
        ch3->setPageStep(32);
        ch3->setOrientation(Qt::Horizontal);
        ch3->setTickPosition(QSlider::TicksAbove);
        ch3->setTickInterval(128);

        gridLayout_3->addWidget(ch3, 2, 1, 1, 1);

        lbCH3 = new QLabel(groupBox_4);
        lbCH3->setObjectName(QString::fromUtf8("lbCH3"));
        sizePolicy1.setHeightForWidth(lbCH3->sizePolicy().hasHeightForWidth());
        lbCH3->setSizePolicy(sizePolicy1);
        lbCH3->setMinimumSize(QSize(30, 0));
        lbCH3->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(lbCH3, 2, 2, 1, 1);

        lbCH4n = new QLabel(groupBox_4);
        lbCH4n->setObjectName(QString::fromUtf8("lbCH4n"));
        lbCH4n->setText(QString::fromUtf8("CH4"));
        lbCH4n->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCH4n, 3, 0, 1, 1);

        ch4 = new QSlider(groupBox_4);
        ch4->setObjectName(QString::fromUtf8("ch4"));
        ch4->setMinimum(-511);
        ch4->setMaximum(512);
        ch4->setSingleStep(16);
        ch4->setPageStep(32);
        ch4->setOrientation(Qt::Horizontal);
        ch4->setTickPosition(QSlider::TicksAbove);
        ch4->setTickInterval(128);

        gridLayout_3->addWidget(ch4, 3, 1, 1, 1);

        lbCH4 = new QLabel(groupBox_4);
        lbCH4->setObjectName(QString::fromUtf8("lbCH4"));
        sizePolicy1.setHeightForWidth(lbCH4->sizePolicy().hasHeightForWidth());
        lbCH4->setSizePolicy(sizePolicy1);
        lbCH4->setMinimumSize(QSize(30, 0));
        lbCH4->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(lbCH4, 3, 2, 1, 1);

        lbCH5n = new QLabel(groupBox_4);
        lbCH5n->setObjectName(QString::fromUtf8("lbCH5n"));
        lbCH5n->setText(QString::fromUtf8("CH5"));
        lbCH5n->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCH5n, 4, 0, 1, 1);

        ch5 = new QSlider(groupBox_4);
        ch5->setObjectName(QString::fromUtf8("ch5"));
        ch5->setMinimum(-511);
        ch5->setMaximum(512);
        ch5->setSingleStep(16);
        ch5->setPageStep(32);
        ch5->setOrientation(Qt::Horizontal);
        ch5->setTickPosition(QSlider::TicksAbove);
        ch5->setTickInterval(128);

        gridLayout_3->addWidget(ch5, 4, 1, 1, 1);

        lbCH5 = new QLabel(groupBox_4);
        lbCH5->setObjectName(QString::fromUtf8("lbCH5"));
        sizePolicy1.setHeightForWidth(lbCH5->sizePolicy().hasHeightForWidth());
        lbCH5->setSizePolicy(sizePolicy1);
        lbCH5->setMinimumSize(QSize(30, 0));
        lbCH5->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(lbCH5, 4, 2, 1, 1);

        lbCH6n = new QLabel(groupBox_4);
        lbCH6n->setObjectName(QString::fromUtf8("lbCH6n"));
        lbCH6n->setText(QString::fromUtf8("CH6"));
        lbCH6n->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCH6n, 5, 0, 1, 1);

        lbCH6 = new QLabel(groupBox_4);
        lbCH6->setObjectName(QString::fromUtf8("lbCH6"));
        sizePolicy1.setHeightForWidth(lbCH6->sizePolicy().hasHeightForWidth());
        lbCH6->setSizePolicy(sizePolicy1);
        lbCH6->setMinimumSize(QSize(30, 0));
        lbCH6->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(lbCH6, 5, 2, 1, 1);

        lbCH7n = new QLabel(groupBox_4);
        lbCH7n->setObjectName(QString::fromUtf8("lbCH7n"));
        lbCH7n->setText(QString::fromUtf8("Ch7"));
        lbCH7n->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCH7n, 6, 0, 1, 1);

        lbCH7 = new QLabel(groupBox_4);
        lbCH7->setObjectName(QString::fromUtf8("lbCH7"));
        sizePolicy1.setHeightForWidth(lbCH7->sizePolicy().hasHeightForWidth());
        lbCH7->setSizePolicy(sizePolicy1);
        lbCH7->setMinimumSize(QSize(30, 0));
        lbCH7->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(lbCH7, 6, 2, 1, 1);

        lbCH8n = new QLabel(groupBox_4);
        lbCH8n->setObjectName(QString::fromUtf8("lbCH8n"));
        lbCH8n->setText(QString::fromUtf8("Ch8"));
        lbCH8n->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCH8n, 7, 0, 1, 1);

        lbCH8 = new QLabel(groupBox_4);
        lbCH8->setObjectName(QString::fromUtf8("lbCH8"));
        sizePolicy1.setHeightForWidth(lbCH8->sizePolicy().hasHeightForWidth());
        lbCH8->setSizePolicy(sizePolicy1);
        lbCH8->setMinimumSize(QSize(30, 0));
        lbCH8->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(lbCH8, 7, 2, 1, 1);

        lbCH9n = new QLabel(groupBox_4);
        lbCH9n->setObjectName(QString::fromUtf8("lbCH9n"));
        lbCH9n->setText(QString::fromUtf8("Ch9"));
        lbCH9n->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCH9n, 8, 0, 1, 1);

        ch9 = new QSlider(groupBox_4);
        ch9->setObjectName(QString::fromUtf8("ch9"));
        ch9->setMinimum(-511);
        ch9->setMaximum(512);
        ch9->setSingleStep(16);
        ch9->setPageStep(32);
        ch9->setOrientation(Qt::Horizontal);
        ch9->setTickPosition(QSlider::TicksAbove);
        ch9->setTickInterval(128);

        gridLayout_3->addWidget(ch9, 8, 1, 1, 1);

        lbCH9 = new QLabel(groupBox_4);
        lbCH9->setObjectName(QString::fromUtf8("lbCH9"));
        sizePolicy1.setHeightForWidth(lbCH9->sizePolicy().hasHeightForWidth());
        lbCH9->setSizePolicy(sizePolicy1);
        lbCH9->setMinimumSize(QSize(30, 0));
        lbCH9->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(lbCH9, 8, 2, 1, 1);

        lbCH10n = new QLabel(groupBox_4);
        lbCH10n->setObjectName(QString::fromUtf8("lbCH10n"));
        lbCH10n->setText(QString::fromUtf8("Ch10"));
        lbCH10n->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbCH10n, 9, 0, 1, 1);

        ch10 = new QSlider(groupBox_4);
        ch10->setObjectName(QString::fromUtf8("ch10"));
        ch10->setMinimum(-511);
        ch10->setMaximum(512);
        ch10->setSingleStep(16);
        ch10->setPageStep(32);
        ch10->setOrientation(Qt::Horizontal);
        ch10->setTickPosition(QSlider::TicksAbove);
        ch10->setTickInterval(128);

        gridLayout_3->addWidget(ch10, 9, 1, 1, 1);

        lbCH10 = new QLabel(groupBox_4);
        lbCH10->setObjectName(QString::fromUtf8("lbCH10"));
        sizePolicy1.setHeightForWidth(lbCH10->sizePolicy().hasHeightForWidth());
        lbCH10->setSizePolicy(sizePolicy1);
        lbCH10->setMinimumSize(QSize(30, 0));
        lbCH10->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(lbCH10, 9, 2, 1, 1);

        ch6 = new QSlider(groupBox_4);
        ch6->setObjectName(QString::fromUtf8("ch6"));
        ch6->setMinimum(-511);
        ch6->setMaximum(512);
        ch6->setSingleStep(16);
        ch6->setPageStep(32);
        ch6->setOrientation(Qt::Horizontal);
        ch6->setTickPosition(QSlider::TicksAbove);
        ch6->setTickInterval(128);

        gridLayout_3->addWidget(ch6, 5, 1, 1, 1);

        ch7 = new QSlider(groupBox_4);
        ch7->setObjectName(QString::fromUtf8("ch7"));
        ch7->setMinimum(-511);
        ch7->setMaximum(512);
        ch7->setSingleStep(16);
        ch7->setPageStep(32);
        ch7->setOrientation(Qt::Horizontal);
        ch7->setTickPosition(QSlider::TicksAbove);
        ch7->setTickInterval(128);

        gridLayout_3->addWidget(ch7, 6, 1, 1, 1);

        ch8 = new QSlider(groupBox_4);
        ch8->setObjectName(QString::fromUtf8("ch8"));
        ch8->setMinimum(-511);
        ch8->setMaximum(512);
        ch8->setSingleStep(16);
        ch8->setPageStep(32);
        ch8->setOrientation(Qt::Horizontal);
        ch8->setTickPosition(QSlider::TicksAbove);
        ch8->setTickInterval(128);

        gridLayout_3->addWidget(ch8, 7, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString::fromUtf8("channels"));

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        groupBox->setTitle(QApplication::translate("Widget", "send data", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "Flight mode", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "Armed state", nullptr));
        disarmed->setText(QApplication::translate("Widget", "Disarmed", nullptr));
        arming->setText(QApplication::translate("Widget", "Arming", nullptr));
        armed->setText(QApplication::translate("Widget", "Armed", nullptr));
        groupBox_4->setTitle(QApplication::translate("Widget", "Channels", nullptr));
        Q_UNUSED(Widget);
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPTESTWIDGET_H
