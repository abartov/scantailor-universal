/********************************************************************************
** Form generated from reading UI file 'PageLayoutApplyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGELAYOUTAPPLYWIDGET_H
#define UI_PAGELAYOUTAPPLYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageLayoutApplyWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxWhatToAppy;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *marginValuesRB;
    QRadioButton *autoMarginRB;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PageLayoutApplyWidget)
    {
        if (PageLayoutApplyWidget->objectName().isEmpty())
            PageLayoutApplyWidget->setObjectName(QString::fromUtf8("PageLayoutApplyWidget"));
        PageLayoutApplyWidget->setWindowModality(Qt::WindowModal);
        PageLayoutApplyWidget->resize(227, 102);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PageLayoutApplyWidget->sizePolicy().hasHeightForWidth());
        PageLayoutApplyWidget->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(PageLayoutApplyWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(3, 3, 3, 3);
        groupBoxWhatToAppy = new QGroupBox(PageLayoutApplyWidget);
        groupBoxWhatToAppy->setObjectName(QString::fromUtf8("groupBoxWhatToAppy"));
        verticalLayout_6 = new QVBoxLayout(groupBoxWhatToAppy);
        verticalLayout_6->setSpacing(3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(3, 3, 3, 3);
        marginValuesRB = new QRadioButton(groupBoxWhatToAppy);
        marginValuesRB->setObjectName(QString::fromUtf8("marginValuesRB"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(marginValuesRB->sizePolicy().hasHeightForWidth());
        marginValuesRB->setSizePolicy(sizePolicy1);
        marginValuesRB->setChecked(true);

        verticalLayout_6->addWidget(marginValuesRB);

        autoMarginRB = new QRadioButton(groupBoxWhatToAppy);
        autoMarginRB->setObjectName(QString::fromUtf8("autoMarginRB"));
        sizePolicy1.setHeightForWidth(autoMarginRB->sizePolicy().hasHeightForWidth());
        autoMarginRB->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(autoMarginRB);


        verticalLayout_5->addWidget(groupBoxWhatToAppy);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        retranslateUi(PageLayoutApplyWidget);

        QMetaObject::connectSlotsByName(PageLayoutApplyWidget);
    } // setupUi

    void retranslateUi(QWidget *PageLayoutApplyWidget)
    {
        groupBoxWhatToAppy->setTitle(QCoreApplication::translate("PageLayoutApplyWidget", "Apply what", nullptr));
        marginValuesRB->setText(QCoreApplication::translate("PageLayoutApplyWidget", "Margin values", nullptr));
        autoMarginRB->setText(QCoreApplication::translate("PageLayoutApplyWidget", "Auto Margin setting state", nullptr));
        (void)PageLayoutApplyWidget;
    } // retranslateUi

};

namespace Ui {
    class PageLayoutApplyWidget: public Ui_PageLayoutApplyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGELAYOUTAPPLYWIDGET_H
