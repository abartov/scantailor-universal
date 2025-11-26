/********************************************************************************
** Form generated from reading UI file 'PageSplitOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESPLITOPTIONSWIDGET_H
#define UI_PAGESPLITOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageSplitOptionsWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *singlePageUncutBtn;
    QToolButton *pagePlusOffcutBtn;
    QToolButton *twoPagesBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *scopeLabel;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *changeBtn;
    QSpacerItem *spacerItem1;
    QGroupBox *splitLineGroup;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *autoBtn;
    QPushButton *manualBtn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PageSplitOptionsWidget)
    {
        if (PageSplitOptionsWidget->objectName().isEmpty())
            PageSplitOptionsWidget->setObjectName(QString::fromUtf8("PageSplitOptionsWidget"));
        PageSplitOptionsWidget->resize(238, 270);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PageSplitOptionsWidget->sizePolicy().hasHeightForWidth());
        PageSplitOptionsWidget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(PageSplitOptionsWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(PageSplitOptionsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        singlePageUncutBtn = new QToolButton(groupBox);
        singlePageUncutBtn->setObjectName(QString::fromUtf8("singlePageUncutBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/single_page_uncut.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icons/single_page_uncut_selected.png"), QSize(), QIcon::Normal, QIcon::On);
        singlePageUncutBtn->setIcon(icon);
        singlePageUncutBtn->setIconSize(QSize(32, 32));
        singlePageUncutBtn->setCheckable(true);
        singlePageUncutBtn->setChecked(false);
        singlePageUncutBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(singlePageUncutBtn);

        pagePlusOffcutBtn = new QToolButton(groupBox);
        pagePlusOffcutBtn->setObjectName(QString::fromUtf8("pagePlusOffcutBtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/right_page_plus_offcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icons/right_page_plus_offcut_selected.png"), QSize(), QIcon::Normal, QIcon::On);
        pagePlusOffcutBtn->setIcon(icon1);
        pagePlusOffcutBtn->setIconSize(QSize(32, 32));
        pagePlusOffcutBtn->setCheckable(true);
        pagePlusOffcutBtn->setChecked(false);
        pagePlusOffcutBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(pagePlusOffcutBtn);

        twoPagesBtn = new QToolButton(groupBox);
        twoPagesBtn->setObjectName(QString::fromUtf8("twoPagesBtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/two_pages.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/icons/two_pages_selected.png"), QSize(), QIcon::Normal, QIcon::On);
        twoPagesBtn->setIcon(icon2);
        twoPagesBtn->setIconSize(QSize(32, 32));
        twoPagesBtn->setCheckable(true);
        twoPagesBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(twoPagesBtn);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        scopeLabel = new QLabel(groupBox);
        scopeLabel->setObjectName(QString::fromUtf8("scopeLabel"));
        scopeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(scopeLabel);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        changeBtn = new QPushButton(groupBox);
        changeBtn->setObjectName(QString::fromUtf8("changeBtn"));

        hboxLayout->addWidget(changeBtn);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        verticalLayout->addLayout(hboxLayout);


        verticalLayout_3->addWidget(groupBox);

        splitLineGroup = new QGroupBox(PageSplitOptionsWidget);
        splitLineGroup->setObjectName(QString::fromUtf8("splitLineGroup"));
        verticalLayout_2 = new QVBoxLayout(splitLineGroup);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        autoBtn = new QPushButton(splitLineGroup);
        autoBtn->setObjectName(QString::fromUtf8("autoBtn"));
        autoBtn->setCheckable(true);
        autoBtn->setChecked(true);
        autoBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(autoBtn);

        manualBtn = new QPushButton(splitLineGroup);
        manualBtn->setObjectName(QString::fromUtf8("manualBtn"));
        manualBtn->setCheckable(true);
        manualBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(manualBtn);

        horizontalSpacer_4 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(splitLineGroup);

        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(PageSplitOptionsWidget);

        QMetaObject::connectSlotsByName(PageSplitOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *PageSplitOptionsWidget)
    {
        PageSplitOptionsWidget->setWindowTitle(QCoreApplication::translate("PageSplitOptionsWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PageSplitOptionsWidget", "Page Layout on image", nullptr));
        scopeLabel->setText(QCoreApplication::translate("PageSplitOptionsWidget", "?", nullptr));
        changeBtn->setText(QCoreApplication::translate("PageSplitOptionsWidget", "Change...", nullptr));
        splitLineGroup->setTitle(QCoreApplication::translate("PageSplitOptionsWidget", "Split Line", nullptr));
        autoBtn->setText(QCoreApplication::translate("PageSplitOptionsWidget", "Auto", nullptr));
        manualBtn->setText(QCoreApplication::translate("PageSplitOptionsWidget", "Manual", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSplitOptionsWidget: public Ui_PageSplitOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESPLITOPTIONSWIDGET_H
