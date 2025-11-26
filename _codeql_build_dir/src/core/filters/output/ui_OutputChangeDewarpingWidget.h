/********************************************************************************
** Form generated from reading UI file 'OutputChangeDewarpingWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTCHANGEDEWARPINGWIDGET_H
#define UI_OUTPUTCHANGEDEWARPINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputChangeDewarpingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *dpiGroup;
    QGridLayout *gridLayout;
    QRadioButton *offRB;
    QRadioButton *autoRB;
    QRadioButton *manualRB;
    QRadioButton *marginalRB;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OutputChangeDewarpingWidget)
    {
        if (OutputChangeDewarpingWidget->objectName().isEmpty())
            OutputChangeDewarpingWidget->setObjectName(QString::fromUtf8("OutputChangeDewarpingWidget"));
        OutputChangeDewarpingWidget->resize(337, 223);
        verticalLayout = new QVBoxLayout(OutputChangeDewarpingWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dpiGroup = new QGroupBox(OutputChangeDewarpingWidget);
        dpiGroup->setObjectName(QString::fromUtf8("dpiGroup"));
        gridLayout = new QGridLayout(dpiGroup);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        offRB = new QRadioButton(dpiGroup);
        offRB->setObjectName(QString::fromUtf8("offRB"));
        offRB->setChecked(true);

        gridLayout->addWidget(offRB, 0, 0, 1, 1);

        autoRB = new QRadioButton(dpiGroup);
        autoRB->setObjectName(QString::fromUtf8("autoRB"));
        autoRB->setEnabled(true);

        gridLayout->addWidget(autoRB, 1, 0, 1, 1);

        manualRB = new QRadioButton(dpiGroup);
        manualRB->setObjectName(QString::fromUtf8("manualRB"));
        manualRB->setEnabled(true);

        gridLayout->addWidget(manualRB, 3, 0, 1, 1);

        marginalRB = new QRadioButton(dpiGroup);
        marginalRB->setObjectName(QString::fromUtf8("marginalRB"));
        marginalRB->setEnabled(true);

        gridLayout->addWidget(marginalRB, 2, 0, 1, 1);


        verticalLayout->addWidget(dpiGroup);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(OutputChangeDewarpingWidget);

        QMetaObject::connectSlotsByName(OutputChangeDewarpingWidget);
    } // setupUi

    void retranslateUi(QWidget *OutputChangeDewarpingWidget)
    {
        dpiGroup->setTitle(QCoreApplication::translate("OutputChangeDewarpingWidget", "Mode", nullptr));
        offRB->setText(QCoreApplication::translate("OutputChangeDewarpingWidget", "Off", nullptr));
        autoRB->setText(QCoreApplication::translate("OutputChangeDewarpingWidget", "Auto", nullptr));
        manualRB->setText(QCoreApplication::translate("OutputChangeDewarpingWidget", "Manual", nullptr));
        marginalRB->setText(QCoreApplication::translate("OutputChangeDewarpingWidget", "Marginal (experimental)", nullptr));
        (void)OutputChangeDewarpingWidget;
    } // retranslateUi

};

namespace Ui {
    class OutputChangeDewarpingWidget: public Ui_OutputChangeDewarpingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTCHANGEDEWARPINGWIDGET_H
