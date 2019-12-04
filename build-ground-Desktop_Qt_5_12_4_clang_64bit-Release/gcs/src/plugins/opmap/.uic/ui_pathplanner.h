/********************************************************************************
** Form generated from reading UI file 'pathplanner.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHPLANNER_H
#define UI_PATHPLANNER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pathPlannerUI
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *tbAdd;
    QToolButton *tbDelete;
    QToolButton *tbInsert;
    QToolButton *tbReadFromFile;
    QToolButton *tbSaveToFile;
    QToolButton *tbSendToUAV;
    QToolButton *tbFetchFromUAV;
    QSpacerItem *horizontalSpacer;
    QToolButton *tbDetails;
    QTableView *tableView;

    void setupUi(QWidget *pathPlannerUI)
    {
        if (pathPlannerUI->objectName().isEmpty())
            pathPlannerUI->setObjectName(QString::fromUtf8("pathPlannerUI"));
        pathPlannerUI->resize(536, 262);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/core/images/librepilot_logo_64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pathPlannerUI->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(pathPlannerUI);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tbAdd = new QToolButton(pathPlannerUI);
        tbAdd->setObjectName(QString::fromUtf8("tbAdd"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/opmap/images/plus3.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbAdd->setIcon(icon1);

        horizontalLayout->addWidget(tbAdd);

        tbDelete = new QToolButton(pathPlannerUI);
        tbDelete->setObjectName(QString::fromUtf8("tbDelete"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/opmap/images/stopb.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbDelete->setIcon(icon2);

        horizontalLayout->addWidget(tbDelete);

        tbInsert = new QToolButton(pathPlannerUI);
        tbInsert->setObjectName(QString::fromUtf8("tbInsert"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/opmap/images/forward_alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbInsert->setIcon(icon3);

        horizontalLayout->addWidget(tbInsert);

        tbReadFromFile = new QToolButton(pathPlannerUI);
        tbReadFromFile->setObjectName(QString::fromUtf8("tbReadFromFile"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/opmap/images/unarchive.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbReadFromFile->setIcon(icon4);

        horizontalLayout->addWidget(tbReadFromFile);

        tbSaveToFile = new QToolButton(pathPlannerUI);
        tbSaveToFile->setObjectName(QString::fromUtf8("tbSaveToFile"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/opmap/images/Ekisho Deep Ocean HD1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbSaveToFile->setIcon(icon5);

        horizontalLayout->addWidget(tbSaveToFile);

        tbSendToUAV = new QToolButton(pathPlannerUI);
        tbSendToUAV->setObjectName(QString::fromUtf8("tbSendToUAV"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/opmap/images/up_alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbSendToUAV->setIcon(icon6);

        horizontalLayout->addWidget(tbSendToUAV);

        tbFetchFromUAV = new QToolButton(pathPlannerUI);
        tbFetchFromUAV->setObjectName(QString::fromUtf8("tbFetchFromUAV"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/opmap/images/down_alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbFetchFromUAV->setIcon(icon7);

        horizontalLayout->addWidget(tbFetchFromUAV);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tbDetails = new QToolButton(pathPlannerUI);
        tbDetails->setObjectName(QString::fromUtf8("tbDetails"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/opmap/images/star.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbDetails->setIcon(icon8);

        horizontalLayout->addWidget(tbDetails);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(pathPlannerUI);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableView);


        retranslateUi(pathPlannerUI);

        QMetaObject::connectSlotsByName(pathPlannerUI);
    } // setupUi

    void retranslateUi(QWidget *pathPlannerUI)
    {
        pathPlannerUI->setWindowTitle(QApplication::translate("pathPlannerUI", "PathPlanner", nullptr));
#ifndef QT_NO_TOOLTIP
        tbAdd->setToolTip(QApplication::translate("pathPlannerUI", "Add Leg", nullptr));
#endif // QT_NO_TOOLTIP
        tbAdd->setText(QApplication::translate("pathPlannerUI", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        tbDelete->setToolTip(QApplication::translate("pathPlannerUI", "Delete Leg", nullptr));
#endif // QT_NO_TOOLTIP
        tbDelete->setText(QApplication::translate("pathPlannerUI", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        tbInsert->setToolTip(QApplication::translate("pathPlannerUI", "Insert Leg", nullptr));
#endif // QT_NO_TOOLTIP
        tbInsert->setText(QApplication::translate("pathPlannerUI", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        tbReadFromFile->setToolTip(QApplication::translate("pathPlannerUI", "Read from file", nullptr));
#endif // QT_NO_TOOLTIP
        tbReadFromFile->setText(QApplication::translate("pathPlannerUI", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        tbSaveToFile->setToolTip(QApplication::translate("pathPlannerUI", "Save to file", nullptr));
#endif // QT_NO_TOOLTIP
        tbSaveToFile->setText(QApplication::translate("pathPlannerUI", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        tbSendToUAV->setToolTip(QApplication::translate("pathPlannerUI", "Send to UAV", nullptr));
#endif // QT_NO_TOOLTIP
        tbSendToUAV->setText(QApplication::translate("pathPlannerUI", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        tbFetchFromUAV->setToolTip(QApplication::translate("pathPlannerUI", "Fetch from UAV", nullptr));
#endif // QT_NO_TOOLTIP
        tbFetchFromUAV->setText(QApplication::translate("pathPlannerUI", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        tbDetails->setToolTip(QApplication::translate("pathPlannerUI", "Open Details", nullptr));
#endif // QT_NO_TOOLTIP
        tbDetails->setText(QApplication::translate("pathPlannerUI", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pathPlannerUI: public Ui_pathPlannerUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHPLANNER_H
