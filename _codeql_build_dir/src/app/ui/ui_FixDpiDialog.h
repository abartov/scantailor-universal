/********************************************************************************
** Form generated from reading UI file 'FixDpiDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIXDPIDIALOG_H
#define UI_FIXDPIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FixDpiDialog
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QTreeView *undefinedDpiView;
    QWidget *tab_2;
    QVBoxLayout *vboxLayout2;
    QTreeView *allPagesView;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QComboBox *dpiCombo;
    QLineEdit *xDpi;
    QLabel *label_3;
    QLineEdit *yDpi;
    QPushButton *applyBtn;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FixDpiDialog)
    {
        if (FixDpiDialog->objectName().isEmpty())
            FixDpiDialog->setObjectName(QString::fromUtf8("FixDpiDialog"));
        FixDpiDialog->resize(335, 354);
        vboxLayout = new QVBoxLayout(FixDpiDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(FixDpiDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        undefinedDpiView = new QTreeView(tab);
        undefinedDpiView->setObjectName(QString::fromUtf8("undefinedDpiView"));

        vboxLayout1->addWidget(undefinedDpiView);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString::fromUtf8("Tab 1"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        vboxLayout2 = new QVBoxLayout(tab_2);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        allPagesView = new QTreeView(tab_2);
        allPagesView->setObjectName(QString::fromUtf8("allPagesView"));

        vboxLayout2->addWidget(allPagesView);

        tabWidget->addTab(tab_2, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString::fromUtf8("Tab 2"));

        vboxLayout->addWidget(tabWidget);

        groupBox = new QGroupBox(FixDpiDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setTitle(QString::fromUtf8("DPI"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        dpiCombo = new QComboBox(groupBox);
        dpiCombo->addItem(QString());
        dpiCombo->setObjectName(QString::fromUtf8("dpiCombo"));
        dpiCombo->setEnabled(false);

        hboxLayout->addWidget(dpiCombo);

        xDpi = new QLineEdit(groupBox);
        xDpi->setObjectName(QString::fromUtf8("xDpi"));
        xDpi->setEnabled(false);
        xDpi->setMaximumSize(QSize(45, 16777215));

        hboxLayout->addWidget(xDpi);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout->addWidget(label_3);

        yDpi = new QLineEdit(groupBox);
        yDpi->setObjectName(QString::fromUtf8("yDpi"));
        yDpi->setEnabled(false);
        yDpi->setMaximumSize(QSize(45, 16777215));

        hboxLayout->addWidget(yDpi);

        applyBtn = new QPushButton(groupBox);
        applyBtn->setObjectName(QString::fromUtf8("applyBtn"));
        applyBtn->setEnabled(false);

        hboxLayout->addWidget(applyBtn);

        spacerItem1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addWidget(groupBox);

        spacerItem2 = new QSpacerItem(317, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        buttonBox = new QDialogButtonBox(FixDpiDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(FixDpiDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FixDpiDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FixDpiDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FixDpiDialog);
    } // setupUi

    void retranslateUi(QDialog *FixDpiDialog)
    {
        FixDpiDialog->setWindowTitle(QCoreApplication::translate("FixDpiDialog", "Fix DPI", nullptr));
        dpiCombo->setItemText(0, QCoreApplication::translate("FixDpiDialog", "Custom", nullptr));

        label_3->setText(QCoreApplication::translate("FixDpiDialog", "x", nullptr));
        applyBtn->setText(QCoreApplication::translate("FixDpiDialog", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FixDpiDialog: public Ui_FixDpiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIXDPIDIALOG_H
