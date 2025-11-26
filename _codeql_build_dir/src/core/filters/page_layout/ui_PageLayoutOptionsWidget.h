/********************************************************************************
** Form generated from reading UI file 'PageLayoutOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGELAYOUTOPTIONSWIDGET_H
#define UI_PAGELAYOUTOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "filters/page_layout/alignmentwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PageLayoutOptionsWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *marginsGroup;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QComboBox *unitsComboBox;
    QSpacerItem *horizontalSpacer_2;
    QWidget *panelMarginsControls;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QToolButton *topBottomLink;
    QLabel *label_2;
    QDoubleSpinBox *bottomMarginSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *leftMarginSpinBox;
    QToolButton *leftRightLink;
    QLabel *label_4;
    QDoubleSpinBox *rightMarginSpinBox;
    QDoubleSpinBox *topMarginSpinBox;
    QSpacerItem *horizontalSpacer;
    QWidget *autoMarginsLayout_2;
    QHBoxLayout *autoMarginsLayout;
    QSpacerItem *horizontalSpacer_13;
    QCheckBox *autoMargins;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *applyMarginsBtn;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *alignmentGroup;
    QGridLayout *gridLayout_3;
    AlignmentWidget *widgetAlignment;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *applyAlignmentBtn;
    QSpacerItem *horizontalSpacer_12;
    QLabel *lblCurrentAlignment;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PageLayoutOptionsWidget)
    {
        if (PageLayoutOptionsWidget->objectName().isEmpty())
            PageLayoutOptionsWidget->setObjectName(QString::fromUtf8("PageLayoutOptionsWidget"));
        PageLayoutOptionsWidget->resize(254, 775);
        PageLayoutOptionsWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(PageLayoutOptionsWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        marginsGroup = new QGroupBox(PageLayoutOptionsWidget);
        marginsGroup->setObjectName(QString::fromUtf8("marginsGroup"));
        verticalLayout = new QVBoxLayout(marginsGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        unitsComboBox = new QComboBox(marginsGroup);
        unitsComboBox->addItem(QString());
        unitsComboBox->addItem(QString());
        unitsComboBox->setObjectName(QString::fromUtf8("unitsComboBox"));

        verticalLayout_3->addWidget(unitsComboBox);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        panelMarginsControls = new QWidget(marginsGroup);
        panelMarginsControls->setObjectName(QString::fromUtf8("panelMarginsControls"));
        horizontalLayout_2 = new QHBoxLayout(panelMarginsControls);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(panelMarginsControls);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        topBottomLink = new QToolButton(panelMarginsControls);
        topBottomLink->setObjectName(QString::fromUtf8("topBottomLink"));
        topBottomLink->setMinimumSize(QSize(24, 48));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/stock-vchain-broken-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icons/stock-vchain-24.png"), QSize(), QIcon::Normal, QIcon::On);
        topBottomLink->setIcon(icon);
        topBottomLink->setIconSize(QSize(9, 24));
        topBottomLink->setAutoRaise(true);

        gridLayout->addWidget(topBottomLink, 0, 2, 2, 1);

        label_2 = new QLabel(panelMarginsControls);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        bottomMarginSpinBox = new QDoubleSpinBox(panelMarginsControls);
        bottomMarginSpinBox->setObjectName(QString::fromUtf8("bottomMarginSpinBox"));
        bottomMarginSpinBox->setDecimals(1);
        bottomMarginSpinBox->setMaximum(999.000000000000000);

        gridLayout->addWidget(bottomMarginSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(panelMarginsControls);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        leftMarginSpinBox = new QDoubleSpinBox(panelMarginsControls);
        leftMarginSpinBox->setObjectName(QString::fromUtf8("leftMarginSpinBox"));
        leftMarginSpinBox->setDecimals(1);
        leftMarginSpinBox->setMaximum(999.000000000000000);

        gridLayout->addWidget(leftMarginSpinBox, 2, 1, 1, 1);

        leftRightLink = new QToolButton(panelMarginsControls);
        leftRightLink->setObjectName(QString::fromUtf8("leftRightLink"));
        leftRightLink->setMinimumSize(QSize(24, 48));
        leftRightLink->setIcon(icon);
        leftRightLink->setIconSize(QSize(9, 24));
        leftRightLink->setChecked(false);
        leftRightLink->setAutoRaise(true);

        gridLayout->addWidget(leftRightLink, 2, 2, 2, 1);

        label_4 = new QLabel(panelMarginsControls);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        rightMarginSpinBox = new QDoubleSpinBox(panelMarginsControls);
        rightMarginSpinBox->setObjectName(QString::fromUtf8("rightMarginSpinBox"));
        rightMarginSpinBox->setDecimals(1);
        rightMarginSpinBox->setMaximum(999.000000000000000);

        gridLayout->addWidget(rightMarginSpinBox, 3, 1, 1, 1);

        topMarginSpinBox = new QDoubleSpinBox(panelMarginsControls);
        topMarginSpinBox->setObjectName(QString::fromUtf8("topMarginSpinBox"));
        topMarginSpinBox->setDecimals(1);
        topMarginSpinBox->setMaximum(999.000000000000000);

        gridLayout->addWidget(topMarginSpinBox, 0, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(panelMarginsControls);

        autoMarginsLayout_2 = new QWidget(marginsGroup);
        autoMarginsLayout_2->setObjectName(QString::fromUtf8("autoMarginsLayout_2"));
        autoMarginsLayout = new QHBoxLayout(autoMarginsLayout_2);
        autoMarginsLayout->setSpacing(0);
        autoMarginsLayout->setObjectName(QString::fromUtf8("autoMarginsLayout"));
        autoMarginsLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        autoMarginsLayout->addItem(horizontalSpacer_13);

        autoMargins = new QCheckBox(autoMarginsLayout_2);
        autoMargins->setObjectName(QString::fromUtf8("autoMargins"));
        autoMargins->setChecked(false);

        autoMarginsLayout->addWidget(autoMargins);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        autoMarginsLayout->addItem(horizontalSpacer_14);


        verticalLayout->addWidget(autoMarginsLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(13, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        applyMarginsBtn = new QPushButton(marginsGroup);
        applyMarginsBtn->setObjectName(QString::fromUtf8("applyMarginsBtn"));

        horizontalLayout_5->addWidget(applyMarginsBtn);

        horizontalSpacer_10 = new QSpacerItem(13, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(marginsGroup);

        alignmentGroup = new QGroupBox(PageLayoutOptionsWidget);
        alignmentGroup->setObjectName(QString::fromUtf8("alignmentGroup"));
        gridLayout_3 = new QGridLayout(alignmentGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widgetAlignment = new AlignmentWidget(alignmentGroup);
        widgetAlignment->setObjectName(QString::fromUtf8("widgetAlignment"));

        gridLayout_3->addWidget(widgetAlignment, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        applyAlignmentBtn = new QPushButton(alignmentGroup);
        applyAlignmentBtn->setObjectName(QString::fromUtf8("applyAlignmentBtn"));

        horizontalLayout_6->addWidget(applyAlignmentBtn);

        horizontalSpacer_12 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        gridLayout_3->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        lblCurrentAlignment = new QLabel(alignmentGroup);
        lblCurrentAlignment->setObjectName(QString::fromUtf8("lblCurrentAlignment"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblCurrentAlignment->sizePolicy().hasHeightForWidth());
        lblCurrentAlignment->setSizePolicy(sizePolicy);
        lblCurrentAlignment->setMinimumSize(QSize(0, 60));
        lblCurrentAlignment->setMaximumSize(QSize(16777215, 16777215));
        lblCurrentAlignment->setFrameShape(QFrame::Panel);
        lblCurrentAlignment->setFrameShadow(QFrame::Sunken);
        lblCurrentAlignment->setText(QString::fromUtf8("Alignment: %1"));
        lblCurrentAlignment->setAlignment(Qt::AlignCenter);
        lblCurrentAlignment->setWordWrap(true);

        gridLayout_3->addWidget(lblCurrentAlignment, 4, 0, 4, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 8, 0, 1, 1);


        verticalLayout_2->addWidget(alignmentGroup);

        QWidget::setTabOrder(topBottomLink, topMarginSpinBox);
        QWidget::setTabOrder(topMarginSpinBox, bottomMarginSpinBox);
        QWidget::setTabOrder(bottomMarginSpinBox, leftRightLink);
        QWidget::setTabOrder(leftRightLink, leftMarginSpinBox);
        QWidget::setTabOrder(leftMarginSpinBox, rightMarginSpinBox);
        QWidget::setTabOrder(rightMarginSpinBox, applyMarginsBtn);
        QWidget::setTabOrder(applyMarginsBtn, applyAlignmentBtn);

        retranslateUi(PageLayoutOptionsWidget);

        QMetaObject::connectSlotsByName(PageLayoutOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *PageLayoutOptionsWidget)
    {
        marginsGroup->setTitle(QCoreApplication::translate("PageLayoutOptionsWidget", "Margins", nullptr));
        unitsComboBox->setItemText(0, QCoreApplication::translate("PageLayoutOptionsWidget", "Millimeters (mm)", nullptr));
        unitsComboBox->setItemText(1, QCoreApplication::translate("PageLayoutOptionsWidget", "Inches (in)", nullptr));

        label->setText(QCoreApplication::translate("PageLayoutOptionsWidget", "Top", nullptr));
        topBottomLink->setText(QCoreApplication::translate("PageLayoutOptionsWidget", "...", nullptr));
        label_2->setText(QCoreApplication::translate("PageLayoutOptionsWidget", "Bottom", nullptr));
        label_3->setText(QCoreApplication::translate("PageLayoutOptionsWidget", "Left", nullptr));
        leftRightLink->setText(QCoreApplication::translate("PageLayoutOptionsWidget", "...", nullptr));
        label_4->setText(QCoreApplication::translate("PageLayoutOptionsWidget", "Right", nullptr));
        autoMargins->setText(QCoreApplication::translate("PageLayoutOptionsWidget", "Auto Margins", nullptr));
        applyMarginsBtn->setText(QCoreApplication::translate("PageLayoutOptionsWidget", "Apply To...", nullptr));
        alignmentGroup->setTitle(QCoreApplication::translate("PageLayoutOptionsWidget", "Alignment", nullptr));
        applyAlignmentBtn->setText(QCoreApplication::translate("PageLayoutOptionsWidget", "Apply To...", nullptr));
#if QT_CONFIG(tooltip)
        lblCurrentAlignment->setToolTip(QCoreApplication::translate("PageLayoutOptionsWidget", "Currently selected content alignment", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)PageLayoutOptionsWidget;
    } // retranslateUi

};

namespace Ui {
    class PageLayoutOptionsWidget: public Ui_PageLayoutOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGELAYOUTOPTIONSWIDGET_H
