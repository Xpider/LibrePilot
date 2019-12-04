/********************************************************************************
** Form generated from reading UI file 'homeeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEEDITOR_H
#define UI_HOMEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_homeEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *altitude;
    QDoubleSpinBox *longitude;
    QDoubleSpinBox *latitude;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *homeEditor)
    {
        if (homeEditor->objectName().isEmpty())
            homeEditor->setObjectName(QString::fromUtf8("homeEditor"));
        homeEditor->resize(295, 159);
        gridLayout = new QGridLayout(homeEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(homeEditor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(homeEditor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(homeEditor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        altitude = new QDoubleSpinBox(homeEditor);
        altitude->setObjectName(QString::fromUtf8("altitude"));
        altitude->setMinimum(-999999999.000000000000000);
        altitude->setMaximum(999999999.000000000000000);
        altitude->setSingleStep(0.100000000000000);

        gridLayout->addWidget(altitude, 2, 1, 1, 1);

        longitude = new QDoubleSpinBox(homeEditor);
        longitude->setObjectName(QString::fromUtf8("longitude"));
        longitude->setDecimals(8);
        longitude->setMinimum(-999999999.000000000000000);
        longitude->setMaximum(999999999.000000000000000);
        longitude->setSingleStep(0.100000000000000);

        gridLayout->addWidget(longitude, 1, 1, 1, 1);

        latitude = new QDoubleSpinBox(homeEditor);
        latitude->setObjectName(QString::fromUtf8("latitude"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(latitude->sizePolicy().hasHeightForWidth());
        latitude->setSizePolicy(sizePolicy);
        latitude->setBaseSize(QSize(0, 0));
        latitude->setDecimals(8);
        latitude->setMinimum(-999999999.000000000000000);
        latitude->setMaximum(999999999.000000000000000);
        latitude->setSingleStep(0.100000000000000);

        gridLayout->addWidget(latitude, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(homeEditor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(homeEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), homeEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), homeEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(homeEditor);
    } // setupUi

    void retranslateUi(QDialog *homeEditor)
    {
        homeEditor->setWindowTitle(QApplication::translate("homeEditor", "Dialog", nullptr));
        label->setText(QApplication::translate("homeEditor", "Latitude:", nullptr));
        label_2->setText(QApplication::translate("homeEditor", "Longitude:", nullptr));
        label_3->setText(QApplication::translate("homeEditor", "Altitude:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homeEditor: public Ui_homeEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEEDITOR_H
