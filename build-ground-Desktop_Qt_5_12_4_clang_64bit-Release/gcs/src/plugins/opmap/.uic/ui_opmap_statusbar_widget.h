/********************************************************************************
** Form generated from reading UI file 'opmap_statusbar_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPMAP_STATUSBAR_WIDGET_H
#define UI_OPMAP_STATUSBAR_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opmap_statusbar_widget
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelStatus;
    QSpacerItem *horizontalSpacer_3;
    QProgressBar *progressBarTiles;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *opmap_statusbar_widget)
    {
        if (opmap_statusbar_widget->objectName().isEmpty())
            opmap_statusbar_widget->setObjectName(QString::fromUtf8("opmap_statusbar_widget"));
        opmap_statusbar_widget->resize(501, 20);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(opmap_statusbar_widget->sizePolicy().hasHeightForWidth());
        opmap_statusbar_widget->setSizePolicy(sizePolicy);
        opmap_statusbar_widget->setWindowTitle(QString::fromUtf8("Form"));
        opmap_statusbar_widget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border: none;\n"
""));
        horizontalLayout = new QHBoxLayout(opmap_statusbar_widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame = new QFrame(opmap_statusbar_widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
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
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBarTiles->sizePolicy().hasHeightForWidth());
        progressBarTiles->setSizePolicy(sizePolicy1);
        progressBarTiles->setMinimumSize(QSize(100, 0));
        progressBarTiles->setMaximumSize(QSize(100, 14));
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


        horizontalLayout->addWidget(frame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(opmap_statusbar_widget);

        QMetaObject::connectSlotsByName(opmap_statusbar_widget);
    } // setupUi

    void retranslateUi(QWidget *opmap_statusbar_widget)
    {
        Q_UNUSED(opmap_statusbar_widget);
    } // retranslateUi

};

namespace Ui {
    class opmap_statusbar_widget: public Ui_opmap_statusbar_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPMAP_STATUSBAR_WIDGET_H
