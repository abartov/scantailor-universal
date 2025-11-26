/********************************************************************************
** Form generated from reading UI file 'StartBatchProcessingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTBATCHPROCESSINGDIALOG_H
#define UI_STARTBATCHPROCESSINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StartBatchProcessingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QRadioButton *allPages;
    QRadioButton *fromSelected;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *rememberChoice;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StartBatchProcessingDialog)
    {
        if (StartBatchProcessingDialog->objectName().isEmpty())
            StartBatchProcessingDialog->setObjectName(QString::fromUtf8("StartBatchProcessingDialog"));
        StartBatchProcessingDialog->resize(184, 149);
        verticalLayout = new QVBoxLayout(StartBatchProcessingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(StartBatchProcessingDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        allPages = new QRadioButton(StartBatchProcessingDialog);
        allPages->setObjectName(QString::fromUtf8("allPages"));
        allPages->setChecked(false);

        verticalLayout->addWidget(allPages);

        fromSelected = new QRadioButton(StartBatchProcessingDialog);
        fromSelected->setObjectName(QString::fromUtf8("fromSelected"));
        fromSelected->setChecked(true);

        verticalLayout->addWidget(fromSelected);

        line = new QFrame(StartBatchProcessingDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        rememberChoice = new QCheckBox(StartBatchProcessingDialog);
        rememberChoice->setObjectName(QString::fromUtf8("rememberChoice"));

        horizontalLayout->addWidget(rememberChoice);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(StartBatchProcessingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(StartBatchProcessingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StartBatchProcessingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StartBatchProcessingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StartBatchProcessingDialog);
    } // setupUi

    void retranslateUi(QDialog *StartBatchProcessingDialog)
    {
        StartBatchProcessingDialog->setWindowTitle(QCoreApplication::translate("StartBatchProcessingDialog", "Start batch processing", nullptr));
        label->setText(QCoreApplication::translate("StartBatchProcessingDialog", "Batch Process", nullptr));
        allPages->setText(QCoreApplication::translate("StartBatchProcessingDialog", "All pages", nullptr));
        fromSelected->setText(QCoreApplication::translate("StartBatchProcessingDialog", "Start from selected", nullptr));
        rememberChoice->setText(QCoreApplication::translate("StartBatchProcessingDialog", "Remember my choice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartBatchProcessingDialog: public Ui_StartBatchProcessingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTBATCHPROCESSINGDIALOG_H
