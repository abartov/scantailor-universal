/********************************************************************************
** Form generated from reading UI file 'PageSplitModeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESPLITMODEWIDGET_H
#define UI_PAGESPLITMODEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageSplitModeApplyWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *spacerItem;
    QLabel *layoutTypeLabel;
    QSpacerItem *spacerItem1;
    QVBoxLayout *verticalLayout;
    QGroupBox *optionsBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *applyCutOption;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QRadioButton *modeAuto;
    QRadioButton *modeManual;
    QSpacerItem *spacer;

    void setupUi(QWidget *PageSplitModeApplyWidget)
    {
        if (PageSplitModeApplyWidget->objectName().isEmpty())
            PageSplitModeApplyWidget->setObjectName(QString::fromUtf8("PageSplitModeApplyWidget"));
        PageSplitModeApplyWidget->setWindowModality(Qt::WindowModal);
        PageSplitModeApplyWidget->resize(201, 253);
        PageSplitModeApplyWidget->setWindowTitle(QString::fromUtf8("Split Pages"));
        verticalLayout_2 = new QVBoxLayout(PageSplitModeApplyWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        layoutTypeLabel = new QLabel(PageSplitModeApplyWidget);
        layoutTypeLabel->setObjectName(QString::fromUtf8("layoutTypeLabel"));
        layoutTypeLabel->setFrameShape(QFrame::StyledPanel);
        layoutTypeLabel->setText(QString::fromUtf8(""));
        layoutTypeLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/layout_type_auto.png")));

        horizontalLayout->addWidget(layoutTypeLabel);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem1);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        optionsBox = new QGroupBox(PageSplitModeApplyWidget);
        optionsBox->setObjectName(QString::fromUtf8("optionsBox"));
        verticalLayout_3 = new QVBoxLayout(optionsBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        applyCutOption = new QCheckBox(optionsBox);
        applyCutOption->setObjectName(QString::fromUtf8("applyCutOption"));

        verticalLayout_3->addWidget(applyCutOption);


        verticalLayout->addWidget(optionsBox);

        groupBox = new QGroupBox(PageSplitModeApplyWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        modeAuto = new QRadioButton(groupBox);
        modeAuto->setObjectName(QString::fromUtf8("modeAuto"));
        modeAuto->setChecked(true);

        vboxLayout->addWidget(modeAuto);

        modeManual = new QRadioButton(groupBox);
        modeManual->setObjectName(QString::fromUtf8("modeManual"));

        vboxLayout->addWidget(modeManual);


        verticalLayout->addWidget(groupBox);


        verticalLayout_2->addLayout(verticalLayout);

        spacer = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacer);


        retranslateUi(PageSplitModeApplyWidget);

        QMetaObject::connectSlotsByName(PageSplitModeApplyWidget);
    } // setupUi

    void retranslateUi(QWidget *PageSplitModeApplyWidget)
    {
        optionsBox->setTitle(QCoreApplication::translate("PageSplitModeApplyWidget", "Options", nullptr));
        applyCutOption->setText(QCoreApplication::translate("PageSplitModeApplyWidget", "Apply cut", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PageSplitModeApplyWidget", "Mode", nullptr));
        modeAuto->setText(QCoreApplication::translate("PageSplitModeApplyWidget", "Auto", nullptr));
        modeManual->setText(QCoreApplication::translate("PageSplitModeApplyWidget", "Manual", nullptr));
        (void)PageSplitModeApplyWidget;
    } // retranslateUi

};

namespace Ui {
    class PageSplitModeApplyWidget: public Ui_PageSplitModeApplyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESPLITMODEWIDGET_H
