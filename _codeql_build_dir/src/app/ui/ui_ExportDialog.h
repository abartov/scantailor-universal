/********************************************************************************
** Form generated from reading UI file 'ExportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOG_H
#define UI_EXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbDataToExport;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *cbExportImage;
    QCheckBox *cbExportForeground;
    QCheckBox *cbExportBackground;
    QCheckBox *cbExportAutomask;
    QCheckBox *cbExportMask;
    QCheckBox *cbExportZones;
    QCheckBox *DefaultOutputFolder;
    QGroupBox *groupBoxExport;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *outExportDirLine;
    QPushButton *outExportDirBrowseBtn;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cbExportSelected;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbMultipageOutput;
    QCheckBox *GenerateBlankBackSubscans;
    QCheckBox *UseSepSuffixForPics;
    QCheckBox *cbExportWithoutOutputStage;
    QCheckBox *KeepOriginalColorIllumForeSubscans;
    QSpacerItem *verticalSpacer;
    QProgressBar *progressBar;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnResetToDefault;
    QLabel *labelFilesProcessed;
    QPushButton *ExportButton;
    QPushButton *OkButton;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName(QString::fromUtf8("ExportDialog"));
        ExportDialog->resize(478, 509);
        verticalLayout_3 = new QVBoxLayout(ExportDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(ExportDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gbDataToExport = new QGroupBox(tab);
        gbDataToExport->setObjectName(QString::fromUtf8("gbDataToExport"));
        gbDataToExport->setCheckable(false);
        gbDataToExport->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(gbDataToExport);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        cbExportImage = new QCheckBox(gbDataToExport);
        cbExportImage->setObjectName(QString::fromUtf8("cbExportImage"));

        verticalLayout_5->addWidget(cbExportImage);

        cbExportForeground = new QCheckBox(gbDataToExport);
        cbExportForeground->setObjectName(QString::fromUtf8("cbExportForeground"));
        cbExportForeground->setChecked(true);

        verticalLayout_5->addWidget(cbExportForeground);

        cbExportBackground = new QCheckBox(gbDataToExport);
        cbExportBackground->setObjectName(QString::fromUtf8("cbExportBackground"));
        cbExportBackground->setChecked(true);

        verticalLayout_5->addWidget(cbExportBackground);

        cbExportAutomask = new QCheckBox(gbDataToExport);
        cbExportAutomask->setObjectName(QString::fromUtf8("cbExportAutomask"));

        verticalLayout_5->addWidget(cbExportAutomask);

        cbExportMask = new QCheckBox(gbDataToExport);
        cbExportMask->setObjectName(QString::fromUtf8("cbExportMask"));

        verticalLayout_5->addWidget(cbExportMask);

        cbExportZones = new QCheckBox(gbDataToExport);
        cbExportZones->setObjectName(QString::fromUtf8("cbExportZones"));

        verticalLayout_5->addWidget(cbExportZones);


        verticalLayout_2->addWidget(gbDataToExport);

        DefaultOutputFolder = new QCheckBox(tab);
        DefaultOutputFolder->setObjectName(QString::fromUtf8("DefaultOutputFolder"));

        verticalLayout_2->addWidget(DefaultOutputFolder);

        groupBoxExport = new QGroupBox(tab);
        groupBoxExport->setObjectName(QString::fromUtf8("groupBoxExport"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxExport->sizePolicy().hasHeightForWidth());
        groupBoxExport->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(groupBoxExport);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        outExportDirLine = new QLineEdit(groupBoxExport);
        outExportDirLine->setObjectName(QString::fromUtf8("outExportDirLine"));
        outExportDirLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(outExportDirLine);

        outExportDirBrowseBtn = new QPushButton(groupBoxExport);
        outExportDirBrowseBtn->setObjectName(QString::fromUtf8("outExportDirBrowseBtn"));

        horizontalLayout_2->addWidget(outExportDirBrowseBtn);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBoxExport);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        cbExportSelected = new QCheckBox(tab);
        cbExportSelected->setObjectName(QString::fromUtf8("cbExportSelected"));

        horizontalLayout_3->addWidget(cbExportSelected);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbMultipageOutput = new QCheckBox(tab_2);
        cbMultipageOutput->setObjectName(QString::fromUtf8("cbMultipageOutput"));

        verticalLayout->addWidget(cbMultipageOutput);

        GenerateBlankBackSubscans = new QCheckBox(tab_2);
        GenerateBlankBackSubscans->setObjectName(QString::fromUtf8("GenerateBlankBackSubscans"));

        verticalLayout->addWidget(GenerateBlankBackSubscans);

        UseSepSuffixForPics = new QCheckBox(tab_2);
        UseSepSuffixForPics->setObjectName(QString::fromUtf8("UseSepSuffixForPics"));

        verticalLayout->addWidget(UseSepSuffixForPics);

        cbExportWithoutOutputStage = new QCheckBox(tab_2);
        cbExportWithoutOutputStage->setObjectName(QString::fromUtf8("cbExportWithoutOutputStage"));

        verticalLayout->addWidget(cbExportWithoutOutputStage);

        KeepOriginalColorIllumForeSubscans = new QCheckBox(tab_2);
        KeepOriginalColorIllumForeSubscans->setObjectName(QString::fromUtf8("KeepOriginalColorIllumForeSubscans"));

        verticalLayout->addWidget(KeepOriginalColorIllumForeSubscans);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);

        progressBar = new QProgressBar(ExportDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        verticalLayout_3->addWidget(progressBar);

        widget = new QWidget(ExportDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnResetToDefault = new QPushButton(widget);
        btnResetToDefault->setObjectName(QString::fromUtf8("btnResetToDefault"));

        horizontalLayout->addWidget(btnResetToDefault);

        labelFilesProcessed = new QLabel(widget);
        labelFilesProcessed->setObjectName(QString::fromUtf8("labelFilesProcessed"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelFilesProcessed->sizePolicy().hasHeightForWidth());
        labelFilesProcessed->setSizePolicy(sizePolicy2);
        labelFilesProcessed->setText(QString::fromUtf8("TextLabel"));
        labelFilesProcessed->setWordWrap(true);

        horizontalLayout->addWidget(labelFilesProcessed);

        ExportButton = new QPushButton(widget);
        ExportButton->setObjectName(QString::fromUtf8("ExportButton"));

        horizontalLayout->addWidget(ExportButton);

        OkButton = new QPushButton(widget);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));

        horizontalLayout->addWidget(OkButton);


        verticalLayout_3->addWidget(widget);


        retranslateUi(ExportDialog);
        QObject::connect(OkButton, SIGNAL(clicked()), ExportDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QCoreApplication::translate("ExportDialog", "Export", nullptr));
        gbDataToExport->setTitle(QCoreApplication::translate("ExportDialog", "Data to export:", nullptr));
#if QT_CONFIG(tooltip)
        cbExportImage->setToolTip(QCoreApplication::translate("ExportDialog", "Image as it is in ./out subfolder", nullptr));
#endif // QT_CONFIG(tooltip)
        cbExportImage->setText(QCoreApplication::translate("ExportDialog", "Whole image", nullptr));
#if QT_CONFIG(tooltip)
        cbExportForeground->setToolTip(QCoreApplication::translate("ExportDialog", "Only black (#000000) and white (#ffffff) pixels of the image", nullptr));
#endif // QT_CONFIG(tooltip)
        cbExportForeground->setText(QCoreApplication::translate("ExportDialog", "Foreground (b/w text and graphics)", nullptr));
#if QT_CONFIG(tooltip)
        cbExportBackground->setToolTip(QCoreApplication::translate("ExportDialog", "Only non black (> #000000) pixels of the image", nullptr));
#endif // QT_CONFIG(tooltip)
        cbExportBackground->setText(QCoreApplication::translate("ExportDialog", "Background (color and grayscale images)", nullptr));
#if QT_CONFIG(tooltip)
        cbExportAutomask->setToolTip(QCoreApplication::translate("ExportDialog", "Automask could be found in ./out/cache/automask and contains autodetected mask before any zones are applied", nullptr));
#endif // QT_CONFIG(tooltip)
        cbExportAutomask->setText(QCoreApplication::translate("ExportDialog", "Automask (b/w mask for auto layer)", nullptr));
#if QT_CONFIG(tooltip)
        cbExportMask->setToolTip(QCoreApplication::translate("ExportDialog", "Binarized and inverted background", nullptr));
#endif // QT_CONFIG(tooltip)
        cbExportMask->setText(QCoreApplication::translate("ExportDialog", "Mask (b/w mask for background)", nullptr));
#if QT_CONFIG(tooltip)
        cbExportZones->setToolTip(QCoreApplication::translate("ExportDialog", "Some pages might have user defined zones to fill with color or indicate some content. Their coordinates may be exported to tsv text file.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbExportZones->setText(QCoreApplication::translate("ExportDialog", "Coordinates of zones", nullptr));
        DefaultOutputFolder->setText(QCoreApplication::translate("ExportDialog", "Default export folder", nullptr));
        groupBoxExport->setTitle(QCoreApplication::translate("ExportDialog", "Output Directory", nullptr));
        outExportDirBrowseBtn->setText(QCoreApplication::translate("ExportDialog", "...", nullptr));
        cbExportSelected->setText(QCoreApplication::translate("ExportDialog", "Export selected pages only", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ExportDialog", "Main", nullptr));
        cbMultipageOutput->setText(QCoreApplication::translate("ExportDialog", "Save images as multipage tiff file", nullptr));
        GenerateBlankBackSubscans->setText(QCoreApplication::translate("ExportDialog", "Generate blank background subscans", nullptr));
#if QT_CONFIG(tooltip)
        UseSepSuffixForPics->setToolTip(QCoreApplication::translate("ExportDialog", "For better compatibility with DjVu Imager", nullptr));
#endif // QT_CONFIG(tooltip)
        UseSepSuffixForPics->setText(QCoreApplication::translate("ExportDialog", "Use .sep.tif extension instead of .tif for background subscans", nullptr));
#if QT_CONFIG(tooltip)
        cbExportWithoutOutputStage->setToolTip(QCoreApplication::translate("ExportDialog", "<html><head/><body><p>This will have effect if only Export Whole image is checked.</p><p>The exported image will be drawn with colors of original image.</p><p>Only fill zones will be applied. In other words the exported</p><p>image will be a part of original image after split, rotation,</p><p>deskew, applying margins and fill zones. This require image</p><p>reprocessing so it may be time consuming.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbExportWithoutOutputStage->setText(QCoreApplication::translate("ExportDialog", "Skip processing at Output stage (except for Fill Zones) \n"
"for exported image (lengthy)", nullptr));
#if QT_CONFIG(tooltip)
        KeepOriginalColorIllumForeSubscans->setToolTip(QCoreApplication::translate("ExportDialog", "<html><head/><body><p>This will have effect if only Export Foreground is checked.</p><p>Foreground is a b/w image with a black content of resulting</p><p>image drown on white. With this mode on every black pixel will</p><p>be replaced with pixel on the same position taken from original</p><p>image. This may let you get colored or grayscale text instead of</p><p>binarized black one. Require image reprocessing so may be</p><p>time consuming.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        KeepOriginalColorIllumForeSubscans->setText(QCoreApplication::translate("ExportDialog", "Skip processing at Output stage (except for Fill Zones) \n"
"for content in foreground subscans (lengthy)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ExportDialog", "Rare options", nullptr));
#if QT_CONFIG(tooltip)
        btnResetToDefault->setToolTip(QCoreApplication::translate("ExportDialog", "Reset export settings to default values", nullptr));
#endif // QT_CONFIG(tooltip)
        btnResetToDefault->setText(QCoreApplication::translate("ExportDialog", "Restore Defaults", nullptr));
        ExportButton->setText(QCoreApplication::translate("ExportDialog", "Export", nullptr));
        OkButton->setText(QCoreApplication::translate("ExportDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIALOG_H
