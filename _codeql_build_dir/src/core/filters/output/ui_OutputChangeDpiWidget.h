/********************************************************************************
** Form generated from reading UI file 'OutputChangeDpiWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTCHANGEDPIWIDGET_H
#define UI_OUTPUTCHANGEDPIWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetOutputChangeDpi
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *dpiGroup;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *dpiSelector;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *widgetOutputChangeDpi)
    {
        if (widgetOutputChangeDpi->objectName().isEmpty())
            widgetOutputChangeDpi->setObjectName(QString::fromUtf8("widgetOutputChangeDpi"));
        widgetOutputChangeDpi->resize(330, 138);
        widgetOutputChangeDpi->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(widgetOutputChangeDpi);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dpiGroup = new QGroupBox(widgetOutputChangeDpi);
        dpiGroup->setObjectName(QString::fromUtf8("dpiGroup"));
        horizontalLayout = new QHBoxLayout(dpiGroup);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        dpiSelector = new QComboBox(dpiGroup);
        dpiSelector->setObjectName(QString::fromUtf8("dpiSelector"));
        dpiSelector->setInsertPolicy(QComboBox::NoInsert);
        dpiSelector->setDuplicatesEnabled(true);

        horizontalLayout->addWidget(dpiSelector);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(dpiGroup);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(widgetOutputChangeDpi);

        QMetaObject::connectSlotsByName(widgetOutputChangeDpi);
    } // setupUi

    void retranslateUi(QWidget *widgetOutputChangeDpi)
    {
        dpiGroup->setTitle(QCoreApplication::translate("widgetOutputChangeDpi", "DPI", nullptr));
        (void)widgetOutputChangeDpi;
    } // retranslateUi

};

namespace Ui {
    class widgetOutputChangeDpi: public Ui_widgetOutputChangeDpi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTCHANGEDPIWIDGET_H
