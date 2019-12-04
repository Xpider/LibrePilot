/********************************************************************************
** Form generated from reading UI file 'importsummarydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTSUMMARYDIALOG_H
#define UI_IMPORTSUMMARYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportSummaryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *importSummaryList;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *helpButton;
    QPushButton *saveToFlash;
    QPushButton *closeButton;

    void setupUi(QDialog *ImportSummaryDialog)
    {
        if (ImportSummaryDialog->objectName().isEmpty())
            ImportSummaryDialog->setObjectName(QString::fromUtf8("ImportSummaryDialog"));
        ImportSummaryDialog->resize(400, 377);
        ImportSummaryDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(ImportSummaryDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ImportSummaryDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        importSummaryList = new QTableWidget(ImportSummaryDialog);
        importSummaryList->setObjectName(QString::fromUtf8("importSummaryList"));
        importSummaryList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        importSummaryList->setAlternatingRowColors(true);
        importSummaryList->horizontalHeader()->setMinimumSectionSize(10);
        importSummaryList->horizontalHeader()->setStretchLastSection(true);
        importSummaryList->verticalHeader()->setVisible(false);
        importSummaryList->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(importSummaryList);

        progressBar = new QProgressBar(ImportSummaryDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        helpButton = new QPushButton(ImportSummaryDialog);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setMaximumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/core/images/helpicon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon);
        helpButton->setIconSize(QSize(32, 32));
        helpButton->setFlat(true);

        horizontalLayout->addWidget(helpButton);

        saveToFlash = new QPushButton(ImportSummaryDialog);
        saveToFlash->setObjectName(QString::fromUtf8("saveToFlash"));

        horizontalLayout->addWidget(saveToFlash);

        closeButton = new QPushButton(ImportSummaryDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ImportSummaryDialog);

        QMetaObject::connectSlotsByName(ImportSummaryDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportSummaryDialog)
    {
        ImportSummaryDialog->setWindowTitle(QApplication::translate("ImportSummaryDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("ImportSummaryDialog", "UAV Settings import summary", nullptr));
        helpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveToFlash->setToolTip(QApplication::translate("ImportSummaryDialog", "Save all settings checked above to persistent board storage,\n"
"then close the dialog.", nullptr));
#endif // QT_NO_TOOLTIP
        saveToFlash->setText(QApplication::translate("ImportSummaryDialog", "Save to Board Flash", nullptr));
#ifndef QT_NO_TOOLTIP
        closeButton->setToolTip(QApplication::translate("ImportSummaryDialog", "Close this dialog without saving to persistent storage", nullptr));
#endif // QT_NO_TOOLTIP
        closeButton->setText(QApplication::translate("ImportSummaryDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportSummaryDialog: public Ui_ImportSummaryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTSUMMARYDIALOG_H
