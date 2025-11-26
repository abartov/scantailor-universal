/********************************************************************************
** Form generated from reading UI file 'BatchProcessingLowerPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHPROCESSINGLOWERPANEL_H
#define UI_BATCHPROCESSINGLOWERPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "SystemLoadWidget.h"

QT_BEGIN_NAMESPACE

class Ui_BatchProcessingLowerPanel
{
public:
    QGridLayout *gridLayout;
    SystemLoadWidget *systemLoadWidget;
    QSpacerItem *horizontalSpacer;
    QCheckBox *beepWhenFinished;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *BatchProcessingLowerPanel)
    {
        if (BatchProcessingLowerPanel->objectName().isEmpty())
            BatchProcessingLowerPanel->setObjectName(QString::fromUtf8("BatchProcessingLowerPanel"));
        BatchProcessingLowerPanel->resize(259, 73);
        gridLayout = new QGridLayout(BatchProcessingLowerPanel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        systemLoadWidget = new SystemLoadWidget(BatchProcessingLowerPanel);
        systemLoadWidget->setObjectName(QString::fromUtf8("systemLoadWidget"));

        gridLayout->addWidget(systemLoadWidget, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(51, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        beepWhenFinished = new QCheckBox(BatchProcessingLowerPanel);
        beepWhenFinished->setObjectName(QString::fromUtf8("beepWhenFinished"));

        gridLayout->addWidget(beepWhenFinished, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        retranslateUi(BatchProcessingLowerPanel);

        QMetaObject::connectSlotsByName(BatchProcessingLowerPanel);
    } // setupUi

    void retranslateUi(QWidget *BatchProcessingLowerPanel)
    {
        BatchProcessingLowerPanel->setWindowTitle(QCoreApplication::translate("BatchProcessingLowerPanel", "Form", nullptr));
        beepWhenFinished->setText(QCoreApplication::translate("BatchProcessingLowerPanel", "Beep when finished", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BatchProcessingLowerPanel: public Ui_BatchProcessingLowerPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHPROCESSINGLOWERPANEL_H
