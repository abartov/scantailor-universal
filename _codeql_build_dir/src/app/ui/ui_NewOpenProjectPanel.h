/********************************************************************************
** Form generated from reading UI file 'NewOpenProjectPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWOPENPROJECTPANEL_H
#define UI_NEWOPENPROJECTPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewOpenProjectPanel
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *newProjectLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *openProjectLabel;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *recentProjectsGroup;

    void setupUi(QWidget *NewOpenProjectPanel)
    {
        if (NewOpenProjectPanel->objectName().isEmpty())
            NewOpenProjectPanel->setObjectName(QString::fromUtf8("NewOpenProjectPanel"));
        NewOpenProjectPanel->resize(313, 97);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewOpenProjectPanel->sizePolicy().hasHeightForWidth());
        NewOpenProjectPanel->setSizePolicy(sizePolicy);
        NewOpenProjectPanel->setAutoFillBackground(false);
        verticalLayout_2 = new QVBoxLayout(NewOpenProjectPanel);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(7, 7, 7, 7);
        widget = new QWidget(NewOpenProjectPanel);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        newProjectLabel = new QLabel(widget);
        newProjectLabel->setObjectName(QString::fromUtf8("newProjectLabel"));
        newProjectLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(newProjectLabel);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        openProjectLabel = new QLabel(widget);
        openProjectLabel->setObjectName(QString::fromUtf8("openProjectLabel"));

        horizontalLayout->addWidget(openProjectLabel);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        recentProjectsGroup = new QGroupBox(widget);
        recentProjectsGroup->setObjectName(QString::fromUtf8("recentProjectsGroup"));

        verticalLayout->addWidget(recentProjectsGroup);


        verticalLayout_2->addWidget(widget);


        retranslateUi(NewOpenProjectPanel);

        QMetaObject::connectSlotsByName(NewOpenProjectPanel);
    } // setupUi

    void retranslateUi(QWidget *NewOpenProjectPanel)
    {
        NewOpenProjectPanel->setWindowTitle(QCoreApplication::translate("NewOpenProjectPanel", "Form", nullptr));
        newProjectLabel->setText(QCoreApplication::translate("NewOpenProjectPanel", "New Project...", nullptr));
        openProjectLabel->setText(QCoreApplication::translate("NewOpenProjectPanel", "Open Project...", nullptr));
        recentProjectsGroup->setTitle(QCoreApplication::translate("NewOpenProjectPanel", "Recent Projects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewOpenProjectPanel: public Ui_NewOpenProjectPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWOPENPROJECTPANEL_H
