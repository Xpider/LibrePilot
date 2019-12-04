/********************************************************************************
** Form generated from reading UI file 'pathactioneditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHACTIONEDITOR_H
#define UI_PATHACTIONEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PathActionEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QTreeView *pathactions;
    QPushButton *buttonNewPathAction;
    QPushButton *buttonNewWaypoint;
    QPushButton *buttonSaveFile;
    QPushButton *buttonLoadFile;

    void setupUi(QWidget *PathActionEditor)
    {
        if (PathActionEditor->objectName().isEmpty())
            PathActionEditor->setObjectName(QString::fromUtf8("PathActionEditor"));
        PathActionEditor->resize(653, 296);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PathActionEditor->sizePolicy().hasHeightForWidth());
        PathActionEditor->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(PathActionEditor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pathactions = new QTreeView(PathActionEditor);
        pathactions->setObjectName(QString::fromUtf8("pathactions"));

        verticalLayout_2->addWidget(pathactions);

        buttonNewPathAction = new QPushButton(PathActionEditor);
        buttonNewPathAction->setObjectName(QString::fromUtf8("buttonNewPathAction"));

        verticalLayout_2->addWidget(buttonNewPathAction);

        buttonNewWaypoint = new QPushButton(PathActionEditor);
        buttonNewWaypoint->setObjectName(QString::fromUtf8("buttonNewWaypoint"));

        verticalLayout_2->addWidget(buttonNewWaypoint);

        buttonSaveFile = new QPushButton(PathActionEditor);
        buttonSaveFile->setObjectName(QString::fromUtf8("buttonSaveFile"));

        verticalLayout_2->addWidget(buttonSaveFile);

        buttonLoadFile = new QPushButton(PathActionEditor);
        buttonLoadFile->setObjectName(QString::fromUtf8("buttonLoadFile"));

        verticalLayout_2->addWidget(buttonLoadFile);


        retranslateUi(PathActionEditor);

        QMetaObject::connectSlotsByName(PathActionEditor);
    } // setupUi

    void retranslateUi(QWidget *PathActionEditor)
    {
        PathActionEditor->setWindowTitle(QApplication::translate("PathActionEditor", "Form", nullptr));
        buttonNewPathAction->setText(QApplication::translate("PathActionEditor", "New PathAction", nullptr));
        buttonNewWaypoint->setText(QApplication::translate("PathActionEditor", "New Waypoint", nullptr));
        buttonSaveFile->setText(QApplication::translate("PathActionEditor", "Save to File", nullptr));
        buttonLoadFile->setText(QApplication::translate("PathActionEditor", "Load from File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PathActionEditor: public Ui_PathActionEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHACTIONEDITOR_H
