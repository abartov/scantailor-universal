/********************************************************************************
** Form generated from reading UI file 'SelectContentOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCONTENTOPTIONSWIDGET_H
#define UI_SELECTCONTENTOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectContentOptionsWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *gbPageBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pageDetectDisableBtn;
    QPushButton *pageDetectAutoBtn;
    QWidget *panelFineTuneCorners;
    QVBoxLayout *verticalLayout;
    QCheckBox *fineTuneBtn;
    QGroupBox *gbBordersPanel;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *leftBorder;
    QLabel *label_2;
    QDoubleSpinBox *topBorder;
    QLabel *label_3;
    QDoubleSpinBox *rightBorder;
    QLabel *label_4;
    QDoubleSpinBox *bottomBorder;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *disableBtn;
    QPushButton *autoBtn;
    QPushButton *manualBtn;
    QSpacerItem *spacerItem1;
    QGroupBox *scopeBox;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *applyToBtn;
    QSpacerItem *spacerItem3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SelectContentOptionsWidget)
    {
        if (SelectContentOptionsWidget->objectName().isEmpty())
            SelectContentOptionsWidget->setObjectName(QString::fromUtf8("SelectContentOptionsWidget"));
        SelectContentOptionsWidget->resize(306, 470);
        SelectContentOptionsWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_4 = new QVBoxLayout(SelectContentOptionsWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gbPageBox = new QGroupBox(SelectContentOptionsWidget);
        gbPageBox->setObjectName(QString::fromUtf8("gbPageBox"));
        verticalLayout_3 = new QVBoxLayout(gbPageBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pageDetectDisableBtn = new QPushButton(gbPageBox);
        pageDetectDisableBtn->setObjectName(QString::fromUtf8("pageDetectDisableBtn"));
        pageDetectDisableBtn->setCheckable(true);
        pageDetectDisableBtn->setChecked(true);
        pageDetectDisableBtn->setAutoExclusive(true);

        horizontalLayout_2->addWidget(pageDetectDisableBtn);

        pageDetectAutoBtn = new QPushButton(gbPageBox);
        pageDetectAutoBtn->setObjectName(QString::fromUtf8("pageDetectAutoBtn"));
        pageDetectAutoBtn->setCheckable(true);
        pageDetectAutoBtn->setAutoExclusive(true);

        horizontalLayout_2->addWidget(pageDetectAutoBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        panelFineTuneCorners = new QWidget(gbPageBox);
        panelFineTuneCorners->setObjectName(QString::fromUtf8("panelFineTuneCorners"));
        verticalLayout = new QVBoxLayout(panelFineTuneCorners);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fineTuneBtn = new QCheckBox(panelFineTuneCorners);
        fineTuneBtn->setObjectName(QString::fromUtf8("fineTuneBtn"));

        verticalLayout->addWidget(fineTuneBtn);


        verticalLayout_3->addWidget(panelFineTuneCorners);

        gbBordersPanel = new QGroupBox(gbPageBox);
        gbBordersPanel->setObjectName(QString::fromUtf8("gbBordersPanel"));
        verticalLayout_2 = new QVBoxLayout(gbBordersPanel);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(gbBordersPanel);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leftBorder = new QDoubleSpinBox(gbBordersPanel);
        leftBorder->setObjectName(QString::fromUtf8("leftBorder"));

        gridLayout->addWidget(leftBorder, 0, 1, 1, 1);

        label_2 = new QLabel(gbBordersPanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        topBorder = new QDoubleSpinBox(gbBordersPanel);
        topBorder->setObjectName(QString::fromUtf8("topBorder"));

        gridLayout->addWidget(topBorder, 1, 1, 1, 1);

        label_3 = new QLabel(gbBordersPanel);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        rightBorder = new QDoubleSpinBox(gbBordersPanel);
        rightBorder->setObjectName(QString::fromUtf8("rightBorder"));

        gridLayout->addWidget(rightBorder, 2, 1, 1, 1);

        label_4 = new QLabel(gbBordersPanel);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        bottomBorder = new QDoubleSpinBox(gbBordersPanel);
        bottomBorder->setObjectName(QString::fromUtf8("bottomBorder"));

        gridLayout->addWidget(bottomBorder, 3, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(gbBordersPanel);


        verticalLayout_4->addWidget(gbPageBox);

        groupBox = new QGroupBox(SelectContentOptionsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        disableBtn = new QPushButton(groupBox);
        disableBtn->setObjectName(QString::fromUtf8("disableBtn"));
        disableBtn->setCheckable(true);
        disableBtn->setAutoExclusive(true);

        hboxLayout->addWidget(disableBtn);

        autoBtn = new QPushButton(groupBox);
        autoBtn->setObjectName(QString::fromUtf8("autoBtn"));
        autoBtn->setCheckable(true);
        autoBtn->setChecked(true);
        autoBtn->setAutoExclusive(true);

        hboxLayout->addWidget(autoBtn);

        manualBtn = new QPushButton(groupBox);
        manualBtn->setObjectName(QString::fromUtf8("manualBtn"));
        manualBtn->setCheckable(true);
        manualBtn->setAutoExclusive(true);

        hboxLayout->addWidget(manualBtn);

        spacerItem1 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        verticalLayout_4->addWidget(groupBox);

        scopeBox = new QGroupBox(SelectContentOptionsWidget);
        scopeBox->setObjectName(QString::fromUtf8("scopeBox"));
        vboxLayout = new QVBoxLayout(scopeBox);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        applyToBtn = new QPushButton(scopeBox);
        applyToBtn->setObjectName(QString::fromUtf8("applyToBtn"));

        hboxLayout1->addWidget(applyToBtn);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        vboxLayout->addLayout(hboxLayout1);


        verticalLayout_4->addWidget(scopeBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        retranslateUi(SelectContentOptionsWidget);

        QMetaObject::connectSlotsByName(SelectContentOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectContentOptionsWidget)
    {
        gbPageBox->setTitle(QCoreApplication::translate("SelectContentOptionsWidget", "Page Box", nullptr));
        pageDetectDisableBtn->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Disable", nullptr));
        pageDetectAutoBtn->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Auto", nullptr));
#if QT_CONFIG(tooltip)
        fineTuneBtn->setToolTip(QCoreApplication::translate("SelectContentOptionsWidget", "Shift with corners while they are in black. ", nullptr));
#endif // QT_CONFIG(tooltip)
        fineTuneBtn->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Fine Tune Page Corners", nullptr));
        gbBordersPanel->setTitle(QCoreApplication::translate("SelectContentOptionsWidget", "Borders in MM", nullptr));
        label->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Left", nullptr));
        label_2->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Top", nullptr));
        label_3->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Right", nullptr));
        label_4->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Bottom", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SelectContentOptionsWidget", "Content Box", nullptr));
        disableBtn->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Disable", nullptr));
        autoBtn->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Auto", nullptr));
        manualBtn->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Manual", nullptr));
        scopeBox->setTitle(QCoreApplication::translate("SelectContentOptionsWidget", "Scope", nullptr));
        applyToBtn->setText(QCoreApplication::translate("SelectContentOptionsWidget", "Apply to...", nullptr));
        (void)SelectContentOptionsWidget;
    } // retranslateUi

};

namespace Ui {
    class SelectContentOptionsWidget: public Ui_SelectContentOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCONTENTOPTIONSWIDGET_H
