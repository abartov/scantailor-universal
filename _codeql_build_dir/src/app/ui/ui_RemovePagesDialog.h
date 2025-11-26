/********************************************************************************
** Form generated from reading UI file 'RemovePagesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEPAGESDIALOG_H
#define UI_REMOVEPAGESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemovePagesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *icon;
    QSpacerItem *horizontalSpacer;
    QLabel *text;
    QLabel *multiPageWarning;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cbRemoveInputFiles;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemovePagesDialog)
    {
        if (RemovePagesDialog->objectName().isEmpty())
            RemovePagesDialog->setObjectName(QString::fromUtf8("RemovePagesDialog"));
        RemovePagesDialog->resize(417, 111);
        verticalLayout = new QVBoxLayout(RemovePagesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        icon = new QLabel(RemovePagesDialog);
        icon->setObjectName(QString::fromUtf8("icon"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setText(QString::fromUtf8("ICON"));

        horizontalLayout->addWidget(icon);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        text = new QLabel(RemovePagesDialog);
        text->setObjectName(QString::fromUtf8("text"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text->sizePolicy().hasHeightForWidth());
        text->setSizePolicy(sizePolicy1);
        text->setText(QString::fromUtf8("Remove %n page(s) from project?"));
        text->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(text);


        verticalLayout->addLayout(horizontalLayout);

        multiPageWarning = new QLabel(RemovePagesDialog);
        multiPageWarning->setObjectName(QString::fromUtf8("multiPageWarning"));
        multiPageWarning->setEnabled(true);
        multiPageWarning->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        multiPageWarning->setWordWrap(true);

        verticalLayout->addWidget(multiPageWarning);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        cbRemoveInputFiles = new QCheckBox(RemovePagesDialog);
        cbRemoveInputFiles->setObjectName(QString::fromUtf8("cbRemoveInputFiles"));

        horizontalLayout_2->addWidget(cbRemoveInputFiles);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(RemovePagesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RemovePagesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemovePagesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemovePagesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RemovePagesDialog);
    } // setupUi

    void retranslateUi(QDialog *RemovePagesDialog)
    {
        RemovePagesDialog->setWindowTitle(QCoreApplication::translate("RemovePagesDialog", "Remove Pages", nullptr));
        multiPageWarning->setText(QCoreApplication::translate("RemovePagesDialog", "Corresponding output files will be deleted, while input files will remain.", nullptr));
        cbRemoveInputFiles->setText(QCoreApplication::translate("RemovePagesDialog", "Additionally remove input files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemovePagesDialog: public Ui_RemovePagesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEPAGESDIALOG_H
