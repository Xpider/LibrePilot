/********************************************************************************
** Form generated from reading UI file 'hitlwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HITLWIDGET_H
#define UI_HITLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HITLWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer_7;
    QFrame *line;
    QSpacerItem *horizontalSpacer_4;
    QLabel *apLabel;
    QSpacerItem *horizontalSpacer_5;
    QLabel *simLabel;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonClearLog;
    QTextEdit *textBrowser;

    void setupUi(QWidget *HITLWidget)
    {
        if (HITLWidget->objectName().isEmpty())
            HITLWidget->setObjectName(QString::fromUtf8("HITLWidget"));
        HITLWidget->resize(786, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HITLWidget->sizePolicy().hasHeightForWidth());
        HITLWidget->setSizePolicy(sizePolicy);
        HITLWidget->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QScrollBar:vertical {\n"
"      border: 1px solid grey;\n"
"      background: grey;\n"
"      margin: 22px 0 22px 0;\n"
"  }\n"
"\n"
"QScrollBar:vertical:disabled {\n"
"      border: 1px solid grey;\n"
"      \n"
"	background-color: grey;\n"
"      margin: 22px 0 22px 0;\n"
"  }\n"
"\n"
"  QScrollBar::handle:vertical {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(120, 120, 255, 255), stop:1 rgba(80, 80, 160, 255));\n"
"      min-height: 20px;\n"
"  }\n"
"\n"
"QScrollBar::handle:vertical:disabled{\n"
"background-color: grey;\n"
"      min-height: 20px;\n"
"  }\n"
"\n"
"\n"
"  QScrollBar::handle:vertical:pressed {\n"
"\n"
"     background-color: rgb(85, 85, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(170, 170, 255, 255), stop:1 rgba(80, 80, 160, 255));\n"
"\n"
"      min-height: 20px;\n"
"  }\n"
"\n"
"  QScrollBar::add-line:vertical {\n"
"      border: 1px solid black;\n"
"background-color: qlineargradient("
                        "spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"      height: 20px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"  }\n"
"\n"
" QScrollBar::add-line:vertical:disabled {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(100, 100, 100, 255));\n"
"      border: 1px solid grey;\n"
"\n"
"  }\n"
"\n"
" QScrollBar::sub-line:vertical:disabled {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(100, 100, 100, 255));\n"
" border: 1px solid grey;\n"
"\n"
"  }\n"
"\n"
" QScrollBar::add-line:vertical:pressed {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255, 200), stop:1 rgba(180, 180, 180, 200));\n"
"  }\n"
"\n"
" QScrollBar::sub-line:vertical:pressed {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255, 200), stop:1 rgba(180, 180, 180, 200));\n"
""
                        "  }\n"
"\n"
"  QScrollBar::sub-line:vertical {\n"
"      border: 1px solid black;      \n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"      height: 20px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"  }\n"
" QScrollBar::down-arrow:vertical {\n"
"	\n"
"	image: url(:/hitlnew/images/arrow-down2.png);\n"
"  }\n"
"\n"
"  QScrollBar::up-arrow:vertical {\n"
"	image: url(:/hitlnew/images/arrow-up2.png);\n"
"  }\n"
"\n"
"  QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"      background: none;\n"
"  }\n"
"\n"
"\n"
"QPushButton {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(71, 71, 71, 255));\n"
"\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid black; \n"
"width: 66px;\n"
"height: 20px;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2"
                        ":0.5, y2:1, stop:0 rgba(120, 120, 120, 255));\n"
"	color: rgb(194, 194, 194);\n"
"border: 1px solid gray; \n"
"width: 66px;\n"
"height: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255, 200), stop:1 rgba(180, 180, 180, 200));\n"
"color: rgb(255, 255, 255);\n"
"border: 0px; \n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"color: rgb(255, 255, 255);\n"
"border: 0px; \n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"color: rgb(255, 255, 255);\n"
"border: 0px; \n"
"}"));
        verticalLayout = new QVBoxLayout(HITLWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(HITLWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 0));
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QFrame{\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(110, 110, 110, 255), stop:1 rgba(71, 71, 71, 255));\n"
"color: rgba(0, 0, 0, 128);\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        startButton = new QPushButton(frame);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy1);
        startButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(startButton);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stopButton = new QPushButton(frame);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(stopButton);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout->addWidget(line);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        apLabel = new QLabel(frame);
        apLabel->setObjectName(QString::fromUtf8("apLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(apLabel->sizePolicy().hasHeightForWidth());
        apLabel->setSizePolicy(sizePolicy2);
        apLabel->setMinimumSize(QSize(140, 0));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        apLabel->setFont(font);
        apLabel->setLayoutDirection(Qt::LeftToRight);
        apLabel->setAutoFillBackground(false);
        apLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        apLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(apLabel);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        simLabel = new QLabel(frame);
        simLabel->setObjectName(QString::fromUtf8("simLabel"));
        sizePolicy2.setHeightForWidth(simLabel->sizePolicy().hasHeightForWidth());
        simLabel->setSizePolicy(sizePolicy2);
        simLabel->setMinimumSize(QSize(140, 0));
        simLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        simLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(simLabel);

        horizontalSpacer_6 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::VLine);

        horizontalLayout->addWidget(line_2);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        buttonClearLog = new QPushButton(frame);
        buttonClearLog->setObjectName(QString::fromUtf8("buttonClearLog"));
        buttonClearLog->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonClearLog->sizePolicy().hasHeightForWidth());
        buttonClearLog->setSizePolicy(sizePolicy1);
        buttonClearLog->setMinimumSize(QSize(140, 0));
        buttonClearLog->setSizeIncrement(QSize(0, 0));
        buttonClearLog->setBaseSize(QSize(0, 0));
        buttonClearLog->setAutoFillBackground(false);

        horizontalLayout->addWidget(buttonClearLog, 0, Qt::AlignRight);


        verticalLayout_2->addLayout(horizontalLayout);

        textBrowser = new QTextEdit(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy3);
        textBrowser->setMinimumSize(QSize(0, 0));
        textBrowser->setAutoFillBackground(false);
        textBrowser->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background-color: white;\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout->addWidget(frame);

        QWidget::setTabOrder(startButton, stopButton);
        QWidget::setTabOrder(stopButton, buttonClearLog);
        QWidget::setTabOrder(buttonClearLog, textBrowser);

        retranslateUi(HITLWidget);

        QMetaObject::connectSlotsByName(HITLWidget);
    } // setupUi

    void retranslateUi(QWidget *HITLWidget)
    {
        HITLWidget->setWindowTitle(QApplication::translate("HITLWidget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        startButton->setToolTip(QApplication::translate("HITLWidget", "Request update", nullptr));
#endif // QT_NO_TOOLTIP
        startButton->setText(QApplication::translate("HITLWidget", "Start", nullptr));
#ifndef QT_NO_TOOLTIP
        stopButton->setToolTip(QApplication::translate("HITLWidget", "Send update", nullptr));
#endif // QT_NO_TOOLTIP
        stopButton->setText(QApplication::translate("HITLWidget", "Stop", nullptr));
        apLabel->setText(QApplication::translate("HITLWidget", "AutoPilot disconnected", nullptr));
        simLabel->setText(QApplication::translate("HITLWidget", "Simulator disconnected", nullptr));
        buttonClearLog->setText(QApplication::translate("HITLWidget", "Clear Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HITLWidget: public Ui_HITLWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HITLWIDGET_H
