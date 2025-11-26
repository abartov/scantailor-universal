/********************************************************************************
** Form generated from reading UI file 'ApplyToDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYTODIALOG_H
#define UI_APPLYTODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "PageRangeSelectorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ApplyToDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widgetSettingsLeft;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *lineV;
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetSettingsTop;
    QVBoxLayout *verticalLayout_4;
    PageRangeSelectorWidget *widgetPageRangeSelector;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ApplyToDialog)
    {
        if (ApplyToDialog->objectName().isEmpty())
            ApplyToDialog->setObjectName(QString::fromUtf8("ApplyToDialog"));
        ApplyToDialog->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ApplyToDialog->sizePolicy().hasHeightForWidth());
        ApplyToDialog->setSizePolicy(sizePolicy);
        ApplyToDialog->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(ApplyToDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, -1);
        widget = new QWidget(ApplyToDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widgetSettingsLeft = new QWidget(widget);
        widgetSettingsLeft->setObjectName(QString::fromUtf8("widgetSettingsLeft"));
        verticalLayout_2 = new QVBoxLayout(widgetSettingsLeft);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(widgetSettingsLeft);

        lineV = new QFrame(widget);
        lineV->setObjectName(QString::fromUtf8("lineV"));
        lineV->setFrameShape(QFrame::VLine);
        lineV->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(lineV);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widgetSettingsTop = new QWidget(widget);
        widgetSettingsTop->setObjectName(QString::fromUtf8("widgetSettingsTop"));
        verticalLayout_4 = new QVBoxLayout(widgetSettingsTop);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(widgetSettingsTop);

        widgetPageRangeSelector = new PageRangeSelectorWidget(widget);
        widgetPageRangeSelector->setObjectName(QString::fromUtf8("widgetPageRangeSelector"));

        verticalLayout_3->addWidget(widgetPageRangeSelector);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(ApplyToDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ApplyToDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ApplyToDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ApplyToDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ApplyToDialog);
    } // setupUi

    void retranslateUi(QDialog *ApplyToDialog)
    {
        (void)ApplyToDialog;
    } // retranslateUi

};

namespace Ui {
    class ApplyToDialog: public Ui_ApplyToDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYTODIALOG_H
