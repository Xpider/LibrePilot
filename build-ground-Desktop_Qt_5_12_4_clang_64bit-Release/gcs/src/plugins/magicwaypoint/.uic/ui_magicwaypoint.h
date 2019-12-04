/********************************************************************************
** Form generated from reading UI file 'magicwaypoint.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGICWAYPOINT_H
#define UI_MAGICWAYPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "positionfield.h"

QT_BEGIN_NAMESPACE

class Ui_MagicWaypoint
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSlider *horizontalSliderScale;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    PositionField *widgetPosition;

    void setupUi(QWidget *MagicWaypoint)
    {
        if (MagicWaypoint->objectName().isEmpty())
            MagicWaypoint->setObjectName(QString::fromUtf8("MagicWaypoint"));
        MagicWaypoint->resize(653, 296);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MagicWaypoint->sizePolicy().hasHeightForWidth());
        MagicWaypoint->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(MagicWaypoint);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(MagicWaypoint);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(50, 0));

        horizontalLayout->addWidget(label);

        horizontalSliderScale = new QSlider(MagicWaypoint);
        horizontalSliderScale->setObjectName(QString::fromUtf8("horizontalSliderScale"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalSliderScale->sizePolicy().hasHeightForWidth());
        horizontalSliderScale->setSizePolicy(sizePolicy2);
        horizontalSliderScale->setMinimum(1);
        horizontalSliderScale->setMaximum(9999);
        horizontalSliderScale->setOrientation(Qt::Horizontal);
        horizontalSliderScale->setTickPosition(QSlider::TicksBelow);
        horizontalSliderScale->setTickInterval(10);

        horizontalLayout->addWidget(horizontalSliderScale);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setContentsMargins(0, -1, -1, -1);
        widgetPosition = new PositionField(MagicWaypoint);
        widgetPosition->setObjectName(QString::fromUtf8("widgetPosition"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widgetPosition->sizePolicy().hasHeightForWidth());
        widgetPosition->setSizePolicy(sizePolicy3);
        widgetPosition->setMinimumSize(QSize(200, 200));
        widgetPosition->setMouseTracking(false);

        gridLayout->addWidget(widgetPosition, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        retranslateUi(MagicWaypoint);

        QMetaObject::connectSlotsByName(MagicWaypoint);
    } // setupUi

    void retranslateUi(QWidget *MagicWaypoint)
    {
        MagicWaypoint->setWindowTitle(QApplication::translate("MagicWaypoint", "Form", nullptr));
        label->setText(QApplication::translate("MagicWaypoint", "Scale:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MagicWaypoint: public Ui_MagicWaypoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGICWAYPOINT_H
