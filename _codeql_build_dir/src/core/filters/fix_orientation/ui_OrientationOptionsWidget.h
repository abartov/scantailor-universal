/********************************************************************************
** Form generated from reading UI file 'OrientationOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIENTATIONOPTIONSWIDGET_H
#define UI_ORIENTATIONOPTIONSWIDGET_H

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

class Ui_OrientationOptionsWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QToolButton *rotateLeftBtn;
    QToolButton *rotateRightBtn;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QLabel *rotationIndicator;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem4;
    QPushButton *resetBtn;
    QSpacerItem *spacerItem5;
    QGroupBox *scopeBox;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem6;
    QPushButton *applyToBtn;
    QSpacerItem *spacerItem7;
    QSpacerItem *spacerItem8;

    void setupUi(QWidget *OrientationOptionsWidget)
    {
        if (OrientationOptionsWidget->objectName().isEmpty())
            OrientationOptionsWidget->setObjectName(QString::fromUtf8("OrientationOptionsWidget"));
        OrientationOptionsWidget->resize(224, 272);
        OrientationOptionsWidget->setWindowTitle(QString::fromUtf8("Form"));
        vboxLayout = new QVBoxLayout(OrientationOptionsWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(OrientationOptionsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        rotateLeftBtn = new QToolButton(groupBox);
        rotateLeftBtn->setObjectName(QString::fromUtf8("rotateLeftBtn"));
        rotateLeftBtn->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/object-rotate-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        rotateLeftBtn->setIcon(icon);
        rotateLeftBtn->setIconSize(QSize(24, 24));

        hboxLayout->addWidget(rotateLeftBtn);

        rotateRightBtn = new QToolButton(groupBox);
        rotateRightBtn->setObjectName(QString::fromUtf8("rotateRightBtn"));
        rotateRightBtn->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/object-rotate-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        rotateRightBtn->setIcon(icon1);
        rotateRightBtn->setIconSize(QSize(24, 24));

        hboxLayout->addWidget(rotateRightBtn);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        rotationIndicator = new QLabel(groupBox);
        rotationIndicator->setObjectName(QString::fromUtf8("rotationIndicator"));
        rotationIndicator->setPixmap(QPixmap(QString::fromUtf8(":/icons/big-up-arrow.png")));

        hboxLayout1->addWidget(rotationIndicator);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem4);

        resetBtn = new QPushButton(groupBox);
        resetBtn->setObjectName(QString::fromUtf8("resetBtn"));

        hboxLayout2->addWidget(resetBtn);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem5);


        vboxLayout1->addLayout(hboxLayout2);


        vboxLayout->addWidget(groupBox);

        scopeBox = new QGroupBox(OrientationOptionsWidget);
        scopeBox->setObjectName(QString::fromUtf8("scopeBox"));
        vboxLayout2 = new QVBoxLayout(scopeBox);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem6);

        applyToBtn = new QPushButton(scopeBox);
        applyToBtn->setObjectName(QString::fromUtf8("applyToBtn"));

        hboxLayout3->addWidget(applyToBtn);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem7);


        vboxLayout2->addLayout(hboxLayout3);


        vboxLayout->addWidget(scopeBox);

        spacerItem8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem8);


        retranslateUi(OrientationOptionsWidget);

        QMetaObject::connectSlotsByName(OrientationOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *OrientationOptionsWidget)
    {
        groupBox->setTitle(QCoreApplication::translate("OrientationOptionsWidget", "Rotate", nullptr));
        rotationIndicator->setText(QString());
        resetBtn->setText(QCoreApplication::translate("OrientationOptionsWidget", "Reset", nullptr));
        scopeBox->setTitle(QCoreApplication::translate("OrientationOptionsWidget", "Scope", nullptr));
        applyToBtn->setText(QCoreApplication::translate("OrientationOptionsWidget", "Apply to...", nullptr));
        (void)OrientationOptionsWidget;
    } // retranslateUi

};

namespace Ui {
    class OrientationOptionsWidget: public Ui_OrientationOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIENTATIONOPTIONSWIDGET_H
