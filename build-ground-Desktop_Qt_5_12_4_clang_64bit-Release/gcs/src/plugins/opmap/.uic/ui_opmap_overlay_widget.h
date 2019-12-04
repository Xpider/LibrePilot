/********************************************************************************
** Form generated from reading UI file 'opmap_overlay_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPMAP_OVERLAY_WIDGET_H
#define UI_OPMAP_OVERLAY_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opmap_overlay_widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton;
    QSlider *verticalSlider;
    QToolButton *toolButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelStatus;
    QSpacerItem *horizontalSpacer_3;
    QProgressBar *progressBarTiles;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *opmap_overlay_widget)
    {
        if (opmap_overlay_widget->objectName().isEmpty())
            opmap_overlay_widget->setObjectName(QString::fromUtf8("opmap_overlay_widget"));
        opmap_overlay_widget->resize(336, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(opmap_overlay_widget->sizePolicy().hasHeightForWidth());
        opmap_overlay_widget->setSizePolicy(sizePolicy);
        opmap_overlay_widget->setMouseTracking(true);
        opmap_overlay_widget->setWindowTitle(QString::fromUtf8("Form"));
        opmap_overlay_widget->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        verticalLayout_2 = new QVBoxLayout(opmap_overlay_widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 20, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame_2 = new QFrame(opmap_overlay_widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 100);\n"
"border: none;\n"
"border-radius: 12px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolButton = new QToolButton(frame_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton {	/* all types of tool button */ \n"
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
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"color: rgb(255, 255, 255);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/opmap/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setAutoRaise(true);

        verticalLayout->addWidget(toolButton);

        verticalSlider = new QSlider(frame_2);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy3);
        verticalSlider->setStyleSheet(QString::fromUtf8("QSlider {\n"
"background-color: rgba(0, 0, 0, 0);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: none;\n"
"height: 4px;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(80, 80, 80, 255));\n"
"margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"border: 1px solid #5c5c5c;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(128, 128, 128, 255));\n"
"width: 24px;\n"
"margin: -2px 0;\n"
"border-radius: 3px;\n"
"}\n"
""));
        verticalSlider->setMinimum(2);
        verticalSlider->setMaximum(19);
        verticalSlider->setPageStep(1);
        verticalSlider->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(verticalSlider);

        toolButton_2 = new QToolButton(frame_2);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy2.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy2);
        toolButton_2->setStyleSheet(QString::fromUtf8("QToolButton {	/* all types of tool button */ \n"
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
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(48, 48, 48, 255), stop:1 rgba(120, 120, 120, 255));\n"
"color: rgb(255, 255, 255);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/opmap/images/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);
        toolButton_2->setAutoRaise(true);

        verticalLayout->addWidget(toolButton_2);


        horizontalLayout->addWidget(frame_2);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        frame = new QFrame(opmap_overlay_widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 100);\n"
"border: none;\n"
"border-radius: 8px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px; "));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        labelStatus = new QLabel(frame);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        labelStatus->setStyleSheet(QString::fromUtf8("QLabel { /* all label types */\n"
"color: rgb(255, 255, 255);\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"border: none;\n"
"border-radius: 10px;\n"
"}"));
        labelStatus->setFrameShape(QFrame::NoFrame);
        labelStatus->setText(QString::fromUtf8("labelStatus"));
        labelStatus->setAlignment(Qt::AlignCenter);
        labelStatus->setMargin(1);

        horizontalLayout_3->addWidget(labelStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        progressBarTiles = new QProgressBar(frame);
        progressBarTiles->setObjectName(QString::fromUtf8("progressBarTiles"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(progressBarTiles->sizePolicy().hasHeightForWidth());
        progressBarTiles->setSizePolicy(sizePolicy4);
        progressBarTiles->setMinimumSize(QSize(100, 0));
        progressBarTiles->setMaximumSize(QSize(100, 16));
        progressBarTiles->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"border: nonei;\n"
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
        progressBarTiles->setValue(24);
        progressBarTiles->setAlignment(Qt::AlignCenter);
        progressBarTiles->setFormat(QString::fromUtf8("%v"));

        horizontalLayout_3->addWidget(progressBarTiles);


        horizontalLayout_2->addWidget(frame);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(opmap_overlay_widget);

        QMetaObject::connectSlotsByName(opmap_overlay_widget);
    } // setupUi

    void retranslateUi(QWidget *opmap_overlay_widget)
    {
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        Q_UNUSED(opmap_overlay_widget);
    } // retranslateUi

};

namespace Ui {
    class opmap_overlay_widget: public Ui_opmap_overlay_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPMAP_OVERLAY_WIDGET_H
