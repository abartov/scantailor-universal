/********************************************************************************
** Form generated from reading UI file 'PictureZonePropDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREZONEPROPDIALOG_H
#define UI_PICTUREZONEPROPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PictureZonePropDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QRadioButton *eraser3;
    QRadioButton *painter2;
    QRadioButton *eraser1;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PictureZonePropDialog)
    {
        if (PictureZonePropDialog->objectName().isEmpty())
            PictureZonePropDialog->setObjectName(QString::fromUtf8("PictureZonePropDialog"));
        PictureZonePropDialog->resize(366, 125);
        verticalLayout_3 = new QVBoxLayout(PictureZonePropDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        eraser3 = new QRadioButton(PictureZonePropDialog);
        eraser3->setObjectName(QString::fromUtf8("eraser3"));

        verticalLayout_3->addWidget(eraser3);

        painter2 = new QRadioButton(PictureZonePropDialog);
        painter2->setObjectName(QString::fromUtf8("painter2"));

        verticalLayout_3->addWidget(painter2);

        eraser1 = new QRadioButton(PictureZonePropDialog);
        eraser1->setObjectName(QString::fromUtf8("eraser1"));

        verticalLayout_3->addWidget(eraser1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PictureZonePropDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(PictureZonePropDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PictureZonePropDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PictureZonePropDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PictureZonePropDialog);
    } // setupUi

    void retranslateUi(QDialog *PictureZonePropDialog)
    {
        PictureZonePropDialog->setWindowTitle(QCoreApplication::translate("PictureZonePropDialog", "Zone Properties", nullptr));
        eraser3->setText(QCoreApplication::translate("PictureZonePropDialog", "Subtract from all layers", nullptr));
        painter2->setText(QCoreApplication::translate("PictureZonePropDialog", "Add to auto layer", nullptr));
        eraser1->setText(QCoreApplication::translate("PictureZonePropDialog", "Subtract from auto layer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PictureZonePropDialog: public Ui_PictureZonePropDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREZONEPROPDIALOG_H
