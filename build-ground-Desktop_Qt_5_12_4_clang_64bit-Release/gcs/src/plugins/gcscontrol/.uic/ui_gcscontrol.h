/********************************************************************************
** Form generated from reading UI file 'gcscontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GCSCONTROL_H
#define UI_GCSCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "joystickcontrol.h"

QT_BEGIN_NAMESPACE

class Ui_GCSControl
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxGcsControl;
    QCheckBox *checkBoxUDPControl;
    QCheckBox *checkBoxArming;
    QLabel *label;
    QComboBox *comboBoxFlightMode;
    QGridLayout *gridLayout;
    JoystickControl *widgetLeftStick;
    QSpacerItem *verticalSpacer;
    JoystickControl *widgetRightStick;

    void setupUi(QWidget *GCSControl)
    {
        if (GCSControl->objectName().isEmpty())
            GCSControl->setObjectName(QString::fromUtf8("GCSControl"));
        GCSControl->resize(653, 295);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GCSControl->sizePolicy().hasHeightForWidth());
        GCSControl->setSizePolicy(sizePolicy);
        GCSControl->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(GCSControl);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxGcsControl = new QCheckBox(GCSControl);
        checkBoxGcsControl->setObjectName(QString::fromUtf8("checkBoxGcsControl"));

        horizontalLayout->addWidget(checkBoxGcsControl);

        checkBoxUDPControl = new QCheckBox(GCSControl);
        checkBoxUDPControl->setObjectName(QString::fromUtf8("checkBoxUDPControl"));
        checkBoxUDPControl->setEnabled(false);

        horizontalLayout->addWidget(checkBoxUDPControl);

        checkBoxArming = new QCheckBox(GCSControl);
        checkBoxArming->setObjectName(QString::fromUtf8("checkBoxArming"));
        checkBoxArming->setEnabled(true);

        horizontalLayout->addWidget(checkBoxArming);

        label = new QLabel(GCSControl);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        comboBoxFlightMode = new QComboBox(GCSControl);
        comboBoxFlightMode->setObjectName(QString::fromUtf8("comboBoxFlightMode"));

        horizontalLayout->addWidget(comboBoxFlightMode);


        verticalLayout_2->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setContentsMargins(0, -1, -1, -1);
        widgetLeftStick = new JoystickControl(GCSControl);
        widgetLeftStick->setObjectName(QString::fromUtf8("widgetLeftStick"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetLeftStick->sizePolicy().hasHeightForWidth());
        widgetLeftStick->setSizePolicy(sizePolicy1);
        widgetLeftStick->setMinimumSize(QSize(100, 100));
        widgetLeftStick->setMouseTracking(false);
        widgetLeftStick->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout->addWidget(widgetLeftStick, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(2, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        widgetRightStick = new JoystickControl(GCSControl);
        widgetRightStick->setObjectName(QString::fromUtf8("widgetRightStick"));
        sizePolicy1.setHeightForWidth(widgetRightStick->sizePolicy().hasHeightForWidth());
        widgetRightStick->setSizePolicy(sizePolicy1);
        widgetRightStick->setMinimumSize(QSize(100, 100));
        widgetRightStick->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout->addWidget(widgetRightStick, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        retranslateUi(GCSControl);

        QMetaObject::connectSlotsByName(GCSControl);
    } // setupUi

    void retranslateUi(QWidget *GCSControl)
    {
        GCSControl->setWindowTitle(QApplication::translate("GCSControl", "Form", nullptr));
        checkBoxGcsControl->setText(QApplication::translate("GCSControl", "GCS Control", nullptr));
        checkBoxUDPControl->setText(QApplication::translate("GCSControl", "UDP Control", nullptr));
        checkBoxArming->setText(QApplication::translate("GCSControl", "Arm switch (Accessory0)", nullptr));
        label->setText(QApplication::translate("GCSControl", "Flight Mode:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GCSControl: public Ui_GCSControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GCSCONTROL_H
