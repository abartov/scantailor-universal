/********************************************************************************
** Form generated from reading UI file 'PageRangeSelectorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGERANGESELECTORWIDGET_H
#define UI_PAGERANGESELECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageRangeSelectorWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *lblAffectedRange;
    QSpacerItem *horizontalSpacer;
    QLabel *lblAffectedPagesCnt;
    QFrame *pnlRenge;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbSelected;
    QRadioButton *rbAll;
    QRadioButton *rbAllAfter;
    QRadioButton *rbAllBefore;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblExcludedPages;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblExcludedPagesCnt;
    QFrame *pnlExcluded;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbEven;
    QCheckBox *cbOdd;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblCurrentIsEvenOrOdd;
    QCheckBox *cbSingle;
    QCheckBox *cbLeft;
    QCheckBox *cbRight;
    QSpacerItem *spacer;

    void setupUi(QWidget *PageRangeSelectorWidget)
    {
        if (PageRangeSelectorWidget->objectName().isEmpty())
            PageRangeSelectorWidget->setObjectName(QString::fromUtf8("PageRangeSelectorWidget"));
        PageRangeSelectorWidget->resize(374, 320);
        PageRangeSelectorWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_3 = new QVBoxLayout(PageRangeSelectorWidget);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblAffectedRange = new QLabel(PageRangeSelectorWidget);
        lblAffectedRange->setObjectName(QString::fromUtf8("lblAffectedRange"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblAffectedRange->sizePolicy().hasHeightForWidth());
        lblAffectedRange->setSizePolicy(sizePolicy);
        lblAffectedRange->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(lblAffectedRange);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblAffectedPagesCnt = new QLabel(PageRangeSelectorWidget);
        lblAffectedPagesCnt->setObjectName(QString::fromUtf8("lblAffectedPagesCnt"));
        sizePolicy.setHeightForWidth(lblAffectedPagesCnt->sizePolicy().hasHeightForWidth());
        lblAffectedPagesCnt->setSizePolicy(sizePolicy);
        lblAffectedPagesCnt->setText(QString::fromUtf8("%1 pages"));
        lblAffectedPagesCnt->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(lblAffectedPagesCnt);


        verticalLayout_3->addLayout(horizontalLayout);

        pnlRenge = new QFrame(PageRangeSelectorWidget);
        pnlRenge->setObjectName(QString::fromUtf8("pnlRenge"));
        pnlRenge->setFrameShape(QFrame::StyledPanel);
        pnlRenge->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(pnlRenge);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        rbSelected = new QRadioButton(pnlRenge);
        rbSelected->setObjectName(QString::fromUtf8("rbSelected"));
        rbSelected->setText(QString::fromUtf8("Selected (%1 pages)"));

        verticalLayout->addWidget(rbSelected);

        rbAll = new QRadioButton(pnlRenge);
        rbAll->setObjectName(QString::fromUtf8("rbAll"));

        verticalLayout->addWidget(rbAll);

        rbAllAfter = new QRadioButton(pnlRenge);
        rbAllAfter->setObjectName(QString::fromUtf8("rbAllAfter"));

        verticalLayout->addWidget(rbAllAfter);

        rbAllBefore = new QRadioButton(pnlRenge);
        rbAllBefore->setObjectName(QString::fromUtf8("rbAllBefore"));

        verticalLayout->addWidget(rbAllBefore);


        verticalLayout_3->addWidget(pnlRenge);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblExcludedPages = new QLabel(PageRangeSelectorWidget);
        lblExcludedPages->setObjectName(QString::fromUtf8("lblExcludedPages"));
        sizePolicy.setHeightForWidth(lblExcludedPages->sizePolicy().hasHeightForWidth());
        lblExcludedPages->setSizePolicy(sizePolicy);
        lblExcludedPages->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_2->addWidget(lblExcludedPages);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lblExcludedPagesCnt = new QLabel(PageRangeSelectorWidget);
        lblExcludedPagesCnt->setObjectName(QString::fromUtf8("lblExcludedPagesCnt"));
        sizePolicy.setHeightForWidth(lblExcludedPagesCnt->sizePolicy().hasHeightForWidth());
        lblExcludedPagesCnt->setSizePolicy(sizePolicy);
        lblExcludedPagesCnt->setText(QString::fromUtf8("%1 pages"));
        lblExcludedPagesCnt->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_2->addWidget(lblExcludedPagesCnt);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pnlExcluded = new QFrame(PageRangeSelectorWidget);
        pnlExcluded->setObjectName(QString::fromUtf8("pnlExcluded"));
        pnlExcluded->setFrameShape(QFrame::StyledPanel);
        pnlExcluded->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(pnlExcluded);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        cbEven = new QCheckBox(pnlExcluded);
        cbEven->setObjectName(QString::fromUtf8("cbEven"));

        verticalLayout_2->addWidget(cbEven);

        cbOdd = new QCheckBox(pnlExcluded);
        cbOdd->setObjectName(QString::fromUtf8("cbOdd"));

        verticalLayout_2->addWidget(cbOdd);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        lblCurrentIsEvenOrOdd = new QLabel(pnlExcluded);
        lblCurrentIsEvenOrOdd->setObjectName(QString::fromUtf8("lblCurrentIsEvenOrOdd"));
        QFont font;
        font.setItalic(true);
        lblCurrentIsEvenOrOdd->setFont(font);
        lblCurrentIsEvenOrOdd->setText(QString::fromUtf8("(current page is even)"));

        horizontalLayout_5->addWidget(lblCurrentIsEvenOrOdd);


        verticalLayout_2->addLayout(horizontalLayout_5);

        cbSingle = new QCheckBox(pnlExcluded);
        cbSingle->setObjectName(QString::fromUtf8("cbSingle"));

        verticalLayout_2->addWidget(cbSingle);

        cbLeft = new QCheckBox(pnlExcluded);
        cbLeft->setObjectName(QString::fromUtf8("cbLeft"));

        verticalLayout_2->addWidget(cbLeft);

        cbRight = new QCheckBox(pnlExcluded);
        cbRight->setObjectName(QString::fromUtf8("cbRight"));

        verticalLayout_2->addWidget(cbRight);


        verticalLayout_3->addWidget(pnlExcluded);

        spacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(spacer);


        retranslateUi(PageRangeSelectorWidget);

        QMetaObject::connectSlotsByName(PageRangeSelectorWidget);
    } // setupUi

    void retranslateUi(QWidget *PageRangeSelectorWidget)
    {
        lblAffectedRange->setText(QCoreApplication::translate("PageRangeSelectorWidget", "Affected range:", nullptr));
        rbAll->setText(QCoreApplication::translate("PageRangeSelectorWidget", "All pages", nullptr));
        rbAllAfter->setText(QCoreApplication::translate("PageRangeSelectorWidget", "All pages after current one", nullptr));
        rbAllBefore->setText(QCoreApplication::translate("PageRangeSelectorWidget", "All pages before current one", nullptr));
        lblExcludedPages->setText(QCoreApplication::translate("PageRangeSelectorWidget", "Exclude from range:", nullptr));
        cbEven->setText(QCoreApplication::translate("PageRangeSelectorWidget", "Even pages", nullptr));
        cbOdd->setText(QCoreApplication::translate("PageRangeSelectorWidget", "Odd pages", nullptr));
        cbSingle->setText(QCoreApplication::translate("PageRangeSelectorWidget", "Single pages", nullptr));
        cbLeft->setText(QCoreApplication::translate("PageRangeSelectorWidget", "Left pages", nullptr));
        cbRight->setText(QCoreApplication::translate("PageRangeSelectorWidget", "Right pages", nullptr));
        (void)PageRangeSelectorWidget;
    } // retranslateUi

};

namespace Ui {
    class PageRangeSelectorWidget: public Ui_PageRangeSelectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGERANGESELECTORWIDGET_H
