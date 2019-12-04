/********************************************************************************
** Form generated from reading UI file 'opmap_zoom_slider_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPMAP_ZOOM_SLIDER_WIDGET_H
#define UI_OPMAP_ZOOM_SLIDER_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opmap_zoom_slider_widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton;
    QSlider *verticalSlider;
    QToolButton *toolButton_2;

    void setupUi(QWidget *opmap_zoom_slider_widget)
    {
        if (opmap_zoom_slider_widget->objectName().isEmpty())
            opmap_zoom_slider_widget->setObjectName(QString::fromUtf8("opmap_zoom_slider_widget"));
        opmap_zoom_slider_widget->resize(27, 187);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(opmap_zoom_slider_widget->sizePolicy().hasHeightForWidth());
        opmap_zoom_slider_widget->setSizePolicy(sizePolicy);
        opmap_zoom_slider_widget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border: none;\n"
""));
        verticalLayout_2 = new QVBoxLayout(opmap_zoom_slider_widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(opmap_zoom_slider_widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 100);\n"
"border: none;\n"
"border-radius: 12px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolButton = new QToolButton(frame);
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

        verticalSlider = new QSlider(frame);
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

        toolButton_2 = new QToolButton(frame);
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


        verticalLayout_2->addWidget(frame);


        retranslateUi(opmap_zoom_slider_widget);

        QMetaObject::connectSlotsByName(opmap_zoom_slider_widget);
    } // setupUi

    void retranslateUi(QWidget *opmap_zoom_slider_widget)
    {
        opmap_zoom_slider_widget->setWindowTitle(QApplication::translate("opmap_zoom_slider_widget", "Form", nullptr));
        toolButton->setText(QString());
        toolButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class opmap_zoom_slider_widget: public Ui_opmap_zoom_slider_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPMAP_ZOOM_SLIDER_WIDGET_H
