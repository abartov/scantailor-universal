/********************************************************************************
** Form generated from reading UI file 'alignmentwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNMENTWIDGET_H
#define UI_ALIGNMENTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "filters/page_layout/alignmentwidget.h"

QT_BEGIN_NAMESPACE

class Ui_AlignmentWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *alignWithOthersCB;
    QWidget *panelAlignment;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *alignmentLayout;
    QToolButton *alignTopLeftBtn;
    QToolButton *alignBottomBtn;
    QToolButton *alignTopBtn;
    QToolButton *alignRightBtn;
    QToolButton *alignCenterBtn;
    QToolButton *alignTopRightBtn;
    QToolButton *alignLeftBtn;
    QToolButton *alignBottomLeftBtn;
    QToolButton *alignBottomRightBtn;
    QSpacerItem *horizontalSpacer_5;
    QWidget *panelAdvancedAlignment;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_18;
    AlignmentComboBox *cbAutoMagnet;
    AlignmentComboBox *cbOriginalProp;
    QPushButton *btnResetAdvAlignment;
    QSpacerItem *horizontalSpacer_17;

    void setupUi(QWidget *AlignmentWidget)
    {
        if (AlignmentWidget->objectName().isEmpty())
            AlignmentWidget->setObjectName(QString::fromUtf8("AlignmentWidget"));
        AlignmentWidget->resize(244, 196);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AlignmentWidget->sizePolicy().hasHeightForWidth());
        AlignmentWidget->setSizePolicy(sizePolicy);
        AlignmentWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AlignmentWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 0, 0);
        alignWithOthersCB = new QCheckBox(AlignmentWidget);
        alignWithOthersCB->setObjectName(QString::fromUtf8("alignWithOthersCB"));
        alignWithOthersCB->setChecked(true);

        verticalLayout->addWidget(alignWithOthersCB);

        panelAlignment = new QWidget(AlignmentWidget);
        panelAlignment->setObjectName(QString::fromUtf8("panelAlignment"));
        horizontalLayout_4 = new QHBoxLayout(panelAlignment);
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(3, 3, 3, 3);
        horizontalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        alignmentLayout = new QGridLayout();
        alignmentLayout->setSpacing(16);
        alignmentLayout->setObjectName(QString::fromUtf8("alignmentLayout"));
        alignTopLeftBtn = new QToolButton(panelAlignment);
        alignTopLeftBtn->setObjectName(QString::fromUtf8("alignTopLeftBtn"));
        alignTopLeftBtn->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/stock-gravity-north-west-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignTopLeftBtn->setIcon(icon);
        alignTopLeftBtn->setIconSize(QSize(24, 24));
        alignTopLeftBtn->setCheckable(true);
        alignTopLeftBtn->setAutoExclusive(true);

        alignmentLayout->addWidget(alignTopLeftBtn, 0, 0, 1, 1);

        alignBottomBtn = new QToolButton(panelAlignment);
        alignBottomBtn->setObjectName(QString::fromUtf8("alignBottomBtn"));
        alignBottomBtn->setText(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/stock-gravity-south-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignBottomBtn->setIcon(icon1);
        alignBottomBtn->setIconSize(QSize(24, 24));
        alignBottomBtn->setCheckable(true);
        alignBottomBtn->setAutoExclusive(true);

        alignmentLayout->addWidget(alignBottomBtn, 2, 1, 1, 1);

        alignTopBtn = new QToolButton(panelAlignment);
        alignTopBtn->setObjectName(QString::fromUtf8("alignTopBtn"));
        alignTopBtn->setText(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/stock-gravity-north-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignTopBtn->setIcon(icon2);
        alignTopBtn->setIconSize(QSize(24, 24));
        alignTopBtn->setCheckable(true);
        alignTopBtn->setAutoExclusive(true);

        alignmentLayout->addWidget(alignTopBtn, 0, 1, 1, 1);

        alignRightBtn = new QToolButton(panelAlignment);
        alignRightBtn->setObjectName(QString::fromUtf8("alignRightBtn"));
        alignRightBtn->setText(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/stock-gravity-east-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignRightBtn->setIcon(icon3);
        alignRightBtn->setIconSize(QSize(24, 24));
        alignRightBtn->setCheckable(true);
        alignRightBtn->setAutoExclusive(true);

        alignmentLayout->addWidget(alignRightBtn, 1, 2, 1, 1);

        alignCenterBtn = new QToolButton(panelAlignment);
        alignCenterBtn->setObjectName(QString::fromUtf8("alignCenterBtn"));
        alignCenterBtn->setText(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/stock-gravity-center-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignCenterBtn->setIcon(icon4);
        alignCenterBtn->setIconSize(QSize(24, 24));
        alignCenterBtn->setCheckable(true);
        alignCenterBtn->setChecked(false);
        alignCenterBtn->setAutoExclusive(true);

        alignmentLayout->addWidget(alignCenterBtn, 1, 1, 1, 1);

        alignTopRightBtn = new QToolButton(panelAlignment);
        alignTopRightBtn->setObjectName(QString::fromUtf8("alignTopRightBtn"));
        alignTopRightBtn->setText(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/stock-gravity-north-east-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignTopRightBtn->setIcon(icon5);
        alignTopRightBtn->setIconSize(QSize(24, 24));
        alignTopRightBtn->setCheckable(true);
        alignTopRightBtn->setAutoExclusive(true);

        alignmentLayout->addWidget(alignTopRightBtn, 0, 2, 1, 1);

        alignLeftBtn = new QToolButton(panelAlignment);
        alignLeftBtn->setObjectName(QString::fromUtf8("alignLeftBtn"));
        alignLeftBtn->setText(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/stock-gravity-west-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignLeftBtn->setIcon(icon6);
        alignLeftBtn->setIconSize(QSize(24, 24));
        alignLeftBtn->setCheckable(true);
        alignLeftBtn->setAutoExclusive(true);

        alignmentLayout->addWidget(alignLeftBtn, 1, 0, 1, 1);

        alignBottomLeftBtn = new QToolButton(panelAlignment);
        alignBottomLeftBtn->setObjectName(QString::fromUtf8("alignBottomLeftBtn"));
        alignBottomLeftBtn->setText(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/stock-gravity-south-west-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignBottomLeftBtn->setIcon(icon7);
        alignBottomLeftBtn->setIconSize(QSize(24, 24));
        alignBottomLeftBtn->setCheckable(true);
        alignBottomLeftBtn->setAutoExclusive(true);

        alignmentLayout->addWidget(alignBottomLeftBtn, 2, 0, 1, 1);

        alignBottomRightBtn = new QToolButton(panelAlignment);
        alignBottomRightBtn->setObjectName(QString::fromUtf8("alignBottomRightBtn"));
        alignBottomRightBtn->setText(QString::fromUtf8(""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/stock-gravity-south-east-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignBottomRightBtn->setIcon(icon8);
        alignBottomRightBtn->setIconSize(QSize(24, 24));
        alignBottomRightBtn->setCheckable(true);
        alignBottomRightBtn->setAutoExclusive(true);

        alignmentLayout->addWidget(alignBottomRightBtn, 2, 2, 1, 1);


        horizontalLayout_4->addLayout(alignmentLayout);

        horizontalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(panelAlignment);

        panelAdvancedAlignment = new QWidget(AlignmentWidget);
        panelAdvancedAlignment->setObjectName(QString::fromUtf8("panelAdvancedAlignment"));
        horizontalLayout_8 = new QHBoxLayout(panelAdvancedAlignment);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 3, -1, 3);
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_18);

        cbAutoMagnet = new AlignmentComboBox(panelAdvancedAlignment);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/auto-magnet-none.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAutoMagnet->addItem(icon9, QString());
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/auto-magnet.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAutoMagnet->addItem(icon10, QString());
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/auto-magnet-ver.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAutoMagnet->addItem(icon11, QString());
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/auto-magnet-hor.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAutoMagnet->addItem(icon12, QString());
        cbAutoMagnet->setObjectName(QString::fromUtf8("cbAutoMagnet"));
        sizePolicy.setHeightForWidth(cbAutoMagnet->sizePolicy().hasHeightForWidth());
        cbAutoMagnet->setSizePolicy(sizePolicy);
        cbAutoMagnet->setMaximumSize(QSize(45, 16777215));
        cbAutoMagnet->setFocusPolicy(Qt::TabFocus);
        cbAutoMagnet->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_8->addWidget(cbAutoMagnet);

        cbOriginalProp = new AlignmentComboBox(panelAdvancedAlignment);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/gimp-center-none.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbOriginalProp->addItem(icon13, QString());
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/stock-center-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbOriginalProp->addItem(icon14, QString());
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/stock-center-24-ver.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbOriginalProp->addItem(icon15, QString());
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/stock-center-24-hor.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbOriginalProp->addItem(icon16, QString());
        cbOriginalProp->setObjectName(QString::fromUtf8("cbOriginalProp"));
        sizePolicy.setHeightForWidth(cbOriginalProp->sizePolicy().hasHeightForWidth());
        cbOriginalProp->setSizePolicy(sizePolicy);
        cbOriginalProp->setMaximumSize(QSize(45, 16777215));
        cbOriginalProp->setFocusPolicy(Qt::TabFocus);
        cbOriginalProp->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_8->addWidget(cbOriginalProp);

        btnResetAdvAlignment = new QPushButton(panelAdvancedAlignment);
        btnResetAdvAlignment->setObjectName(QString::fromUtf8("btnResetAdvAlignment"));
        btnResetAdvAlignment->setText(QString::fromUtf8(""));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/gimp-undo-history.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnResetAdvAlignment->setIcon(icon17);
        btnResetAdvAlignment->setCheckable(false);
        btnResetAdvAlignment->setChecked(false);
        btnResetAdvAlignment->setFlat(false);

        horizontalLayout_8->addWidget(btnResetAdvAlignment);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);


        verticalLayout->addWidget(panelAdvancedAlignment);


        retranslateUi(AlignmentWidget);

        QMetaObject::connectSlotsByName(AlignmentWidget);
    } // setupUi

    void retranslateUi(QWidget *AlignmentWidget)
    {
        alignWithOthersCB->setText(QCoreApplication::translate("AlignmentWidget", "Match size with other pages", nullptr));
        cbAutoMagnet->setItemText(0, QCoreApplication::translate("AlignmentWidget", "Disabled", nullptr));
        cbAutoMagnet->setItemText(1, QCoreApplication::translate("AlignmentWidget", "Auto-magnet both axes", nullptr));
        cbAutoMagnet->setItemText(2, QCoreApplication::translate("AlignmentWidget", "Auto-magnet vertically", nullptr));
        cbAutoMagnet->setItemText(3, QCoreApplication::translate("AlignmentWidget", "Auto-magnet horizontally", nullptr));

#if QT_CONFIG(tooltip)
        cbAutoMagnet->setToolTip(QCoreApplication::translate("AlignmentWidget", "<html><head/><body><p>Select alignment automatically</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbAutoMagnet->setStatusTip(QCoreApplication::translate("AlignmentWidget", "Automatically select alignment based on how close content to page borders", nullptr));
#endif // QT_CONFIG(statustip)
        cbOriginalProp->setItemText(0, QCoreApplication::translate("AlignmentWidget", "Disabled", nullptr));
        cbOriginalProp->setItemText(1, QCoreApplication::translate("AlignmentWidget", "Original proportions all axes", nullptr));
        cbOriginalProp->setItemText(2, QCoreApplication::translate("AlignmentWidget", "Original proportions vertically", nullptr));
        cbOriginalProp->setItemText(3, QCoreApplication::translate("AlignmentWidget", "Original proportions horizontally", nullptr));

#if QT_CONFIG(tooltip)
        cbOriginalProp->setToolTip(QCoreApplication::translate("AlignmentWidget", "Place proportionally to position on original scan", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbOriginalProp->setStatusTip(QCoreApplication::translate("AlignmentWidget", "Place proportionally to position on original scan", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        btnResetAdvAlignment->setToolTip(QCoreApplication::translate("AlignmentWidget", "Reset advanced alignment", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        btnResetAdvAlignment->setStatusTip(QCoreApplication::translate("AlignmentWidget", "Reset advanced alignment options", nullptr));
#endif // QT_CONFIG(statustip)
        (void)AlignmentWidget;
    } // retranslateUi

};

namespace Ui {
    class AlignmentWidget: public Ui_AlignmentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNMENTWIDGET_H
