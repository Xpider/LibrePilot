/********************************************************************************
** Form generated from reading UI file 'lineardialgadgetoptionspage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEARDIALGADGETOPTIONSPAGE_H
#define UI_LINEARDIALGADGETOPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "utils/pathchooser.h"

QT_BEGIN_NAMESPACE

class Ui_LineardialGadgetOptionsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    Utils::PathChooser *svgSourceFile;
    QHBoxLayout *horizontalLayout_66;
    QLabel *label_14;
    QPushButton *fontPicker;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_15;
    QSpinBox *decPlaces;
    QLabel *label_16;
    QDoubleSpinBox *factor;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *objectName;
    QLabel *label_19;
    QComboBox *objectField;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLabel *label_9;
    QDoubleSpinBox *minValue;
    QLabel *label_13;
    QDoubleSpinBox *maxValue;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *redMin;
    QLabel *label_12;
    QDoubleSpinBox *redMax;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *yellowMin;
    QLabel *label_11;
    QDoubleSpinBox *yellowMax;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *greenMin;
    QLabel *label_10;
    QDoubleSpinBox *greenMax;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *useOpenGL;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LineardialGadgetOptionsPage)
    {
        if (LineardialGadgetOptionsPage->objectName().isEmpty())
            LineardialGadgetOptionsPage->setObjectName(QString::fromUtf8("LineardialGadgetOptionsPage"));
        LineardialGadgetOptionsPage->resize(604, 455);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LineardialGadgetOptionsPage->sizePolicy().hasHeightForWidth());
        LineardialGadgetOptionsPage->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(LineardialGadgetOptionsPage);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(LineardialGadgetOptionsPage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 604, 455));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        svgSourceFile = new Utils::PathChooser(scrollAreaWidgetContents);
        svgSourceFile->setObjectName(QString::fromUtf8("svgSourceFile"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(svgSourceFile->sizePolicy().hasHeightForWidth());
        svgSourceFile->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(svgSourceFile);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_66 = new QHBoxLayout();
        horizontalLayout_66->setObjectName(QString::fromUtf8("horizontalLayout_66"));
        horizontalLayout_66->setContentsMargins(-1, 0, -1, -1);
        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);

        horizontalLayout_66->addWidget(label_14);

        fontPicker = new QPushButton(scrollAreaWidgetContents);
        fontPicker->setObjectName(QString::fromUtf8("fontPicker"));

        horizontalLayout_66->addWidget(fontPicker);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_66->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_66);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_6->addWidget(label_15);

        decPlaces = new QSpinBox(scrollAreaWidgetContents);
        decPlaces->setObjectName(QString::fromUtf8("decPlaces"));
        decPlaces->setMaximum(99);

        horizontalLayout_6->addWidget(decPlaces);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_6->addWidget(label_16);

        factor = new QDoubleSpinBox(scrollAreaWidgetContents);
        factor->setObjectName(QString::fromUtf8("factor"));
        factor->setDecimals(6);
        factor->setMinimum(-10000.000000000000000);
        factor->setMaximum(100000.000000000000000);

        horizontalLayout_6->addWidget(factor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_6);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_17);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_7->addWidget(label_18);

        objectName = new QComboBox(scrollAreaWidgetContents);
        objectName->setObjectName(QString::fromUtf8("objectName"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(objectName->sizePolicy().hasHeightForWidth());
        objectName->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(objectName);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_7->addWidget(label_19);

        objectField = new QComboBox(scrollAreaWidgetContents);
        objectField->setObjectName(QString::fromUtf8("objectField"));
        sizePolicy3.setHeightForWidth(objectField->sizePolicy().hasHeightForWidth());
        objectField->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(objectField);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_8);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        minValue = new QDoubleSpinBox(scrollAreaWidgetContents);
        minValue->setObjectName(QString::fromUtf8("minValue"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(minValue->sizePolicy().hasHeightForWidth());
        minValue->setSizePolicy(sizePolicy4);
        minValue->setDecimals(3);
        minValue->setMinimum(-99999.000000000000000);
        minValue->setMaximum(99999.990000000005239);

        horizontalLayout_5->addWidget(minValue);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_5->addWidget(label_13);

        maxValue = new QDoubleSpinBox(scrollAreaWidgetContents);
        maxValue->setObjectName(QString::fromUtf8("maxValue"));
        sizePolicy4.setHeightForWidth(maxValue->sizePolicy().hasHeightForWidth());
        maxValue->setSizePolicy(sizePolicy4);
        maxValue->setDecimals(3);
        maxValue->setMinimum(-99999.000000000000000);
        maxValue->setMaximum(99999.990000000005239);

        horizontalLayout_5->addWidget(maxValue);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_6);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        redMin = new QDoubleSpinBox(scrollAreaWidgetContents);
        redMin->setObjectName(QString::fromUtf8("redMin"));
        sizePolicy4.setHeightForWidth(redMin->sizePolicy().hasHeightForWidth());
        redMin->setSizePolicy(sizePolicy4);
        redMin->setDecimals(3);
        redMin->setMinimum(-99999.000000000000000);
        redMin->setMaximum(99999.990000000005239);

        horizontalLayout_4->addWidget(redMin);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_4->addWidget(label_12);

        redMax = new QDoubleSpinBox(scrollAreaWidgetContents);
        redMax->setObjectName(QString::fromUtf8("redMax"));
        sizePolicy4.setHeightForWidth(redMax->sizePolicy().hasHeightForWidth());
        redMax->setSizePolicy(sizePolicy4);
        redMax->setDecimals(3);
        redMax->setMinimum(-99999.000000000000000);
        redMax->setMaximum(99999.990000000005239);

        horizontalLayout_4->addWidget(redMax);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        yellowMin = new QDoubleSpinBox(scrollAreaWidgetContents);
        yellowMin->setObjectName(QString::fromUtf8("yellowMin"));
        sizePolicy4.setHeightForWidth(yellowMin->sizePolicy().hasHeightForWidth());
        yellowMin->setSizePolicy(sizePolicy4);
        yellowMin->setDecimals(3);
        yellowMin->setMinimum(-99999.000000000000000);
        yellowMin->setMaximum(99999.990000000005239);

        horizontalLayout_3->addWidget(yellowMin);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);

        yellowMax = new QDoubleSpinBox(scrollAreaWidgetContents);
        yellowMax->setObjectName(QString::fromUtf8("yellowMax"));
        sizePolicy4.setHeightForWidth(yellowMax->sizePolicy().hasHeightForWidth());
        yellowMax->setSizePolicy(sizePolicy4);
        yellowMax->setDecimals(3);
        yellowMax->setMinimum(-99999.000000000000000);
        yellowMax->setMaximum(99999.990000000005239);

        horizontalLayout_3->addWidget(yellowMax);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        greenMin = new QDoubleSpinBox(scrollAreaWidgetContents);
        greenMin->setObjectName(QString::fromUtf8("greenMin"));
        sizePolicy4.setHeightForWidth(greenMin->sizePolicy().hasHeightForWidth());
        greenMin->setSizePolicy(sizePolicy4);
        greenMin->setDecimals(3);
        greenMin->setMinimum(-99999.000000000000000);
        greenMin->setMaximum(99999.990000000005239);

        horizontalLayout_2->addWidget(greenMin);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        greenMax = new QDoubleSpinBox(scrollAreaWidgetContents);
        greenMax->setObjectName(QString::fromUtf8("greenMax"));
        sizePolicy4.setHeightForWidth(greenMax->sizePolicy().hasHeightForWidth());
        greenMax->setSizePolicy(sizePolicy4);
        greenMax->setDecimals(3);
        greenMax->setMinimum(-99999.000000000000000);
        greenMax->setMaximum(99999.990000000005239);

        horizontalLayout_2->addWidget(greenMax);


        verticalLayout->addLayout(horizontalLayout_2);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        useOpenGL = new QCheckBox(scrollAreaWidgetContents);
        useOpenGL->setObjectName(QString::fromUtf8("useOpenGL"));
        useOpenGL->setChecked(true);

        horizontalLayout_8->addWidget(useOpenGL);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(LineardialGadgetOptionsPage);

        QMetaObject::connectSlotsByName(LineardialGadgetOptionsPage);
    } // setupUi

    void retranslateUi(QWidget *LineardialGadgetOptionsPage)
    {
        LineardialGadgetOptionsPage->setWindowTitle(QApplication::translate("LineardialGadgetOptionsPage", "Form", nullptr));
        label->setText(QApplication::translate("LineardialGadgetOptionsPage", "Dial SVG: ", nullptr));
        label_14->setText(QApplication::translate("LineardialGadgetOptionsPage", "Dial font:", nullptr));
        fontPicker->setText(QApplication::translate("LineardialGadgetOptionsPage", "Select...", nullptr));
        label_15->setText(QApplication::translate("LineardialGadgetOptionsPage", "Decimal places:", nullptr));
        label_16->setText(QApplication::translate("LineardialGadgetOptionsPage", "Factor:", nullptr));
        label_17->setText(QApplication::translate("LineardialGadgetOptionsPage", "Input:", nullptr));
        label_18->setText(QApplication::translate("LineardialGadgetOptionsPage", "ObjectName", nullptr));
        label_19->setText(QApplication::translate("LineardialGadgetOptionsPage", "ObjectField", nullptr));
        label_8->setText(QApplication::translate("LineardialGadgetOptionsPage", "Whole range:", nullptr));
        label_9->setText(QApplication::translate("LineardialGadgetOptionsPage", "Min:", nullptr));
        label_13->setText(QApplication::translate("LineardialGadgetOptionsPage", "Max:", nullptr));
        label_6->setText(QApplication::translate("LineardialGadgetOptionsPage", "Red:", nullptr));
        label_7->setText(QApplication::translate("LineardialGadgetOptionsPage", "Min:", nullptr));
        label_12->setText(QApplication::translate("LineardialGadgetOptionsPage", "Max:", nullptr));
        label_4->setText(QApplication::translate("LineardialGadgetOptionsPage", "Yellow:", nullptr));
        label_5->setText(QApplication::translate("LineardialGadgetOptionsPage", "Min:", nullptr));
        label_11->setText(QApplication::translate("LineardialGadgetOptionsPage", "Max:", nullptr));
        label_2->setText(QApplication::translate("LineardialGadgetOptionsPage", "Green:", nullptr));
        label_3->setText(QApplication::translate("LineardialGadgetOptionsPage", "Min:", nullptr));
        label_10->setText(QApplication::translate("LineardialGadgetOptionsPage", "Max:", nullptr));
        useOpenGL->setText(QApplication::translate("LineardialGadgetOptionsPage", "Use OpenGL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LineardialGadgetOptionsPage: public Ui_LineardialGadgetOptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEARDIALGADGETOPTIONSPAGE_H
