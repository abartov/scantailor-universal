/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "filters/page_layout/alignmentwidget.h"
#include "settings/fancylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QAction *actionExpand_all;
    QAction *actionCollapse_all;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget;
    FancyLineEdit *lineEdit;
    QStackedWidget *stackedWidget;
    QWidget *pageEmpty;
    QVBoxLayout *verticalLayout_2;
    QWidget *pageGeneral;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea_8;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_70;
    QLabel *lblGeneralDescr;
    QGroupBox *optGeneral;
    QFormLayout *formLayout;
    QComboBox *language;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_55;
    QRadioButton *startBatchProcessingDlgAllPages;
    QRadioButton *startBatchProcessingDlgFromSelected;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *showStartBatchProcessingDlg;
    QCheckBox *cbDontUseNativeDlg;
    QLabel *lblStyle;
    QComboBox *cbStyle;
    QComboBox *cbStyleSheet;
    QLabel *label_2;
    QWidget *pageHotKeysManager;
    QVBoxLayout *verticalLayout_28;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_51;
    QLabel *lblHotKeyManager;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnResetHotKeys;
    QWidget *pageDocking;
    QVBoxLayout *verticalLayout_34;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_11;
    QLabel *lblDockingDescr;
    QWidget *pageThumbnails;
    QVBoxLayout *verticalLayout_52;
    QGroupBox *groupBox_19;
    QVBoxLayout *verticalLayout_29;
    QScrollArea *scrollArea_16;
    QWidget *scrollAreaWidgetContents_16;
    QVBoxLayout *verticalLayout_83;
    QLabel *lblThumbnailsDescr;
    QGroupBox *grpThumbnailsViewOptions;
    QVBoxLayout *verticalLayout_82;
    QCheckBox *cbThumbsListOrder;
    QGroupBox *gbFixedMaxLogicalThumbSize;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lblFixedMaxLogicalThumbSizeHeight;
    QSpinBox *sbFixedMaxLogicalThumbSizeHeight;
    QLabel *lblFixedMaxLogicalThumbSizeWidth;
    QSpinBox *sbFixedMaxLogicalThumbSizeWidth;
    QWidget *widget_2;
    QFormLayout *formLayout_7;
    QLabel *lblThumbsCacheSize;
    QSpinBox *sbThumbsCacheImgSize;
    QLabel *lblThumbsMinSpacing;
    QSpinBox *sbThumbsMinSpacing;
    QGroupBox *gbThumbsBoundaryAdj;
    QGridLayout *gridLayout;
    QLabel *lblThumbsBoundaryAdjTop;
    QSpinBox *sbThumbsBoundaryAdjLeft;
    QLabel *lblThumbsBoundaryAdjLeft;
    QSpinBox *sbThumbsBoundaryAdjTop;
    QLabel *lblThumbsBoundaryAdjBottom;
    QSpinBox *sbThumbsBoundaryAdjBottom;
    QLabel *lblThumbsBoundaryAdjRight;
    QSpinBox *sbThumbsBoundaryAdjRight;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *btnThumbDefaults;
    QCheckBox *cbOrderHints;
    QWidget *pageAutoSaveProject;
    QVBoxLayout *verticalLayout_35;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_16;
    QLabel *lblAutoSaveProjectDescr;
    QGroupBox *optAutoSaveProject;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QSpinBox *sbSavePeriod;
    QWidget *pageTiffCompression;
    QVBoxLayout *verticalLayout_36;
    QGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_17;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_57;
    QLabel *lblTiffDescr;
    QGroupBox *optTiffCompression;
    QVBoxLayout *verticalLayout_58;
    QLabel *lblTifCompressionBw;
    QComboBox *cbTiffCompressionBW;
    QLabel *lblTiffDetailsBW;
    QLabel *lblTifCompressionColor;
    QComboBox *cbTiffCompressionColor;
    QLabel *lblTiffDetailsColor;
    QCheckBox *cbTiffFilter;
    QCheckBox *useHorizontalPredictor;
    QSpacerItem *verticalSpacer;
    QWidget *pageFixOrientation;
    QVBoxLayout *verticalLayout_38;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_12;
    QLabel *lblFixOrientationDescr;
    QWidget *pageSplitPages;
    QVBoxLayout *verticalLayout_37;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_13;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_60;
    QLabel *lblSplitPagesDescr;
    QWidget *pageApplyCut;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *lblApplyCutDescr;
    QGroupBox *optApplyCut;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QCheckBox *cbApplyCutDefault;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageDeskew;
    QVBoxLayout *verticalLayout_39;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_14;
    QScrollArea *scrollArea_21;
    QWidget *scrollAreaWidgetContents_21;
    QVBoxLayout *verticalLayout_96;
    QLabel *lblDeskewDescr;
    QWidget *gbColorDeskew;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_11;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_21;
    QToolButton *btnColorDeskew;
    QToolButton *btnColorDeskewReset;
    QWidget *pageDeviantDeskew;
    QVBoxLayout *verticalLayout_62;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_61;
    QLabel *lblDeviantDeskewDescr;
    QWidget *pageSelectContent;
    QVBoxLayout *verticalLayout_40;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_15;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_63;
    QLabel *lblSelectContentDescr;
    QWidget *gbColorContentSelected;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_9;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_20;
    QToolButton *btnColorSelectedContent;
    QToolButton *btnColorSelectedContentReset;
    QWidget *pageDeviantContent;
    QVBoxLayout *verticalLayout_65;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_64;
    QLabel *lblDeviantContentDescr;
    QWidget *pagePageDetecton;
    QVBoxLayout *verticalLayout_42;
    QGroupBox *groupBox_18;
    QVBoxLayout *verticalLayout_19;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_9;
    QVBoxLayout *verticalLayout_41;
    QLabel *lblPageDetectontDescr;
    QGroupBox *optPageDetecton;
    QVBoxLayout *verticalLayout_91;
    QGroupBox *gbPageDetectionFineTuneCorners;
    QVBoxLayout *verticalLayout_72;
    QCheckBox *cbPageDetectionFineTuneCorners;
    QGroupBox *gbPageDetectionTargetSize;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_17;
    QDoubleSpinBox *pageDetectionTargetWidth;
    QLabel *label_18;
    QDoubleSpinBox *pageDetectionTargetHeight;
    QGroupBox *gbPageDetectionBorders;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_13;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *pageDetectionRightBorder;
    QLabel *label_13;
    QDoubleSpinBox *pageDetectionBottomBorder;
    QLabel *label_14;
    QDoubleSpinBox *pageDetectionTopBorder;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_15;
    QLabel *label_16;
    QDoubleSpinBox *pageDetectionLeftBorder;
    QSpacerItem *horizontalSpacer_18;
    QWidget *pagePageLayout;
    QVBoxLayout *verticalLayout_43;
    QGroupBox *groupBox_17;
    QVBoxLayout *verticalLayout_20;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_68;
    QLabel *lblPageLayoutDescr;
    QWidget *pageDeviantMargins;
    QVBoxLayout *verticalLayout_67;
    QGroupBox *groupBox_15;
    QVBoxLayout *verticalLayout_66;
    QLabel *lblDeviantMarginsDescr;
    QWidget *pageMargins;
    QVBoxLayout *verticalLayout_44;
    QGroupBox *groupBox_22;
    QVBoxLayout *verticalLayout_21;
    QScrollArea *scrollArea_18;
    QWidget *scrollAreaWidgetContents_18;
    QVBoxLayout *verticalLayout_90;
    QLabel *lblMarginsDescr;
    QGroupBox *optMargins;
    QVBoxLayout *verticalLayout_71;
    QGroupBox *gbDefaultMarginsValues;
    QVBoxLayout *verticalLayout_85;
    QComboBox *cbMarginUnits;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_9;
    QDoubleSpinBox *marginDefaultTopVal;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_15;
    QDoubleSpinBox *marginDefaultLeftVal;
    QSpacerItem *horizontalSpacer_11;
    QDoubleSpinBox *marginDefaultRightVal;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_12;
    QDoubleSpinBox *marginDefaultBottomVal;
    QSpacerItem *horizontalSpacer_13;
    QGroupBox *gbMarginsAuto;
    QVBoxLayout *verticalLayout_84;
    QCheckBox *cbMarginsAuto;
    QWidget *pageAlignment;
    QVBoxLayout *verticalLayout_87;
    QGroupBox *gmAlignmentDescr;
    QVBoxLayout *verticalLayout_86;
    QScrollArea *scrollArea_17;
    QWidget *scrollAreaWidgetContents_17;
    QVBoxLayout *verticalLayout_89;
    QLabel *lblAlignmentDescr;
    QGroupBox *optAlignment;
    QVBoxLayout *verticalLayout_88;
    QCheckBox *cbAlignmentAuto;
    QCheckBox *cbAlignmentOriginal;
    QGroupBox *gbAlignmentWidget;
    QHBoxLayout *horizontalLayout_16;
    AlignmentWidget *widgetAlignment;
    QLabel *lblSelectedAlignment;
    QWidget *pageOutput;
    QVBoxLayout *verticalLayout_47;
    QGroupBox *groupBox_26;
    QVBoxLayout *verticalLayout_23;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_69;
    QLabel *lblOutputDescr;
    QGroupBox *optOutput;
    QVBoxLayout *verticalLayout_56;
    QHBoxLayout *horizontalLayout_7;
    QLabel *dpiDefaultLabel;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *dpiDefaultXValue;
    QLabel *label_6;
    QSpinBox *dpiDefaultYValue;
    QLabel *ThresholdMinMaxLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ThresholdMinLabel;
    QSpinBox *ThresholdMinValue;
    QSpacerItem *horizontalSpacer_2;
    QLabel *ThresholdMaxLabel;
    QSpinBox *ThresholdMaxValue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ThresholdDefaultsLabel;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *ThresholdDefaultsValue;
    QCheckBox *originalPageDisplayOnKeyHold;
    QWidget *pageBlackWhiteMode;
    QVBoxLayout *verticalLayout_46;
    QGroupBox *groupBox_27;
    QVBoxLayout *verticalLayout_24;
    QScrollArea *scrollArea_11;
    QWidget *scrollAreaWidgetContents_11;
    QVBoxLayout *verticalLayout_74;
    QLabel *lblBlackWhiteModeDescr;
    QGroupBox *optBlackWhiteMode;
    QVBoxLayout *verticalLayout_75;
    QCheckBox *disableSmoothingBW;
    QWidget *pageColorGrayscaleMode;
    QVBoxLayout *verticalLayout_48;
    QGroupBox *groupBox_28;
    QVBoxLayout *verticalLayout_25;
    QScrollArea *scrollArea_12;
    QWidget *scrollAreaWidgetContents_12;
    QVBoxLayout *verticalLayout_76;
    QLabel *lblColorGrayscaleModeDescr;
    QGroupBox *optColorGrayscaleMode;
    QFormLayout *formLayout_11;
    QWidget *pageMixedMode;
    QVBoxLayout *verticalLayout_49;
    QGroupBox *groupBox_29;
    QVBoxLayout *verticalLayout_26;
    QScrollArea *scrollArea_13;
    QWidget *scrollAreaWidgetContents_13;
    QVBoxLayout *verticalLayout_77;
    QLabel *lblMixedModeDescr;
    QGroupBox *optMixedMode;
    QFormLayout *formLayout_3;
    QWidget *pageAutoLayer;
    QVBoxLayout *verticalLayout_80;
    QGroupBox *groupBox_30;
    QVBoxLayout *verticalLayout_78;
    QScrollArea *scrollArea_14;
    QWidget *scrollAreaWidgetContents_14;
    QVBoxLayout *verticalLayout_79;
    QLabel *lblAutoLayerDescr;
    QWidget *pagePictureZonesLayer;
    QVBoxLayout *verticalLayout_50;
    QGroupBox *groupBox_31;
    QVBoxLayout *verticalLayout_27;
    QScrollArea *scrollArea_15;
    QWidget *scrollAreaWidgetContents_15;
    QVBoxLayout *verticalLayout_81;
    QLabel *lblPictureZonesLayerDescr;
    QGroupBox *optPictureZonesLayer;
    QFormLayout *formLayout_13;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QSpinBox *rectangularAreasSensitivityValue;
    QWidget *pageForegroundLayer;
    QVBoxLayout *verticalLayout_45;
    QGroupBox *groupBox_16;
    QVBoxLayout *verticalLayout_22;
    QScrollArea *scrollArea_10;
    QWidget *scrollAreaWidgetContents_10;
    QVBoxLayout *verticalLayout_73;
    QLabel *lblForegroundLayerDescr;
    QGroupBox *optGeneral_2;
    QFormLayout *formLayout_4;
    QCheckBox *cbForegroundLayerSeparateControl;
    QWidget *pageFillZones;
    QVBoxLayout *verticalLayout_53;
    QGroupBox *groupBox_40;
    QVBoxLayout *verticalLayout_30;
    QLabel *lblFillZonesDescr;
    QGroupBox *optFillZones;
    QFormLayout *formLayout_16;
    QWidget *pageDewarping;
    QVBoxLayout *verticalLayout_54;
    QGroupBox *groupBox_42;
    QVBoxLayout *verticalLayout_31;
    QScrollArea *scrollArea_19;
    QWidget *scrollAreaWidgetContents_19;
    QVBoxLayout *verticalLayout_92;
    QLabel *lblDewarpingDescr;
    QGroupBox *optDewarping;
    QFormLayout *formLayout_17;
    QCheckBox *cbTryVertHalfCorrection;
    QCheckBox *cbTryDeskewAfterDewarp;
    QWidget *pageDespeckling;
    QVBoxLayout *verticalLayout_33;
    QGroupBox *groupBox_44;
    QVBoxLayout *verticalLayout_32;
    QLabel *lblDespecklingDescr;
    QGroupBox *optDespeckling;
    QFormLayout *formLayout_18;
    QLabel *despecklingDefaultsLabel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *despecklingDefaultsValue;
    QWidget *pageOutputMetadata;
    QVBoxLayout *verticalLayout_94;
    QGroupBox *groupBox_45;
    QVBoxLayout *verticalLayout_93;
    QLabel *lblDespecklingDescr_2;
    QGroupBox *optDespeckling_2;
    QVBoxLayout *verticalLayout_95;
    QCheckBox *cbCopyICCProfile;
    QWidget *pageDebugMode;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_9;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_59;
    QLabel *lblDebugModeDescr;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(703, 514);
        SettingsDialog->setSizeGripEnabled(true);
        SettingsDialog->setModal(true);
        actionExpand_all = new QAction(SettingsDialog);
        actionExpand_all->setObjectName(QString::fromUtf8("actionExpand_all"));
        actionCollapse_all = new QAction(SettingsDialog);
        actionCollapse_all->setObjectName(QString::fromUtf8("actionCollapse_all"));
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(SettingsDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setFrameShape(QFrame::StyledPanel);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        treeWidget = new QTreeWidget(widget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy2);
        treeWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        treeWidget->setAutoFillBackground(false);
        treeWidget->setFrameShape(QFrame::StyledPanel);
        treeWidget->setFrameShadow(QFrame::Raised);
        treeWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        treeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidget->setTabKeyNavigation(true);
        treeWidget->setProperty("showDropIndicator", QVariant(false));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setRootIsDecorated(true);
        treeWidget->setHeaderHidden(true);
        treeWidget->setColumnCount(2);
        treeWidget->header()->setVisible(false);
        treeWidget->header()->setCascadingSectionResizes(true);
        treeWidget->header()->setDefaultSectionSize(250);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout_3->addWidget(treeWidget);

        lineEdit = new FancyLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy3);
        QFont font;
        font.setItalic(true);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(false);

        verticalLayout_3->addWidget(lineEdit);

        verticalLayout_3->setStretch(1, 3);
        splitter->addWidget(widget);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy4);
        stackedWidget->setSizeIncrement(QSize(0, 0));
        pageEmpty = new QWidget();
        pageEmpty->setObjectName(QString::fromUtf8("pageEmpty"));
        verticalLayout_2 = new QVBoxLayout(pageEmpty);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackedWidget->addWidget(pageEmpty);
        pageGeneral = new QWidget();
        pageGeneral->setObjectName(QString::fromUtf8("pageGeneral"));
        verticalLayout_5 = new QVBoxLayout(pageGeneral);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(pageGeneral);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_10 = new QVBoxLayout(groupBox_4);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        scrollArea_8 = new QScrollArea(groupBox_4);
        scrollArea_8->setObjectName(QString::fromUtf8("scrollArea_8"));
        scrollArea_8->setFrameShape(QFrame::NoFrame);
        scrollArea_8->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 419, 273));
        verticalLayout_70 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_70->setSpacing(6);
        verticalLayout_70->setObjectName(QString::fromUtf8("verticalLayout_70"));
        verticalLayout_70->setContentsMargins(6, 6, 6, 6);
        lblGeneralDescr = new QLabel(scrollAreaWidgetContents_8);
        lblGeneralDescr->setObjectName(QString::fromUtf8("lblGeneralDescr"));
        lblGeneralDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblGeneralDescr->setWordWrap(true);
        lblGeneralDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_70->addWidget(lblGeneralDescr);

        scrollArea_8->setWidget(scrollAreaWidgetContents_8);

        verticalLayout_10->addWidget(scrollArea_8);


        verticalLayout_5->addWidget(groupBox_4);

        optGeneral = new QGroupBox(pageGeneral);
        optGeneral->setObjectName(QString::fromUtf8("optGeneral"));
        formLayout = new QFormLayout(optGeneral);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        language = new QComboBox(optGeneral);
        language->setObjectName(QString::fromUtf8("language"));
        language->setMaximumSize(QSize(200, 16777215));
        language->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout->setWidget(0, QFormLayout::FieldRole, language);

        label = new QLabel(optGeneral);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        groupBox = new QGroupBox(optGeneral);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_55 = new QVBoxLayout(groupBox);
        verticalLayout_55->setObjectName(QString::fromUtf8("verticalLayout_55"));
        startBatchProcessingDlgAllPages = new QRadioButton(groupBox);
        startBatchProcessingDlgAllPages->setObjectName(QString::fromUtf8("startBatchProcessingDlgAllPages"));
        startBatchProcessingDlgAllPages->setChecked(false);

        verticalLayout_55->addWidget(startBatchProcessingDlgAllPages);

        startBatchProcessingDlgFromSelected = new QRadioButton(groupBox);
        startBatchProcessingDlgFromSelected->setObjectName(QString::fromUtf8("startBatchProcessingDlgFromSelected"));
        startBatchProcessingDlgFromSelected->setChecked(true);

        verticalLayout_55->addWidget(startBatchProcessingDlgFromSelected);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        showStartBatchProcessingDlg = new QCheckBox(groupBox);
        showStartBatchProcessingDlg->setObjectName(QString::fromUtf8("showStartBatchProcessingDlg"));

        horizontalLayout_5->addWidget(showStartBatchProcessingDlg);


        verticalLayout_55->addLayout(horizontalLayout_5);


        formLayout->setWidget(4, QFormLayout::SpanningRole, groupBox);

        cbDontUseNativeDlg = new QCheckBox(optGeneral);
        cbDontUseNativeDlg->setObjectName(QString::fromUtf8("cbDontUseNativeDlg"));
        cbDontUseNativeDlg->setChecked(true);

        formLayout->setWidget(5, QFormLayout::LabelRole, cbDontUseNativeDlg);

        lblStyle = new QLabel(optGeneral);
        lblStyle->setObjectName(QString::fromUtf8("lblStyle"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblStyle);

        cbStyle = new QComboBox(optGeneral);
        cbStyle->setObjectName(QString::fromUtf8("cbStyle"));
        cbStyle->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout->setWidget(1, QFormLayout::FieldRole, cbStyle);

        cbStyleSheet = new QComboBox(optGeneral);
        cbStyleSheet->setObjectName(QString::fromUtf8("cbStyleSheet"));
        cbStyleSheet->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout->setWidget(2, QFormLayout::FieldRole, cbStyleSheet);

        label_2 = new QLabel(optGeneral);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);


        verticalLayout_5->addWidget(optGeneral);

        stackedWidget->addWidget(pageGeneral);
        pageHotKeysManager = new QWidget();
        pageHotKeysManager->setObjectName(QString::fromUtf8("pageHotKeysManager"));
        verticalLayout_28 = new QVBoxLayout(pageHotKeysManager);
        verticalLayout_28->setSpacing(5);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(pageHotKeysManager);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 432, 63));
        verticalLayout_51 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_51->setSpacing(6);
        verticalLayout_51->setObjectName(QString::fromUtf8("verticalLayout_51"));
        verticalLayout_51->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_51->setContentsMargins(6, 6, 6, 6);
        lblHotKeyManager = new QLabel(scrollAreaWidgetContents);
        lblHotKeyManager->setObjectName(QString::fromUtf8("lblHotKeyManager"));
        lblHotKeyManager->setMinimumSize(QSize(420, 0));
        lblHotKeyManager->setText(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }</style></head><body>\n"
"<table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" width=\"300\" cellspacing=\"0\" cellpadding=\"0\">\n"
"<tr>\n"
"<td>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Header</span></p></td>\n"
"<td></td></tr>\n"
"<tr>\n"
"<td>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">New project</p></td>\n"
"<td>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ctrl+N</p></td></tr>\n"
"<tr>\n"
"<td>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">New project</p></td>\n"
"<td>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ctrl+N</p></td></tr></table></body></html>"));
        lblHotKeyManager->setTextFormat(Qt::RichText);

        verticalLayout_51->addWidget(lblHotKeyManager);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_28->addWidget(scrollArea);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        btnResetHotKeys = new QPushButton(pageHotKeysManager);
        btnResetHotKeys->setObjectName(QString::fromUtf8("btnResetHotKeys"));

        horizontalLayout_9->addWidget(btnResetHotKeys);


        verticalLayout_28->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(pageHotKeysManager);
        pageDocking = new QWidget();
        pageDocking->setObjectName(QString::fromUtf8("pageDocking"));
        verticalLayout_34 = new QVBoxLayout(pageDocking);
        verticalLayout_34->setSpacing(0);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        verticalLayout_34->setContentsMargins(0, 0, 0, 0);
        groupBox_6 = new QGroupBox(pageDocking);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_11 = new QVBoxLayout(groupBox_6);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(6, 6, 6, 6);
        lblDockingDescr = new QLabel(groupBox_6);
        lblDockingDescr->setObjectName(QString::fromUtf8("lblDockingDescr"));
        lblDockingDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDockingDescr->setWordWrap(true);
        lblDockingDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_11->addWidget(lblDockingDescr);


        verticalLayout_34->addWidget(groupBox_6);

        stackedWidget->addWidget(pageDocking);
        pageThumbnails = new QWidget();
        pageThumbnails->setObjectName(QString::fromUtf8("pageThumbnails"));
        verticalLayout_52 = new QVBoxLayout(pageThumbnails);
        verticalLayout_52->setSpacing(0);
        verticalLayout_52->setObjectName(QString::fromUtf8("verticalLayout_52"));
        verticalLayout_52->setContentsMargins(0, 0, 0, 0);
        groupBox_19 = new QGroupBox(pageThumbnails);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        verticalLayout_29 = new QVBoxLayout(groupBox_19);
        verticalLayout_29->setSpacing(0);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        scrollArea_16 = new QScrollArea(groupBox_19);
        scrollArea_16->setObjectName(QString::fromUtf8("scrollArea_16"));
        scrollArea_16->setFrameShape(QFrame::NoFrame);
        scrollArea_16->setWidgetResizable(true);
        scrollAreaWidgetContents_16 = new QWidget();
        scrollAreaWidgetContents_16->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_16"));
        scrollAreaWidgetContents_16->setGeometry(QRect(0, 0, 99, 2504));
        verticalLayout_83 = new QVBoxLayout(scrollAreaWidgetContents_16);
        verticalLayout_83->setSpacing(6);
        verticalLayout_83->setObjectName(QString::fromUtf8("verticalLayout_83"));
        verticalLayout_83->setContentsMargins(6, 6, 6, 6);
        lblThumbnailsDescr = new QLabel(scrollAreaWidgetContents_16);
        lblThumbnailsDescr->setObjectName(QString::fromUtf8("lblThumbnailsDescr"));
        lblThumbnailsDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblThumbnailsDescr->setWordWrap(true);
        lblThumbnailsDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_83->addWidget(lblThumbnailsDescr);

        scrollArea_16->setWidget(scrollAreaWidgetContents_16);

        verticalLayout_29->addWidget(scrollArea_16);


        verticalLayout_52->addWidget(groupBox_19);

        grpThumbnailsViewOptions = new QGroupBox(pageThumbnails);
        grpThumbnailsViewOptions->setObjectName(QString::fromUtf8("grpThumbnailsViewOptions"));
        verticalLayout_82 = new QVBoxLayout(grpThumbnailsViewOptions);
        verticalLayout_82->setObjectName(QString::fromUtf8("verticalLayout_82"));
        cbThumbsListOrder = new QCheckBox(grpThumbnailsViewOptions);
        cbThumbsListOrder->setObjectName(QString::fromUtf8("cbThumbsListOrder"));
        cbThumbsListOrder->setChecked(true);

        verticalLayout_82->addWidget(cbThumbsListOrder);

        gbFixedMaxLogicalThumbSize = new QGroupBox(grpThumbnailsViewOptions);
        gbFixedMaxLogicalThumbSize->setObjectName(QString::fromUtf8("gbFixedMaxLogicalThumbSize"));
        gbFixedMaxLogicalThumbSize->setCheckable(true);
        gbFixedMaxLogicalThumbSize->setChecked(false);
        horizontalLayout_12 = new QHBoxLayout(gbFixedMaxLogicalThumbSize);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(6, 6, 6, 6);
        lblFixedMaxLogicalThumbSizeHeight = new QLabel(gbFixedMaxLogicalThumbSize);
        lblFixedMaxLogicalThumbSizeHeight->setObjectName(QString::fromUtf8("lblFixedMaxLogicalThumbSizeHeight"));

        horizontalLayout_12->addWidget(lblFixedMaxLogicalThumbSizeHeight);

        sbFixedMaxLogicalThumbSizeHeight = new QSpinBox(gbFixedMaxLogicalThumbSize);
        sbFixedMaxLogicalThumbSizeHeight->setObjectName(QString::fromUtf8("sbFixedMaxLogicalThumbSizeHeight"));
        sbFixedMaxLogicalThumbSizeHeight->setMinimum(16);
        sbFixedMaxLogicalThumbSizeHeight->setMaximum(5000);
        sbFixedMaxLogicalThumbSizeHeight->setSingleStep(10);
        sbFixedMaxLogicalThumbSizeHeight->setValue(160);

        horizontalLayout_12->addWidget(sbFixedMaxLogicalThumbSizeHeight);

        lblFixedMaxLogicalThumbSizeWidth = new QLabel(gbFixedMaxLogicalThumbSize);
        lblFixedMaxLogicalThumbSizeWidth->setObjectName(QString::fromUtf8("lblFixedMaxLogicalThumbSizeWidth"));

        horizontalLayout_12->addWidget(lblFixedMaxLogicalThumbSizeWidth);

        sbFixedMaxLogicalThumbSizeWidth = new QSpinBox(gbFixedMaxLogicalThumbSize);
        sbFixedMaxLogicalThumbSizeWidth->setObjectName(QString::fromUtf8("sbFixedMaxLogicalThumbSizeWidth"));
        sbFixedMaxLogicalThumbSizeWidth->setMinimum(25);
        sbFixedMaxLogicalThumbSizeWidth->setMaximum(5000);
        sbFixedMaxLogicalThumbSizeWidth->setSingleStep(10);
        sbFixedMaxLogicalThumbSizeWidth->setValue(250);

        horizontalLayout_12->addWidget(sbFixedMaxLogicalThumbSizeWidth);


        verticalLayout_82->addWidget(gbFixedMaxLogicalThumbSize);

        widget_2 = new QWidget(grpThumbnailsViewOptions);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        formLayout_7 = new QFormLayout(widget_2);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setVerticalSpacing(0);
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        lblThumbsCacheSize = new QLabel(widget_2);
        lblThumbsCacheSize->setObjectName(QString::fromUtf8("lblThumbsCacheSize"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, lblThumbsCacheSize);

        sbThumbsCacheImgSize = new QSpinBox(widget_2);
        sbThumbsCacheImgSize->setObjectName(QString::fromUtf8("sbThumbsCacheImgSize"));
        sbThumbsCacheImgSize->setMinimum(100);
        sbThumbsCacheImgSize->setMaximum(100000);
        sbThumbsCacheImgSize->setValue(200);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, sbThumbsCacheImgSize);

        lblThumbsMinSpacing = new QLabel(widget_2);
        lblThumbsMinSpacing->setObjectName(QString::fromUtf8("lblThumbsMinSpacing"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, lblThumbsMinSpacing);

        sbThumbsMinSpacing = new QSpinBox(widget_2);
        sbThumbsMinSpacing->setObjectName(QString::fromUtf8("sbThumbsMinSpacing"));
        sbThumbsMinSpacing->setMaximum(500);
        sbThumbsMinSpacing->setValue(6);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, sbThumbsMinSpacing);


        verticalLayout_82->addWidget(widget_2);

        gbThumbsBoundaryAdj = new QGroupBox(grpThumbnailsViewOptions);
        gbThumbsBoundaryAdj->setObjectName(QString::fromUtf8("gbThumbsBoundaryAdj"));
        gridLayout = new QGridLayout(gbThumbsBoundaryAdj);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        lblThumbsBoundaryAdjTop = new QLabel(gbThumbsBoundaryAdj);
        lblThumbsBoundaryAdjTop->setObjectName(QString::fromUtf8("lblThumbsBoundaryAdjTop"));

        gridLayout->addWidget(lblThumbsBoundaryAdjTop, 0, 0, 1, 1);

        sbThumbsBoundaryAdjLeft = new QSpinBox(gbThumbsBoundaryAdj);
        sbThumbsBoundaryAdjLeft->setObjectName(QString::fromUtf8("sbThumbsBoundaryAdjLeft"));
        sbThumbsBoundaryAdjLeft->setMaximum(500);
        sbThumbsBoundaryAdjLeft->setValue(5);

        gridLayout->addWidget(sbThumbsBoundaryAdjLeft, 0, 3, 1, 1);

        lblThumbsBoundaryAdjLeft = new QLabel(gbThumbsBoundaryAdj);
        lblThumbsBoundaryAdjLeft->setObjectName(QString::fromUtf8("lblThumbsBoundaryAdjLeft"));

        gridLayout->addWidget(lblThumbsBoundaryAdjLeft, 0, 2, 1, 1);

        sbThumbsBoundaryAdjTop = new QSpinBox(gbThumbsBoundaryAdj);
        sbThumbsBoundaryAdjTop->setObjectName(QString::fromUtf8("sbThumbsBoundaryAdjTop"));
        sbThumbsBoundaryAdjTop->setMaximum(500);
        sbThumbsBoundaryAdjTop->setValue(5);

        gridLayout->addWidget(sbThumbsBoundaryAdjTop, 0, 1, 1, 1);

        lblThumbsBoundaryAdjBottom = new QLabel(gbThumbsBoundaryAdj);
        lblThumbsBoundaryAdjBottom->setObjectName(QString::fromUtf8("lblThumbsBoundaryAdjBottom"));

        gridLayout->addWidget(lblThumbsBoundaryAdjBottom, 1, 0, 1, 1);

        sbThumbsBoundaryAdjBottom = new QSpinBox(gbThumbsBoundaryAdj);
        sbThumbsBoundaryAdjBottom->setObjectName(QString::fromUtf8("sbThumbsBoundaryAdjBottom"));
        sbThumbsBoundaryAdjBottom->setMaximum(500);
        sbThumbsBoundaryAdjBottom->setValue(5);

        gridLayout->addWidget(sbThumbsBoundaryAdjBottom, 1, 1, 1, 1);

        lblThumbsBoundaryAdjRight = new QLabel(gbThumbsBoundaryAdj);
        lblThumbsBoundaryAdjRight->setObjectName(QString::fromUtf8("lblThumbsBoundaryAdjRight"));

        gridLayout->addWidget(lblThumbsBoundaryAdjRight, 1, 2, 1, 1);

        sbThumbsBoundaryAdjRight = new QSpinBox(gbThumbsBoundaryAdj);
        sbThumbsBoundaryAdjRight->setObjectName(QString::fromUtf8("sbThumbsBoundaryAdjRight"));
        sbThumbsBoundaryAdjRight->setMaximum(500);
        sbThumbsBoundaryAdjRight->setValue(6);

        gridLayout->addWidget(sbThumbsBoundaryAdjRight, 1, 3, 1, 1);


        verticalLayout_82->addWidget(gbThumbsBoundaryAdj);

        widget_3 = new QWidget(grpThumbnailsViewOptions);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_15 = new QHBoxLayout(widget_3);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);

        btnThumbDefaults = new QPushButton(widget_3);
        btnThumbDefaults->setObjectName(QString::fromUtf8("btnThumbDefaults"));

        horizontalLayout_15->addWidget(btnThumbDefaults);


        verticalLayout_82->addWidget(widget_3);

        cbOrderHints = new QCheckBox(grpThumbnailsViewOptions);
        cbOrderHints->setObjectName(QString::fromUtf8("cbOrderHints"));

        verticalLayout_82->addWidget(cbOrderHints);


        verticalLayout_52->addWidget(grpThumbnailsViewOptions);

        stackedWidget->addWidget(pageThumbnails);
        pageAutoSaveProject = new QWidget();
        pageAutoSaveProject->setObjectName(QString::fromUtf8("pageAutoSaveProject"));
        verticalLayout_35 = new QVBoxLayout(pageAutoSaveProject);
        verticalLayout_35->setSpacing(0);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        verticalLayout_35->setContentsMargins(0, 0, 0, 0);
        groupBox_12 = new QGroupBox(pageAutoSaveProject);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        verticalLayout_16 = new QVBoxLayout(groupBox_12);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(6, 6, 6, 6);
        lblAutoSaveProjectDescr = new QLabel(groupBox_12);
        lblAutoSaveProjectDescr->setObjectName(QString::fromUtf8("lblAutoSaveProjectDescr"));
        lblAutoSaveProjectDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblAutoSaveProjectDescr->setWordWrap(true);
        lblAutoSaveProjectDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_16->addWidget(lblAutoSaveProjectDescr);


        verticalLayout_35->addWidget(groupBox_12);

        optAutoSaveProject = new QGroupBox(pageAutoSaveProject);
        optAutoSaveProject->setObjectName(QString::fromUtf8("optAutoSaveProject"));
        formLayout_2 = new QFormLayout(optAutoSaveProject);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(optAutoSaveProject);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        sbSavePeriod = new QSpinBox(optAutoSaveProject);
        sbSavePeriod->setObjectName(QString::fromUtf8("sbSavePeriod"));
        sbSavePeriod->setMinimum(1);
        sbSavePeriod->setMaximum(99999);
        sbSavePeriod->setValue(1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, sbSavePeriod);


        verticalLayout_35->addWidget(optAutoSaveProject);

        stackedWidget->addWidget(pageAutoSaveProject);
        pageTiffCompression = new QWidget();
        pageTiffCompression->setObjectName(QString::fromUtf8("pageTiffCompression"));
        verticalLayout_36 = new QVBoxLayout(pageTiffCompression);
        verticalLayout_36->setSpacing(0);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        groupBox_14 = new QGroupBox(pageTiffCompression);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        verticalLayout_17 = new QVBoxLayout(groupBox_14);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(groupBox_14);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 93, 945));
        verticalLayout_57 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_57->setSpacing(6);
        verticalLayout_57->setObjectName(QString::fromUtf8("verticalLayout_57"));
        verticalLayout_57->setContentsMargins(6, 6, 6, 6);
        lblTiffDescr = new QLabel(scrollAreaWidgetContents_2);
        lblTiffDescr->setObjectName(QString::fromUtf8("lblTiffDescr"));
        lblTiffDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblTiffDescr->setWordWrap(true);
        lblTiffDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_57->addWidget(lblTiffDescr);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_17->addWidget(scrollArea_2);


        verticalLayout_36->addWidget(groupBox_14);

        optTiffCompression = new QGroupBox(pageTiffCompression);
        optTiffCompression->setObjectName(QString::fromUtf8("optTiffCompression"));
        verticalLayout_58 = new QVBoxLayout(optTiffCompression);
        verticalLayout_58->setObjectName(QString::fromUtf8("verticalLayout_58"));
        lblTifCompressionBw = new QLabel(optTiffCompression);
        lblTifCompressionBw->setObjectName(QString::fromUtf8("lblTifCompressionBw"));

        verticalLayout_58->addWidget(lblTifCompressionBw);

        cbTiffCompressionBW = new QComboBox(optTiffCompression);
        cbTiffCompressionBW->setObjectName(QString::fromUtf8("cbTiffCompressionBW"));
        sizePolicy.setHeightForWidth(cbTiffCompressionBW->sizePolicy().hasHeightForWidth());
        cbTiffCompressionBW->setSizePolicy(sizePolicy);

        verticalLayout_58->addWidget(cbTiffCompressionBW);

        lblTiffDetailsBW = new QLabel(optTiffCompression);
        lblTiffDetailsBW->setObjectName(QString::fromUtf8("lblTiffDetailsBW"));
        sizePolicy.setHeightForWidth(lblTiffDetailsBW->sizePolicy().hasHeightForWidth());
        lblTiffDetailsBW->setSizePolicy(sizePolicy);
        lblTiffDetailsBW->setFont(font);
        lblTiffDetailsBW->setLayoutDirection(Qt::LeftToRight);
        lblTiffDetailsBW->setText(QString::fromUtf8(""));
        lblTiffDetailsBW->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        lblTiffDetailsBW->setWordWrap(true);
        lblTiffDetailsBW->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_58->addWidget(lblTiffDetailsBW);

        lblTifCompressionColor = new QLabel(optTiffCompression);
        lblTifCompressionColor->setObjectName(QString::fromUtf8("lblTifCompressionColor"));

        verticalLayout_58->addWidget(lblTifCompressionColor);

        cbTiffCompressionColor = new QComboBox(optTiffCompression);
        cbTiffCompressionColor->setObjectName(QString::fromUtf8("cbTiffCompressionColor"));
        sizePolicy.setHeightForWidth(cbTiffCompressionColor->sizePolicy().hasHeightForWidth());
        cbTiffCompressionColor->setSizePolicy(sizePolicy);

        verticalLayout_58->addWidget(cbTiffCompressionColor);

        lblTiffDetailsColor = new QLabel(optTiffCompression);
        lblTiffDetailsColor->setObjectName(QString::fromUtf8("lblTiffDetailsColor"));
        sizePolicy.setHeightForWidth(lblTiffDetailsColor->sizePolicy().hasHeightForWidth());
        lblTiffDetailsColor->setSizePolicy(sizePolicy);
        lblTiffDetailsColor->setFont(font);
        lblTiffDetailsColor->setLayoutDirection(Qt::LeftToRight);
        lblTiffDetailsColor->setText(QString::fromUtf8(""));
        lblTiffDetailsColor->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        lblTiffDetailsColor->setWordWrap(true);
        lblTiffDetailsColor->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_58->addWidget(lblTiffDetailsColor);

        cbTiffFilter = new QCheckBox(optTiffCompression);
        cbTiffFilter->setObjectName(QString::fromUtf8("cbTiffFilter"));

        verticalLayout_58->addWidget(cbTiffFilter);

        useHorizontalPredictor = new QCheckBox(optTiffCompression);
        useHorizontalPredictor->setObjectName(QString::fromUtf8("useHorizontalPredictor"));

        verticalLayout_58->addWidget(useHorizontalPredictor);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_58->addItem(verticalSpacer);


        verticalLayout_36->addWidget(optTiffCompression);

        stackedWidget->addWidget(pageTiffCompression);
        pageFixOrientation = new QWidget();
        pageFixOrientation->setObjectName(QString::fromUtf8("pageFixOrientation"));
        verticalLayout_38 = new QVBoxLayout(pageFixOrientation);
        verticalLayout_38->setSpacing(0);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        verticalLayout_38->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(pageFixOrientation);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_12 = new QVBoxLayout(groupBox_7);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(6, 6, 6, 6);
        lblFixOrientationDescr = new QLabel(groupBox_7);
        lblFixOrientationDescr->setObjectName(QString::fromUtf8("lblFixOrientationDescr"));
        lblFixOrientationDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblFixOrientationDescr->setWordWrap(true);
        lblFixOrientationDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_12->addWidget(lblFixOrientationDescr);


        verticalLayout_38->addWidget(groupBox_7);

        stackedWidget->addWidget(pageFixOrientation);
        pageSplitPages = new QWidget();
        pageSplitPages->setObjectName(QString::fromUtf8("pageSplitPages"));
        verticalLayout_37 = new QVBoxLayout(pageSplitPages);
        verticalLayout_37->setSpacing(0);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        verticalLayout_37->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(pageSplitPages);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_13 = new QVBoxLayout(groupBox_8);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QScrollArea(groupBox_8);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 91, 1334));
        verticalLayout_60 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_60->setSpacing(6);
        verticalLayout_60->setObjectName(QString::fromUtf8("verticalLayout_60"));
        verticalLayout_60->setContentsMargins(6, 6, 6, 6);
        lblSplitPagesDescr = new QLabel(scrollAreaWidgetContents_4);
        lblSplitPagesDescr->setObjectName(QString::fromUtf8("lblSplitPagesDescr"));
        lblSplitPagesDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblSplitPagesDescr->setWordWrap(true);
        lblSplitPagesDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_60->addWidget(lblSplitPagesDescr);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_13->addWidget(scrollArea_4);


        verticalLayout_37->addWidget(groupBox_8);

        stackedWidget->addWidget(pageSplitPages);
        pageApplyCut = new QWidget();
        pageApplyCut->setObjectName(QString::fromUtf8("pageApplyCut"));
        verticalLayout_6 = new QVBoxLayout(pageApplyCut);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(pageApplyCut);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_8 = new QVBoxLayout(groupBox_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(6, 6, 6, 6);
        lblApplyCutDescr = new QLabel(groupBox_2);
        lblApplyCutDescr->setObjectName(QString::fromUtf8("lblApplyCutDescr"));
        lblApplyCutDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblApplyCutDescr->setWordWrap(true);
        lblApplyCutDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_8->addWidget(lblApplyCutDescr);


        verticalLayout_6->addWidget(groupBox_2);

        optApplyCut = new QGroupBox(pageApplyCut);
        optApplyCut->setObjectName(QString::fromUtf8("optApplyCut"));
        verticalLayout_7 = new QVBoxLayout(optApplyCut);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(optApplyCut);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        cbApplyCutDefault = new QCheckBox(optApplyCut);
        cbApplyCutDefault->setObjectName(QString::fromUtf8("cbApplyCutDefault"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cbApplyCutDefault->sizePolicy().hasHeightForWidth());
        cbApplyCutDefault->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(cbApplyCutDefault);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        verticalLayout_6->addWidget(optApplyCut);

        stackedWidget->addWidget(pageApplyCut);
        pageDeskew = new QWidget();
        pageDeskew->setObjectName(QString::fromUtf8("pageDeskew"));
        verticalLayout_39 = new QVBoxLayout(pageDeskew);
        verticalLayout_39->setSpacing(0);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        verticalLayout_39->setContentsMargins(0, 0, 0, 0);
        groupBox_9 = new QGroupBox(pageDeskew);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_14 = new QVBoxLayout(groupBox_9);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea_21 = new QScrollArea(groupBox_9);
        scrollArea_21->setObjectName(QString::fromUtf8("scrollArea_21"));
        scrollArea_21->setFrameShape(QFrame::NoFrame);
        scrollArea_21->setWidgetResizable(true);
        scrollAreaWidgetContents_21 = new QWidget();
        scrollAreaWidgetContents_21->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_21"));
        scrollAreaWidgetContents_21->setGeometry(QRect(0, 0, 99, 981));
        verticalLayout_96 = new QVBoxLayout(scrollAreaWidgetContents_21);
        verticalLayout_96->setObjectName(QString::fromUtf8("verticalLayout_96"));
        lblDeskewDescr = new QLabel(scrollAreaWidgetContents_21);
        lblDeskewDescr->setObjectName(QString::fromUtf8("lblDeskewDescr"));
        lblDeskewDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDeskewDescr->setWordWrap(true);
        lblDeskewDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_96->addWidget(lblDeskewDescr);

        scrollArea_21->setWidget(scrollAreaWidgetContents_21);

        verticalLayout_14->addWidget(scrollArea_21);

        gbColorDeskew = new QWidget(groupBox_9);
        gbColorDeskew->setObjectName(QString::fromUtf8("gbColorDeskew"));
        horizontalLayout_19 = new QHBoxLayout(gbColorDeskew);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gbColorDeskew);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_19->addWidget(label_11);

        label_12 = new QLabel(gbColorDeskew);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_19->addWidget(label_12);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_21);

        btnColorDeskew = new QToolButton(gbColorDeskew);
        btnColorDeskew->setObjectName(QString::fromUtf8("btnColorDeskew"));
        btnColorDeskew->setMinimumSize(QSize(75, 0));

        horizontalLayout_19->addWidget(btnColorDeskew);

        btnColorDeskewReset = new QToolButton(gbColorDeskew);
        btnColorDeskewReset->setObjectName(QString::fromUtf8("btnColorDeskewReset"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/gimp-undo-history.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnColorDeskewReset->setIcon(icon);

        horizontalLayout_19->addWidget(btnColorDeskewReset);


        verticalLayout_14->addWidget(gbColorDeskew);


        verticalLayout_39->addWidget(groupBox_9);

        stackedWidget->addWidget(pageDeskew);
        pageDeviantDeskew = new QWidget();
        pageDeviantDeskew->setObjectName(QString::fromUtf8("pageDeviantDeskew"));
        verticalLayout_62 = new QVBoxLayout(pageDeviantDeskew);
        verticalLayout_62->setSpacing(0);
        verticalLayout_62->setObjectName(QString::fromUtf8("verticalLayout_62"));
        verticalLayout_62->setContentsMargins(0, 0, 0, 0);
        groupBox_11 = new QGroupBox(pageDeviantDeskew);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        verticalLayout_61 = new QVBoxLayout(groupBox_11);
        verticalLayout_61->setSpacing(6);
        verticalLayout_61->setObjectName(QString::fromUtf8("verticalLayout_61"));
        verticalLayout_61->setContentsMargins(6, 6, 6, 6);
        lblDeviantDeskewDescr = new QLabel(groupBox_11);
        lblDeviantDeskewDescr->setObjectName(QString::fromUtf8("lblDeviantDeskewDescr"));
        lblDeviantDeskewDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDeviantDeskewDescr->setWordWrap(true);
        lblDeviantDeskewDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_61->addWidget(lblDeviantDeskewDescr);


        verticalLayout_62->addWidget(groupBox_11);

        stackedWidget->addWidget(pageDeviantDeskew);
        pageSelectContent = new QWidget();
        pageSelectContent->setObjectName(QString::fromUtf8("pageSelectContent"));
        verticalLayout_40 = new QVBoxLayout(pageSelectContent);
        verticalLayout_40->setSpacing(0);
        verticalLayout_40->setObjectName(QString::fromUtf8("verticalLayout_40"));
        verticalLayout_40->setContentsMargins(0, 0, 0, 0);
        groupBox_10 = new QGroupBox(pageSelectContent);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        verticalLayout_15 = new QVBoxLayout(groupBox_10);
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QScrollArea(groupBox_10);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 83, 1615));
        verticalLayout_63 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_63->setSpacing(6);
        verticalLayout_63->setObjectName(QString::fromUtf8("verticalLayout_63"));
        verticalLayout_63->setContentsMargins(6, 6, 6, 6);
        lblSelectContentDescr = new QLabel(scrollAreaWidgetContents_5);
        lblSelectContentDescr->setObjectName(QString::fromUtf8("lblSelectContentDescr"));
        lblSelectContentDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblSelectContentDescr->setWordWrap(true);
        lblSelectContentDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_63->addWidget(lblSelectContentDescr);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_15->addWidget(scrollArea_5);

        gbColorContentSelected = new QWidget(groupBox_10);
        gbColorContentSelected->setObjectName(QString::fromUtf8("gbColorContentSelected"));
        horizontalLayout_18 = new QHBoxLayout(gbColorContentSelected);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(gbColorContentSelected);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_18->addWidget(label_9);

        label_10 = new QLabel(gbColorContentSelected);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_18->addWidget(label_10);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_20);

        btnColorSelectedContent = new QToolButton(gbColorContentSelected);
        btnColorSelectedContent->setObjectName(QString::fromUtf8("btnColorSelectedContent"));
        btnColorSelectedContent->setMinimumSize(QSize(75, 0));

        horizontalLayout_18->addWidget(btnColorSelectedContent);

        btnColorSelectedContentReset = new QToolButton(gbColorContentSelected);
        btnColorSelectedContentReset->setObjectName(QString::fromUtf8("btnColorSelectedContentReset"));
        btnColorSelectedContentReset->setIcon(icon);

        horizontalLayout_18->addWidget(btnColorSelectedContentReset);


        verticalLayout_15->addWidget(gbColorContentSelected);


        verticalLayout_40->addWidget(groupBox_10);

        stackedWidget->addWidget(pageSelectContent);
        pageDeviantContent = new QWidget();
        pageDeviantContent->setObjectName(QString::fromUtf8("pageDeviantContent"));
        verticalLayout_65 = new QVBoxLayout(pageDeviantContent);
        verticalLayout_65->setSpacing(0);
        verticalLayout_65->setObjectName(QString::fromUtf8("verticalLayout_65"));
        verticalLayout_65->setContentsMargins(0, 0, 0, 0);
        groupBox_13 = new QGroupBox(pageDeviantContent);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        verticalLayout_64 = new QVBoxLayout(groupBox_13);
        verticalLayout_64->setSpacing(6);
        verticalLayout_64->setObjectName(QString::fromUtf8("verticalLayout_64"));
        verticalLayout_64->setContentsMargins(6, 6, 6, 6);
        lblDeviantContentDescr = new QLabel(groupBox_13);
        lblDeviantContentDescr->setObjectName(QString::fromUtf8("lblDeviantContentDescr"));
        lblDeviantContentDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDeviantContentDescr->setWordWrap(true);
        lblDeviantContentDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_64->addWidget(lblDeviantContentDescr);


        verticalLayout_65->addWidget(groupBox_13);

        stackedWidget->addWidget(pageDeviantContent);
        pagePageDetecton = new QWidget();
        pagePageDetecton->setObjectName(QString::fromUtf8("pagePageDetecton"));
        verticalLayout_42 = new QVBoxLayout(pagePageDetecton);
        verticalLayout_42->setSpacing(0);
        verticalLayout_42->setObjectName(QString::fromUtf8("verticalLayout_42"));
        verticalLayout_42->setContentsMargins(0, 0, 0, 0);
        groupBox_18 = new QGroupBox(pagePageDetecton);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        verticalLayout_19 = new QVBoxLayout(groupBox_18);
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        scrollArea_9 = new QScrollArea(groupBox_18);
        scrollArea_9->setObjectName(QString::fromUtf8("scrollArea_9"));
        scrollArea_9->setFrameShape(QFrame::NoFrame);
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 96, 1541));
        verticalLayout_41 = new QVBoxLayout(scrollAreaWidgetContents_9);
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setObjectName(QString::fromUtf8("verticalLayout_41"));
        verticalLayout_41->setContentsMargins(6, 6, 6, 6);
        lblPageDetectontDescr = new QLabel(scrollAreaWidgetContents_9);
        lblPageDetectontDescr->setObjectName(QString::fromUtf8("lblPageDetectontDescr"));
        lblPageDetectontDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblPageDetectontDescr->setWordWrap(true);
        lblPageDetectontDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_41->addWidget(lblPageDetectontDescr);

        scrollArea_9->setWidget(scrollAreaWidgetContents_9);

        verticalLayout_19->addWidget(scrollArea_9);


        verticalLayout_42->addWidget(groupBox_18);

        optPageDetecton = new QGroupBox(pagePageDetecton);
        optPageDetecton->setObjectName(QString::fromUtf8("optPageDetecton"));
        verticalLayout_91 = new QVBoxLayout(optPageDetecton);
        verticalLayout_91->setObjectName(QString::fromUtf8("verticalLayout_91"));
        gbPageDetectionFineTuneCorners = new QGroupBox(optPageDetecton);
        gbPageDetectionFineTuneCorners->setObjectName(QString::fromUtf8("gbPageDetectionFineTuneCorners"));
        gbPageDetectionFineTuneCorners->setCheckable(true);
        verticalLayout_72 = new QVBoxLayout(gbPageDetectionFineTuneCorners);
        verticalLayout_72->setObjectName(QString::fromUtf8("verticalLayout_72"));
        cbPageDetectionFineTuneCorners = new QCheckBox(gbPageDetectionFineTuneCorners);
        cbPageDetectionFineTuneCorners->setObjectName(QString::fromUtf8("cbPageDetectionFineTuneCorners"));

        verticalLayout_72->addWidget(cbPageDetectionFineTuneCorners);


        verticalLayout_91->addWidget(gbPageDetectionFineTuneCorners);

        gbPageDetectionTargetSize = new QGroupBox(optPageDetecton);
        gbPageDetectionTargetSize->setObjectName(QString::fromUtf8("gbPageDetectionTargetSize"));
        gbPageDetectionTargetSize->setCheckable(true);
        gbPageDetectionTargetSize->setChecked(false);
        horizontalLayout_14 = new QHBoxLayout(gbPageDetectionTargetSize);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_17 = new QLabel(gbPageDetectionTargetSize);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_14->addWidget(label_17);

        pageDetectionTargetWidth = new QDoubleSpinBox(gbPageDetectionTargetSize);
        pageDetectionTargetWidth->setObjectName(QString::fromUtf8("pageDetectionTargetWidth"));
        pageDetectionTargetWidth->setMaximum(999999.000000000000000);

        horizontalLayout_14->addWidget(pageDetectionTargetWidth);

        label_18 = new QLabel(gbPageDetectionTargetSize);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_14->addWidget(label_18);

        pageDetectionTargetHeight = new QDoubleSpinBox(gbPageDetectionTargetSize);
        pageDetectionTargetHeight->setObjectName(QString::fromUtf8("pageDetectionTargetHeight"));
        pageDetectionTargetHeight->setMaximum(999999.000000000000000);

        horizontalLayout_14->addWidget(pageDetectionTargetHeight);


        verticalLayout_91->addWidget(gbPageDetectionTargetSize);

        gbPageDetectionBorders = new QGroupBox(optPageDetecton);
        gbPageDetectionBorders->setObjectName(QString::fromUtf8("gbPageDetectionBorders"));
        gbPageDetectionBorders->setCheckable(true);
        gbPageDetectionBorders->setChecked(false);
        verticalLayout_18 = new QVBoxLayout(gbPageDetectionBorders);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pageDetectionRightBorder = new QDoubleSpinBox(gbPageDetectionBorders);
        pageDetectionRightBorder->setObjectName(QString::fromUtf8("pageDetectionRightBorder"));

        gridLayout_2->addWidget(pageDetectionRightBorder, 1, 4, 1, 1);

        label_13 = new QLabel(gbPageDetectionBorders);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_13, 1, 1, 1, 1);

        pageDetectionBottomBorder = new QDoubleSpinBox(gbPageDetectionBorders);
        pageDetectionBottomBorder->setObjectName(QString::fromUtf8("pageDetectionBottomBorder"));

        gridLayout_2->addWidget(pageDetectionBottomBorder, 4, 3, 1, 1);

        label_14 = new QLabel(gbPageDetectionBorders);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_14, 0, 2, 1, 1);

        pageDetectionTopBorder = new QDoubleSpinBox(gbPageDetectionBorders);
        pageDetectionTopBorder->setObjectName(QString::fromUtf8("pageDetectionTopBorder"));

        gridLayout_2->addWidget(pageDetectionTopBorder, 0, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_17, 1, 5, 1, 1);

        label_15 = new QLabel(gbPageDetectionBorders);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15, 1, 3, 1, 1);

        label_16 = new QLabel(gbPageDetectionBorders);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_16, 4, 2, 1, 1);

        pageDetectionLeftBorder = new QDoubleSpinBox(gbPageDetectionBorders);
        pageDetectionLeftBorder->setObjectName(QString::fromUtf8("pageDetectionLeftBorder"));

        gridLayout_2->addWidget(pageDetectionLeftBorder, 1, 2, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_18, 1, 0, 1, 1);


        horizontalLayout_13->addLayout(gridLayout_2);


        verticalLayout_18->addLayout(horizontalLayout_13);


        verticalLayout_91->addWidget(gbPageDetectionBorders);


        verticalLayout_42->addWidget(optPageDetecton);

        stackedWidget->addWidget(pagePageDetecton);
        pagePageLayout = new QWidget();
        pagePageLayout->setObjectName(QString::fromUtf8("pagePageLayout"));
        verticalLayout_43 = new QVBoxLayout(pagePageLayout);
        verticalLayout_43->setSpacing(0);
        verticalLayout_43->setObjectName(QString::fromUtf8("verticalLayout_43"));
        verticalLayout_43->setContentsMargins(0, 0, 0, 0);
        groupBox_17 = new QGroupBox(pagePageLayout);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        verticalLayout_20 = new QVBoxLayout(groupBox_17);
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QScrollArea(groupBox_17);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 88, 1348));
        verticalLayout_68 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_68->setSpacing(6);
        verticalLayout_68->setObjectName(QString::fromUtf8("verticalLayout_68"));
        verticalLayout_68->setContentsMargins(6, 6, 6, 6);
        lblPageLayoutDescr = new QLabel(scrollAreaWidgetContents_6);
        lblPageLayoutDescr->setObjectName(QString::fromUtf8("lblPageLayoutDescr"));
        lblPageLayoutDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblPageLayoutDescr->setWordWrap(true);
        lblPageLayoutDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_68->addWidget(lblPageLayoutDescr);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_20->addWidget(scrollArea_6);


        verticalLayout_43->addWidget(groupBox_17);

        stackedWidget->addWidget(pagePageLayout);
        pageDeviantMargins = new QWidget();
        pageDeviantMargins->setObjectName(QString::fromUtf8("pageDeviantMargins"));
        verticalLayout_67 = new QVBoxLayout(pageDeviantMargins);
        verticalLayout_67->setSpacing(0);
        verticalLayout_67->setObjectName(QString::fromUtf8("verticalLayout_67"));
        verticalLayout_67->setContentsMargins(0, 0, 0, 0);
        groupBox_15 = new QGroupBox(pageDeviantMargins);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        verticalLayout_66 = new QVBoxLayout(groupBox_15);
        verticalLayout_66->setSpacing(6);
        verticalLayout_66->setObjectName(QString::fromUtf8("verticalLayout_66"));
        verticalLayout_66->setContentsMargins(6, 6, 6, 6);
        lblDeviantMarginsDescr = new QLabel(groupBox_15);
        lblDeviantMarginsDescr->setObjectName(QString::fromUtf8("lblDeviantMarginsDescr"));
        lblDeviantMarginsDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDeviantMarginsDescr->setWordWrap(true);
        lblDeviantMarginsDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_66->addWidget(lblDeviantMarginsDescr);


        verticalLayout_67->addWidget(groupBox_15);

        stackedWidget->addWidget(pageDeviantMargins);
        pageMargins = new QWidget();
        pageMargins->setObjectName(QString::fromUtf8("pageMargins"));
        verticalLayout_44 = new QVBoxLayout(pageMargins);
        verticalLayout_44->setSpacing(0);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        verticalLayout_44->setContentsMargins(0, 0, 0, 0);
        groupBox_22 = new QGroupBox(pageMargins);
        groupBox_22->setObjectName(QString::fromUtf8("groupBox_22"));
        verticalLayout_21 = new QVBoxLayout(groupBox_22);
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        scrollArea_18 = new QScrollArea(groupBox_22);
        scrollArea_18->setObjectName(QString::fromUtf8("scrollArea_18"));
        scrollArea_18->setFrameShape(QFrame::NoFrame);
        scrollArea_18->setWidgetResizable(true);
        scrollAreaWidgetContents_18 = new QWidget();
        scrollAreaWidgetContents_18->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_18"));
        scrollAreaWidgetContents_18->setGeometry(QRect(0, 0, 95, 1191));
        verticalLayout_90 = new QVBoxLayout(scrollAreaWidgetContents_18);
        verticalLayout_90->setSpacing(6);
        verticalLayout_90->setObjectName(QString::fromUtf8("verticalLayout_90"));
        verticalLayout_90->setContentsMargins(6, 6, 6, 6);
        lblMarginsDescr = new QLabel(scrollAreaWidgetContents_18);
        lblMarginsDescr->setObjectName(QString::fromUtf8("lblMarginsDescr"));
        lblMarginsDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblMarginsDescr->setWordWrap(true);
        lblMarginsDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_90->addWidget(lblMarginsDescr);

        scrollArea_18->setWidget(scrollAreaWidgetContents_18);

        verticalLayout_21->addWidget(scrollArea_18);


        verticalLayout_44->addWidget(groupBox_22);

        optMargins = new QGroupBox(pageMargins);
        optMargins->setObjectName(QString::fromUtf8("optMargins"));
        verticalLayout_71 = new QVBoxLayout(optMargins);
        verticalLayout_71->setObjectName(QString::fromUtf8("verticalLayout_71"));
        gbDefaultMarginsValues = new QGroupBox(optMargins);
        gbDefaultMarginsValues->setObjectName(QString::fromUtf8("gbDefaultMarginsValues"));
        verticalLayout_85 = new QVBoxLayout(gbDefaultMarginsValues);
        verticalLayout_85->setObjectName(QString::fromUtf8("verticalLayout_85"));
        cbMarginUnits = new QComboBox(gbDefaultMarginsValues);
        cbMarginUnits->addItem(QString());
        cbMarginUnits->addItem(QString());
        cbMarginUnits->setObjectName(QString::fromUtf8("cbMarginUnits"));

        verticalLayout_85->addWidget(cbMarginUnits);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        marginDefaultTopVal = new QDoubleSpinBox(gbDefaultMarginsValues);
        marginDefaultTopVal->setObjectName(QString::fromUtf8("marginDefaultTopVal"));

        horizontalLayout_4->addWidget(marginDefaultTopVal);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);


        verticalLayout_85->addLayout(horizontalLayout_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_15);

        marginDefaultLeftVal = new QDoubleSpinBox(gbDefaultMarginsValues);
        marginDefaultLeftVal->setObjectName(QString::fromUtf8("marginDefaultLeftVal"));

        horizontalLayout_11->addWidget(marginDefaultLeftVal);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        marginDefaultRightVal = new QDoubleSpinBox(gbDefaultMarginsValues);
        marginDefaultRightVal->setObjectName(QString::fromUtf8("marginDefaultRightVal"));

        horizontalLayout_11->addWidget(marginDefaultRightVal);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_16);


        verticalLayout_85->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);

        marginDefaultBottomVal = new QDoubleSpinBox(gbDefaultMarginsValues);
        marginDefaultBottomVal->setObjectName(QString::fromUtf8("marginDefaultBottomVal"));

        horizontalLayout_10->addWidget(marginDefaultBottomVal);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);


        verticalLayout_85->addLayout(horizontalLayout_10);


        verticalLayout_71->addWidget(gbDefaultMarginsValues);

        gbMarginsAuto = new QGroupBox(optMargins);
        gbMarginsAuto->setObjectName(QString::fromUtf8("gbMarginsAuto"));
        gbMarginsAuto->setCheckable(true);
        verticalLayout_84 = new QVBoxLayout(gbMarginsAuto);
        verticalLayout_84->setObjectName(QString::fromUtf8("verticalLayout_84"));
        cbMarginsAuto = new QCheckBox(gbMarginsAuto);
        cbMarginsAuto->setObjectName(QString::fromUtf8("cbMarginsAuto"));
        cbMarginsAuto->setChecked(false);

        verticalLayout_84->addWidget(cbMarginsAuto);


        verticalLayout_71->addWidget(gbMarginsAuto);


        verticalLayout_44->addWidget(optMargins);

        stackedWidget->addWidget(pageMargins);
        pageAlignment = new QWidget();
        pageAlignment->setObjectName(QString::fromUtf8("pageAlignment"));
        verticalLayout_87 = new QVBoxLayout(pageAlignment);
        verticalLayout_87->setSpacing(0);
        verticalLayout_87->setObjectName(QString::fromUtf8("verticalLayout_87"));
        verticalLayout_87->setContentsMargins(0, 0, 0, 0);
        gmAlignmentDescr = new QGroupBox(pageAlignment);
        gmAlignmentDescr->setObjectName(QString::fromUtf8("gmAlignmentDescr"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(gmAlignmentDescr->sizePolicy().hasHeightForWidth());
        gmAlignmentDescr->setSizePolicy(sizePolicy6);
        verticalLayout_86 = new QVBoxLayout(gmAlignmentDescr);
        verticalLayout_86->setSpacing(0);
        verticalLayout_86->setObjectName(QString::fromUtf8("verticalLayout_86"));
        verticalLayout_86->setContentsMargins(0, 0, 0, 0);
        scrollArea_17 = new QScrollArea(gmAlignmentDescr);
        scrollArea_17->setObjectName(QString::fromUtf8("scrollArea_17"));
        scrollArea_17->setFrameShape(QFrame::NoFrame);
        scrollArea_17->setWidgetResizable(true);
        scrollAreaWidgetContents_17 = new QWidget();
        scrollAreaWidgetContents_17->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_17"));
        scrollAreaWidgetContents_17->setGeometry(QRect(0, 0, 93, 4389));
        verticalLayout_89 = new QVBoxLayout(scrollAreaWidgetContents_17);
        verticalLayout_89->setSpacing(6);
        verticalLayout_89->setObjectName(QString::fromUtf8("verticalLayout_89"));
        verticalLayout_89->setContentsMargins(6, 6, 6, 6);
        lblAlignmentDescr = new QLabel(scrollAreaWidgetContents_17);
        lblAlignmentDescr->setObjectName(QString::fromUtf8("lblAlignmentDescr"));
        lblAlignmentDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblAlignmentDescr->setWordWrap(true);
        lblAlignmentDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_89->addWidget(lblAlignmentDescr);

        scrollArea_17->setWidget(scrollAreaWidgetContents_17);

        verticalLayout_86->addWidget(scrollArea_17);


        verticalLayout_87->addWidget(gmAlignmentDescr);

        optAlignment = new QGroupBox(pageAlignment);
        optAlignment->setObjectName(QString::fromUtf8("optAlignment"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(optAlignment->sizePolicy().hasHeightForWidth());
        optAlignment->setSizePolicy(sizePolicy7);
        verticalLayout_88 = new QVBoxLayout(optAlignment);
        verticalLayout_88->setObjectName(QString::fromUtf8("verticalLayout_88"));
        cbAlignmentAuto = new QCheckBox(optAlignment);
        cbAlignmentAuto->setObjectName(QString::fromUtf8("cbAlignmentAuto"));

        verticalLayout_88->addWidget(cbAlignmentAuto);

        cbAlignmentOriginal = new QCheckBox(optAlignment);
        cbAlignmentOriginal->setObjectName(QString::fromUtf8("cbAlignmentOriginal"));

        verticalLayout_88->addWidget(cbAlignmentOriginal);

        gbAlignmentWidget = new QGroupBox(optAlignment);
        gbAlignmentWidget->setObjectName(QString::fromUtf8("gbAlignmentWidget"));
        horizontalLayout_16 = new QHBoxLayout(gbAlignmentWidget);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(6, 6, 6, 6);
        widgetAlignment = new AlignmentWidget(gbAlignmentWidget);
        widgetAlignment->setObjectName(QString::fromUtf8("widgetAlignment"));
        sizePolicy7.setHeightForWidth(widgetAlignment->sizePolicy().hasHeightForWidth());
        widgetAlignment->setSizePolicy(sizePolicy7);

        horizontalLayout_16->addWidget(widgetAlignment);

        lblSelectedAlignment = new QLabel(gbAlignmentWidget);
        lblSelectedAlignment->setObjectName(QString::fromUtf8("lblSelectedAlignment"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(lblSelectedAlignment->sizePolicy().hasHeightForWidth());
        lblSelectedAlignment->setSizePolicy(sizePolicy8);
        lblSelectedAlignment->setMinimumSize(QSize(156, 0));
        lblSelectedAlignment->setFrameShape(QFrame::Panel);
        lblSelectedAlignment->setFrameShadow(QFrame::Sunken);
        lblSelectedAlignment->setAlignment(Qt::AlignCenter);
        lblSelectedAlignment->setWordWrap(true);

        horizontalLayout_16->addWidget(lblSelectedAlignment);


        verticalLayout_88->addWidget(gbAlignmentWidget);


        verticalLayout_87->addWidget(optAlignment);

        stackedWidget->addWidget(pageAlignment);
        pageOutput = new QWidget();
        pageOutput->setObjectName(QString::fromUtf8("pageOutput"));
        verticalLayout_47 = new QVBoxLayout(pageOutput);
        verticalLayout_47->setSpacing(0);
        verticalLayout_47->setObjectName(QString::fromUtf8("verticalLayout_47"));
        verticalLayout_47->setContentsMargins(0, 0, 0, 0);
        groupBox_26 = new QGroupBox(pageOutput);
        groupBox_26->setObjectName(QString::fromUtf8("groupBox_26"));
        verticalLayout_23 = new QVBoxLayout(groupBox_26);
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        scrollArea_7 = new QScrollArea(groupBox_26);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::NoFrame);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 99, 831));
        verticalLayout_69 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_69->setSpacing(6);
        verticalLayout_69->setObjectName(QString::fromUtf8("verticalLayout_69"));
        verticalLayout_69->setContentsMargins(6, 6, 6, 6);
        lblOutputDescr = new QLabel(scrollAreaWidgetContents_7);
        lblOutputDescr->setObjectName(QString::fromUtf8("lblOutputDescr"));
        lblOutputDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblOutputDescr->setWordWrap(true);
        lblOutputDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_69->addWidget(lblOutputDescr);

        scrollArea_7->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_23->addWidget(scrollArea_7);


        verticalLayout_47->addWidget(groupBox_26);

        optOutput = new QGroupBox(pageOutput);
        optOutput->setObjectName(QString::fromUtf8("optOutput"));
        verticalLayout_56 = new QVBoxLayout(optOutput);
        verticalLayout_56->setObjectName(QString::fromUtf8("verticalLayout_56"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        dpiDefaultLabel = new QLabel(optOutput);
        dpiDefaultLabel->setObjectName(QString::fromUtf8("dpiDefaultLabel"));

        horizontalLayout_7->addWidget(dpiDefaultLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        dpiDefaultXValue = new QSpinBox(optOutput);
        dpiDefaultXValue->setObjectName(QString::fromUtf8("dpiDefaultXValue"));
        dpiDefaultXValue->setMaximumSize(QSize(62, 16777215));
        dpiDefaultXValue->setMinimum(1);
        dpiDefaultXValue->setMaximum(999999);
        dpiDefaultXValue->setValue(600);

        horizontalLayout_7->addWidget(dpiDefaultXValue);

        label_6 = new QLabel(optOutput);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setText(QString::fromUtf8("x"));

        horizontalLayout_7->addWidget(label_6);

        dpiDefaultYValue = new QSpinBox(optOutput);
        dpiDefaultYValue->setObjectName(QString::fromUtf8("dpiDefaultYValue"));
        dpiDefaultYValue->setMaximumSize(QSize(62, 16777215));
        dpiDefaultYValue->setMinimum(1);
        dpiDefaultYValue->setMaximum(999999);
        dpiDefaultYValue->setValue(600);

        horizontalLayout_7->addWidget(dpiDefaultYValue);


        verticalLayout_56->addLayout(horizontalLayout_7);

        ThresholdMinMaxLabel = new QLabel(optOutput);
        ThresholdMinMaxLabel->setObjectName(QString::fromUtf8("ThresholdMinMaxLabel"));

        verticalLayout_56->addWidget(ThresholdMinMaxLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ThresholdMinLabel = new QLabel(optOutput);
        ThresholdMinLabel->setObjectName(QString::fromUtf8("ThresholdMinLabel"));

        horizontalLayout_2->addWidget(ThresholdMinLabel);

        ThresholdMinValue = new QSpinBox(optOutput);
        ThresholdMinValue->setObjectName(QString::fromUtf8("ThresholdMinValue"));
        ThresholdMinValue->setMinimum(-128);
        ThresholdMinValue->setMaximum(127);
        ThresholdMinValue->setValue(-50);

        horizontalLayout_2->addWidget(ThresholdMinValue);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        ThresholdMaxLabel = new QLabel(optOutput);
        ThresholdMaxLabel->setObjectName(QString::fromUtf8("ThresholdMaxLabel"));

        horizontalLayout_2->addWidget(ThresholdMaxLabel);

        ThresholdMaxValue = new QSpinBox(optOutput);
        ThresholdMaxValue->setObjectName(QString::fromUtf8("ThresholdMaxValue"));
        ThresholdMaxValue->setMinimum(-128);
        ThresholdMaxValue->setMaximum(127);
        ThresholdMaxValue->setValue(50);

        horizontalLayout_2->addWidget(ThresholdMaxValue);


        verticalLayout_56->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ThresholdDefaultsLabel = new QLabel(optOutput);
        ThresholdDefaultsLabel->setObjectName(QString::fromUtf8("ThresholdDefaultsLabel"));

        horizontalLayout_6->addWidget(ThresholdDefaultsLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        ThresholdDefaultsValue = new QSpinBox(optOutput);
        ThresholdDefaultsValue->setObjectName(QString::fromUtf8("ThresholdDefaultsValue"));

        horizontalLayout_6->addWidget(ThresholdDefaultsValue);


        verticalLayout_56->addLayout(horizontalLayout_6);

        originalPageDisplayOnKeyHold = new QCheckBox(optOutput);
        originalPageDisplayOnKeyHold->setObjectName(QString::fromUtf8("originalPageDisplayOnKeyHold"));

        verticalLayout_56->addWidget(originalPageDisplayOnKeyHold);


        verticalLayout_47->addWidget(optOutput, 0, Qt::AlignTop);

        stackedWidget->addWidget(pageOutput);
        pageBlackWhiteMode = new QWidget();
        pageBlackWhiteMode->setObjectName(QString::fromUtf8("pageBlackWhiteMode"));
        verticalLayout_46 = new QVBoxLayout(pageBlackWhiteMode);
        verticalLayout_46->setSpacing(0);
        verticalLayout_46->setObjectName(QString::fromUtf8("verticalLayout_46"));
        verticalLayout_46->setContentsMargins(0, 0, 0, 0);
        groupBox_27 = new QGroupBox(pageBlackWhiteMode);
        groupBox_27->setObjectName(QString::fromUtf8("groupBox_27"));
        verticalLayout_24 = new QVBoxLayout(groupBox_27);
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        scrollArea_11 = new QScrollArea(groupBox_27);
        scrollArea_11->setObjectName(QString::fromUtf8("scrollArea_11"));
        scrollArea_11->setFrameShape(QFrame::NoFrame);
        scrollArea_11->setWidgetResizable(true);
        scrollAreaWidgetContents_11 = new QWidget();
        scrollAreaWidgetContents_11->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_11"));
        scrollAreaWidgetContents_11->setGeometry(QRect(0, 0, 89, 1070));
        verticalLayout_74 = new QVBoxLayout(scrollAreaWidgetContents_11);
        verticalLayout_74->setSpacing(6);
        verticalLayout_74->setObjectName(QString::fromUtf8("verticalLayout_74"));
        verticalLayout_74->setContentsMargins(6, 6, 6, 6);
        lblBlackWhiteModeDescr = new QLabel(scrollAreaWidgetContents_11);
        lblBlackWhiteModeDescr->setObjectName(QString::fromUtf8("lblBlackWhiteModeDescr"));
        lblBlackWhiteModeDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblBlackWhiteModeDescr->setWordWrap(true);
        lblBlackWhiteModeDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_74->addWidget(lblBlackWhiteModeDescr);

        scrollArea_11->setWidget(scrollAreaWidgetContents_11);

        verticalLayout_24->addWidget(scrollArea_11);


        verticalLayout_46->addWidget(groupBox_27);

        optBlackWhiteMode = new QGroupBox(pageBlackWhiteMode);
        optBlackWhiteMode->setObjectName(QString::fromUtf8("optBlackWhiteMode"));
        verticalLayout_75 = new QVBoxLayout(optBlackWhiteMode);
        verticalLayout_75->setObjectName(QString::fromUtf8("verticalLayout_75"));
        disableSmoothingBW = new QCheckBox(optBlackWhiteMode);
        disableSmoothingBW->setObjectName(QString::fromUtf8("disableSmoothingBW"));

        verticalLayout_75->addWidget(disableSmoothingBW);


        verticalLayout_46->addWidget(optBlackWhiteMode);

        stackedWidget->addWidget(pageBlackWhiteMode);
        pageColorGrayscaleMode = new QWidget();
        pageColorGrayscaleMode->setObjectName(QString::fromUtf8("pageColorGrayscaleMode"));
        verticalLayout_48 = new QVBoxLayout(pageColorGrayscaleMode);
        verticalLayout_48->setSpacing(0);
        verticalLayout_48->setObjectName(QString::fromUtf8("verticalLayout_48"));
        verticalLayout_48->setContentsMargins(0, 0, 0, 0);
        groupBox_28 = new QGroupBox(pageColorGrayscaleMode);
        groupBox_28->setObjectName(QString::fromUtf8("groupBox_28"));
        verticalLayout_25 = new QVBoxLayout(groupBox_28);
        verticalLayout_25->setSpacing(0);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        scrollArea_12 = new QScrollArea(groupBox_28);
        scrollArea_12->setObjectName(QString::fromUtf8("scrollArea_12"));
        scrollArea_12->setFrameShape(QFrame::NoFrame);
        scrollArea_12->setWidgetResizable(true);
        scrollAreaWidgetContents_12 = new QWidget();
        scrollAreaWidgetContents_12->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_12"));
        scrollAreaWidgetContents_12->setGeometry(QRect(0, 0, 80, 575));
        verticalLayout_76 = new QVBoxLayout(scrollAreaWidgetContents_12);
        verticalLayout_76->setSpacing(6);
        verticalLayout_76->setObjectName(QString::fromUtf8("verticalLayout_76"));
        verticalLayout_76->setContentsMargins(6, 6, 6, 6);
        lblColorGrayscaleModeDescr = new QLabel(scrollAreaWidgetContents_12);
        lblColorGrayscaleModeDescr->setObjectName(QString::fromUtf8("lblColorGrayscaleModeDescr"));
        lblColorGrayscaleModeDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblColorGrayscaleModeDescr->setWordWrap(true);
        lblColorGrayscaleModeDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_76->addWidget(lblColorGrayscaleModeDescr);

        scrollArea_12->setWidget(scrollAreaWidgetContents_12);

        verticalLayout_25->addWidget(scrollArea_12);


        verticalLayout_48->addWidget(groupBox_28);

        optColorGrayscaleMode = new QGroupBox(pageColorGrayscaleMode);
        optColorGrayscaleMode->setObjectName(QString::fromUtf8("optColorGrayscaleMode"));
        formLayout_11 = new QFormLayout(optColorGrayscaleMode);
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));

        verticalLayout_48->addWidget(optColorGrayscaleMode);

        stackedWidget->addWidget(pageColorGrayscaleMode);
        pageMixedMode = new QWidget();
        pageMixedMode->setObjectName(QString::fromUtf8("pageMixedMode"));
        verticalLayout_49 = new QVBoxLayout(pageMixedMode);
        verticalLayout_49->setSpacing(0);
        verticalLayout_49->setObjectName(QString::fromUtf8("verticalLayout_49"));
        verticalLayout_49->setContentsMargins(0, 0, 0, 0);
        groupBox_29 = new QGroupBox(pageMixedMode);
        groupBox_29->setObjectName(QString::fromUtf8("groupBox_29"));
        verticalLayout_26 = new QVBoxLayout(groupBox_29);
        verticalLayout_26->setSpacing(0);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        scrollArea_13 = new QScrollArea(groupBox_29);
        scrollArea_13->setObjectName(QString::fromUtf8("scrollArea_13"));
        scrollArea_13->setFrameShape(QFrame::NoFrame);
        scrollArea_13->setWidgetResizable(true);
        scrollAreaWidgetContents_13 = new QWidget();
        scrollAreaWidgetContents_13->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_13"));
        scrollAreaWidgetContents_13->setGeometry(QRect(0, 0, 95, 879));
        verticalLayout_77 = new QVBoxLayout(scrollAreaWidgetContents_13);
        verticalLayout_77->setSpacing(6);
        verticalLayout_77->setObjectName(QString::fromUtf8("verticalLayout_77"));
        verticalLayout_77->setContentsMargins(6, 6, 6, 6);
        lblMixedModeDescr = new QLabel(scrollAreaWidgetContents_13);
        lblMixedModeDescr->setObjectName(QString::fromUtf8("lblMixedModeDescr"));
        lblMixedModeDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblMixedModeDescr->setWordWrap(true);
        lblMixedModeDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_77->addWidget(lblMixedModeDescr);

        scrollArea_13->setWidget(scrollAreaWidgetContents_13);

        verticalLayout_26->addWidget(scrollArea_13);


        verticalLayout_49->addWidget(groupBox_29);

        optMixedMode = new QGroupBox(pageMixedMode);
        optMixedMode->setObjectName(QString::fromUtf8("optMixedMode"));
        formLayout_3 = new QFormLayout(optMixedMode);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));

        verticalLayout_49->addWidget(optMixedMode);

        stackedWidget->addWidget(pageMixedMode);
        pageAutoLayer = new QWidget();
        pageAutoLayer->setObjectName(QString::fromUtf8("pageAutoLayer"));
        verticalLayout_80 = new QVBoxLayout(pageAutoLayer);
        verticalLayout_80->setSpacing(0);
        verticalLayout_80->setObjectName(QString::fromUtf8("verticalLayout_80"));
        verticalLayout_80->setContentsMargins(0, 0, 0, 0);
        groupBox_30 = new QGroupBox(pageAutoLayer);
        groupBox_30->setObjectName(QString::fromUtf8("groupBox_30"));
        verticalLayout_78 = new QVBoxLayout(groupBox_30);
        verticalLayout_78->setSpacing(0);
        verticalLayout_78->setObjectName(QString::fromUtf8("verticalLayout_78"));
        verticalLayout_78->setContentsMargins(0, 0, 0, 0);
        scrollArea_14 = new QScrollArea(groupBox_30);
        scrollArea_14->setObjectName(QString::fromUtf8("scrollArea_14"));
        scrollArea_14->setFrameShape(QFrame::NoFrame);
        scrollArea_14->setWidgetResizable(true);
        scrollAreaWidgetContents_14 = new QWidget();
        scrollAreaWidgetContents_14->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_14"));
        scrollAreaWidgetContents_14->setGeometry(QRect(0, 0, 88, 703));
        verticalLayout_79 = new QVBoxLayout(scrollAreaWidgetContents_14);
        verticalLayout_79->setSpacing(6);
        verticalLayout_79->setObjectName(QString::fromUtf8("verticalLayout_79"));
        verticalLayout_79->setContentsMargins(6, 6, 6, 6);
        lblAutoLayerDescr = new QLabel(scrollAreaWidgetContents_14);
        lblAutoLayerDescr->setObjectName(QString::fromUtf8("lblAutoLayerDescr"));
        lblAutoLayerDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblAutoLayerDescr->setWordWrap(true);
        lblAutoLayerDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_79->addWidget(lblAutoLayerDescr);

        scrollArea_14->setWidget(scrollAreaWidgetContents_14);

        verticalLayout_78->addWidget(scrollArea_14);


        verticalLayout_80->addWidget(groupBox_30);

        stackedWidget->addWidget(pageAutoLayer);
        pagePictureZonesLayer = new QWidget();
        pagePictureZonesLayer->setObjectName(QString::fromUtf8("pagePictureZonesLayer"));
        verticalLayout_50 = new QVBoxLayout(pagePictureZonesLayer);
        verticalLayout_50->setSpacing(0);
        verticalLayout_50->setObjectName(QString::fromUtf8("verticalLayout_50"));
        verticalLayout_50->setContentsMargins(0, 0, 0, 0);
        groupBox_31 = new QGroupBox(pagePictureZonesLayer);
        groupBox_31->setObjectName(QString::fromUtf8("groupBox_31"));
        verticalLayout_27 = new QVBoxLayout(groupBox_31);
        verticalLayout_27->setSpacing(0);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        scrollArea_15 = new QScrollArea(groupBox_31);
        scrollArea_15->setObjectName(QString::fromUtf8("scrollArea_15"));
        scrollArea_15->setFrameShape(QFrame::NoFrame);
        scrollArea_15->setWidgetResizable(true);
        scrollAreaWidgetContents_15 = new QWidget();
        scrollAreaWidgetContents_15->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_15"));
        scrollAreaWidgetContents_15->setGeometry(QRect(0, 0, 88, 1855));
        verticalLayout_81 = new QVBoxLayout(scrollAreaWidgetContents_15);
        verticalLayout_81->setSpacing(6);
        verticalLayout_81->setObjectName(QString::fromUtf8("verticalLayout_81"));
        verticalLayout_81->setContentsMargins(6, 6, 6, 6);
        lblPictureZonesLayerDescr = new QLabel(scrollAreaWidgetContents_15);
        lblPictureZonesLayerDescr->setObjectName(QString::fromUtf8("lblPictureZonesLayerDescr"));
        lblPictureZonesLayerDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblPictureZonesLayerDescr->setWordWrap(true);
        lblPictureZonesLayerDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_81->addWidget(lblPictureZonesLayerDescr);

        scrollArea_15->setWidget(scrollAreaWidgetContents_15);

        verticalLayout_27->addWidget(scrollArea_15);


        verticalLayout_50->addWidget(groupBox_31);

        optPictureZonesLayer = new QGroupBox(pagePictureZonesLayer);
        optPictureZonesLayer->setObjectName(QString::fromUtf8("optPictureZonesLayer"));
        formLayout_13 = new QFormLayout(optPictureZonesLayer);
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        label_5 = new QLabel(optPictureZonesLayer);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        rectangularAreasSensitivityValue = new QSpinBox(optPictureZonesLayer);
        rectangularAreasSensitivityValue->setObjectName(QString::fromUtf8("rectangularAreasSensitivityValue"));
        rectangularAreasSensitivityValue->setMinimum(1);
        rectangularAreasSensitivityValue->setMaximum(100);
        rectangularAreasSensitivityValue->setValue(100);

        horizontalLayout_8->addWidget(rectangularAreasSensitivityValue);


        formLayout_13->setLayout(0, QFormLayout::FieldRole, horizontalLayout_8);


        verticalLayout_50->addWidget(optPictureZonesLayer);

        stackedWidget->addWidget(pagePictureZonesLayer);
        pageForegroundLayer = new QWidget();
        pageForegroundLayer->setObjectName(QString::fromUtf8("pageForegroundLayer"));
        verticalLayout_45 = new QVBoxLayout(pageForegroundLayer);
        verticalLayout_45->setSpacing(0);
        verticalLayout_45->setObjectName(QString::fromUtf8("verticalLayout_45"));
        verticalLayout_45->setContentsMargins(0, 0, 0, 0);
        groupBox_16 = new QGroupBox(pageForegroundLayer);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        verticalLayout_22 = new QVBoxLayout(groupBox_16);
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        scrollArea_10 = new QScrollArea(groupBox_16);
        scrollArea_10->setObjectName(QString::fromUtf8("scrollArea_10"));
        scrollArea_10->setFrameShape(QFrame::NoFrame);
        scrollArea_10->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 419, 321));
        verticalLayout_73 = new QVBoxLayout(scrollAreaWidgetContents_10);
        verticalLayout_73->setSpacing(6);
        verticalLayout_73->setObjectName(QString::fromUtf8("verticalLayout_73"));
        verticalLayout_73->setContentsMargins(6, 6, 6, 6);
        lblForegroundLayerDescr = new QLabel(scrollAreaWidgetContents_10);
        lblForegroundLayerDescr->setObjectName(QString::fromUtf8("lblForegroundLayerDescr"));
        lblForegroundLayerDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblForegroundLayerDescr->setWordWrap(true);
        lblForegroundLayerDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_73->addWidget(lblForegroundLayerDescr);

        scrollArea_10->setWidget(scrollAreaWidgetContents_10);

        verticalLayout_22->addWidget(scrollArea_10);


        verticalLayout_45->addWidget(groupBox_16);

        optGeneral_2 = new QGroupBox(pageForegroundLayer);
        optGeneral_2->setObjectName(QString::fromUtf8("optGeneral_2"));
        formLayout_4 = new QFormLayout(optGeneral_2);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        cbForegroundLayerSeparateControl = new QCheckBox(optGeneral_2);
        cbForegroundLayerSeparateControl->setObjectName(QString::fromUtf8("cbForegroundLayerSeparateControl"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, cbForegroundLayerSeparateControl);


        verticalLayout_45->addWidget(optGeneral_2);

        stackedWidget->addWidget(pageForegroundLayer);
        pageFillZones = new QWidget();
        pageFillZones->setObjectName(QString::fromUtf8("pageFillZones"));
        verticalLayout_53 = new QVBoxLayout(pageFillZones);
        verticalLayout_53->setSpacing(0);
        verticalLayout_53->setObjectName(QString::fromUtf8("verticalLayout_53"));
        verticalLayout_53->setContentsMargins(0, 0, 0, 0);
        groupBox_40 = new QGroupBox(pageFillZones);
        groupBox_40->setObjectName(QString::fromUtf8("groupBox_40"));
        verticalLayout_30 = new QVBoxLayout(groupBox_40);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(6, 6, 6, 6);
        lblFillZonesDescr = new QLabel(groupBox_40);
        lblFillZonesDescr->setObjectName(QString::fromUtf8("lblFillZonesDescr"));
        lblFillZonesDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblFillZonesDescr->setWordWrap(true);
        lblFillZonesDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_30->addWidget(lblFillZonesDescr);


        verticalLayout_53->addWidget(groupBox_40);

        optFillZones = new QGroupBox(pageFillZones);
        optFillZones->setObjectName(QString::fromUtf8("optFillZones"));
        formLayout_16 = new QFormLayout(optFillZones);
        formLayout_16->setObjectName(QString::fromUtf8("formLayout_16"));

        verticalLayout_53->addWidget(optFillZones);

        stackedWidget->addWidget(pageFillZones);
        pageDewarping = new QWidget();
        pageDewarping->setObjectName(QString::fromUtf8("pageDewarping"));
        verticalLayout_54 = new QVBoxLayout(pageDewarping);
        verticalLayout_54->setSpacing(0);
        verticalLayout_54->setObjectName(QString::fromUtf8("verticalLayout_54"));
        verticalLayout_54->setContentsMargins(0, 0, 0, 0);
        groupBox_42 = new QGroupBox(pageDewarping);
        groupBox_42->setObjectName(QString::fromUtf8("groupBox_42"));
        verticalLayout_31 = new QVBoxLayout(groupBox_42);
        verticalLayout_31->setSpacing(0);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        scrollArea_19 = new QScrollArea(groupBox_42);
        scrollArea_19->setObjectName(QString::fromUtf8("scrollArea_19"));
        scrollArea_19->setFrameShape(QFrame::NoFrame);
        scrollArea_19->setWidgetResizable(true);
        scrollAreaWidgetContents_19 = new QWidget();
        scrollAreaWidgetContents_19->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_19"));
        scrollAreaWidgetContents_19->setGeometry(QRect(0, 0, 419, 308));
        verticalLayout_92 = new QVBoxLayout(scrollAreaWidgetContents_19);
        verticalLayout_92->setObjectName(QString::fromUtf8("verticalLayout_92"));
        verticalLayout_92->setContentsMargins(6, 6, 6, 6);
        lblDewarpingDescr = new QLabel(scrollAreaWidgetContents_19);
        lblDewarpingDescr->setObjectName(QString::fromUtf8("lblDewarpingDescr"));
        lblDewarpingDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDewarpingDescr->setWordWrap(true);
        lblDewarpingDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_92->addWidget(lblDewarpingDescr);

        scrollArea_19->setWidget(scrollAreaWidgetContents_19);

        verticalLayout_31->addWidget(scrollArea_19);


        verticalLayout_54->addWidget(groupBox_42);

        optDewarping = new QGroupBox(pageDewarping);
        optDewarping->setObjectName(QString::fromUtf8("optDewarping"));
        formLayout_17 = new QFormLayout(optDewarping);
        formLayout_17->setObjectName(QString::fromUtf8("formLayout_17"));
        cbTryVertHalfCorrection = new QCheckBox(optDewarping);
        cbTryVertHalfCorrection->setObjectName(QString::fromUtf8("cbTryVertHalfCorrection"));

        formLayout_17->setWidget(0, QFormLayout::LabelRole, cbTryVertHalfCorrection);

        cbTryDeskewAfterDewarp = new QCheckBox(optDewarping);
        cbTryDeskewAfterDewarp->setObjectName(QString::fromUtf8("cbTryDeskewAfterDewarp"));

        formLayout_17->setWidget(1, QFormLayout::LabelRole, cbTryDeskewAfterDewarp);


        verticalLayout_54->addWidget(optDewarping);

        stackedWidget->addWidget(pageDewarping);
        pageDespeckling = new QWidget();
        pageDespeckling->setObjectName(QString::fromUtf8("pageDespeckling"));
        verticalLayout_33 = new QVBoxLayout(pageDespeckling);
        verticalLayout_33->setSpacing(0);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        groupBox_44 = new QGroupBox(pageDespeckling);
        groupBox_44->setObjectName(QString::fromUtf8("groupBox_44"));
        verticalLayout_32 = new QVBoxLayout(groupBox_44);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(6, 6, 6, 6);
        lblDespecklingDescr = new QLabel(groupBox_44);
        lblDespecklingDescr->setObjectName(QString::fromUtf8("lblDespecklingDescr"));
        lblDespecklingDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDespecklingDescr->setWordWrap(true);
        lblDespecklingDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_32->addWidget(lblDespecklingDescr);


        verticalLayout_33->addWidget(groupBox_44);

        optDespeckling = new QGroupBox(pageDespeckling);
        optDespeckling->setObjectName(QString::fromUtf8("optDespeckling"));
        formLayout_18 = new QFormLayout(optDespeckling);
        formLayout_18->setObjectName(QString::fromUtf8("formLayout_18"));
        despecklingDefaultsLabel = new QLabel(optDespeckling);
        despecklingDefaultsLabel->setObjectName(QString::fromUtf8("despecklingDefaultsLabel"));

        formLayout_18->setWidget(2, QFormLayout::LabelRole, despecklingDefaultsLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        despecklingDefaultsValue = new QComboBox(optDespeckling);
        despecklingDefaultsValue->setObjectName(QString::fromUtf8("despecklingDefaultsValue"));

        horizontalLayout_3->addWidget(despecklingDefaultsValue);


        formLayout_18->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);


        verticalLayout_33->addWidget(optDespeckling);

        stackedWidget->addWidget(pageDespeckling);
        pageOutputMetadata = new QWidget();
        pageOutputMetadata->setObjectName(QString::fromUtf8("pageOutputMetadata"));
        verticalLayout_94 = new QVBoxLayout(pageOutputMetadata);
        verticalLayout_94->setObjectName(QString::fromUtf8("verticalLayout_94"));
        groupBox_45 = new QGroupBox(pageOutputMetadata);
        groupBox_45->setObjectName(QString::fromUtf8("groupBox_45"));
        verticalLayout_93 = new QVBoxLayout(groupBox_45);
        verticalLayout_93->setSpacing(6);
        verticalLayout_93->setObjectName(QString::fromUtf8("verticalLayout_93"));
        verticalLayout_93->setContentsMargins(6, 6, 6, 6);
        lblDespecklingDescr_2 = new QLabel(groupBox_45);
        lblDespecklingDescr_2->setObjectName(QString::fromUtf8("lblDespecklingDescr_2"));
        lblDespecklingDescr_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDespecklingDescr_2->setWordWrap(true);
        lblDespecklingDescr_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_93->addWidget(lblDespecklingDescr_2);


        verticalLayout_94->addWidget(groupBox_45);

        optDespeckling_2 = new QGroupBox(pageOutputMetadata);
        optDespeckling_2->setObjectName(QString::fromUtf8("optDespeckling_2"));
        verticalLayout_95 = new QVBoxLayout(optDespeckling_2);
        verticalLayout_95->setObjectName(QString::fromUtf8("verticalLayout_95"));
        cbCopyICCProfile = new QCheckBox(optDespeckling_2);
        cbCopyICCProfile->setObjectName(QString::fromUtf8("cbCopyICCProfile"));

        verticalLayout_95->addWidget(cbCopyICCProfile);


        verticalLayout_94->addWidget(optDespeckling_2);

        stackedWidget->addWidget(pageOutputMetadata);
        pageDebugMode = new QWidget();
        pageDebugMode->setObjectName(QString::fromUtf8("pageDebugMode"));
        verticalLayout_4 = new QVBoxLayout(pageDebugMode);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(pageDebugMode);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_9 = new QVBoxLayout(groupBox_5);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(groupBox_5);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 103, 1394));
        verticalLayout_59 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_59->setSpacing(6);
        verticalLayout_59->setObjectName(QString::fromUtf8("verticalLayout_59"));
        verticalLayout_59->setContentsMargins(6, 6, 6, 6);
        lblDebugModeDescr = new QLabel(scrollAreaWidgetContents_3);
        lblDebugModeDescr->setObjectName(QString::fromUtf8("lblDebugModeDescr"));
        lblDebugModeDescr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDebugModeDescr->setWordWrap(true);
        lblDebugModeDescr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_59->addWidget(lblDebugModeDescr);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_9->addWidget(scrollArea_3);


        verticalLayout_4->addWidget(groupBox_5);

        stackedWidget->addWidget(pageDebugMode);
        splitter->addWidget(stackedWidget);

        verticalLayout->addWidget(splitter);

        line = new QFrame(SettingsDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SettingsDialog);

        stackedWidget->setCurrentIndex(29);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        actionExpand_all->setText(QCoreApplication::translate("SettingsDialog", "Expand all", nullptr));
        actionCollapse_all->setText(QCoreApplication::translate("SettingsDialog", "Collapse all", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("SettingsDialog", "Enabled", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SettingsDialog", "Features", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("SettingsDialog", "Filter", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblGeneralDescr->setText(QCoreApplication::translate("SettingsDialog", "Application language - allows to switch the language of the interface. If there is no language you need and you can help us with translation please contact the project maintainer.\n"
"\n"
"Batch processing - a simple dialog that appears if you press the launch button and allows you to start page processing from the beginning instead of a current page.\n"
"\n"
"You can add new images (for ex. missing pages) after project is created with Insert new image command in thumbnails context menu. Images that already in the project may be filtered out in file selection dialog automatically. But this require non-native dialog implementation which may look unusual and lack some platform features. You can turn option \"Filter existing files in insert new image dialog\" off and stick to usage of native dialog. But filtering existing images is not guaranteed in this case.", nullptr));
        optGeneral->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "Application language:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingsDialog", "Batch processing", nullptr));
        startBatchProcessingDlgAllPages->setText(QCoreApplication::translate("SettingsDialog", "All pages", nullptr));
        startBatchProcessingDlgFromSelected->setText(QCoreApplication::translate("SettingsDialog", "Start from selected", nullptr));
        showStartBatchProcessingDlg->setText(QCoreApplication::translate("SettingsDialog", "Ask every time", nullptr));
        cbDontUseNativeDlg->setText(QCoreApplication::translate("SettingsDialog", "Filter existing files in insert new image dialog", nullptr));
        lblStyle->setText(QCoreApplication::translate("SettingsDialog", "Application style:", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsDialog", "Application stylesheet:", nullptr));
        btnResetHotKeys->setText(QCoreApplication::translate("SettingsDialog", "&Reset to defaults", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblDockingDescr->setText(QCoreApplication::translate("SettingsDialog", "If docking is enabled the Filters and Thumbnails panels could be pop out from their positions (left and right sides of the ain application window) and float over page view one. Once pop out they could be placed back by double clicking panel's title or pressing an icon on it (icon might be not displayable of your system).\n"
"This option allows to increase page view panel size to almost a whole application window size which may be useful in some cases.", nullptr));
        groupBox_19->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblThumbnailsDescr->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>These settings should let you fine tune thumbnails display. By default thumbnails are added one after each other in rows, so if you change width of the thumbnails view you can get &quot;multicolumn&quot;-like style. Still you should remember that this is a list and not a grid alignment. Thus in case of different sizes of thumbnails equal spaces between &quot;columns&quot; are not guaranteed as well as equal number of thumbnails in each row. Disable first check-box to stay with single-column mode even if width of the view allows to display more.</p><p>By default you can use Alt+mouse wheel to change max size of thumbnails in the list. The key could be changed in hotkey manager. Mouse cursor should be other the thumbnails view. Thumbnails are automatically scaled to max size keeping their proportions. Switch off this mode and define fixed size (160x250 is recommended) if needed.</p><p>Even if you increase max size of thumbnails to some big values you want be able to find small details on th"
                        "em due to pure quality of the image. That's because they are cached after scaling to size 200x200 pixels. You can change this to 600x600 or 1200x1200 to increase thumbnail quality. Note: this affects only newly created thumbnails. If you already have them cached you'll need to delete cache subfolder in project folder manually to regenerate them.</p><p>All thumbnails have minimal margin between them and left/top borders of the view. It could be changed.</p><p>Thumbnail size is defined as a size of thumbnail image with boundary adjustments around it. These adjustments could be tuned here too.</p><p>Note: currently final boundary of the thumbnails could be affected by too long filenames displayed below them.</p><p><br/></p><p>In case of any problems use reset button which reset thumbnail settings only to their defaults.</p></body></html>", nullptr));
        grpThumbnailsViewOptions->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        cbThumbsListOrder->setText(QCoreApplication::translate("SettingsDialog", "Place as many thumbnails in a row as possible", nullptr));
        gbFixedMaxLogicalThumbSize->setTitle(QCoreApplication::translate("SettingsDialog", "Use fixed max thumbnail size", nullptr));
        lblFixedMaxLogicalThumbSizeHeight->setText(QCoreApplication::translate("SettingsDialog", "Height:", nullptr));
        sbFixedMaxLogicalThumbSizeHeight->setSuffix(QCoreApplication::translate("SettingsDialog", " px", nullptr));
        lblFixedMaxLogicalThumbSizeWidth->setText(QCoreApplication::translate("SettingsDialog", "Width:", nullptr));
        sbFixedMaxLogicalThumbSizeWidth->setSuffix(QCoreApplication::translate("SettingsDialog", " px", nullptr));
        lblThumbsCacheSize->setText(QCoreApplication::translate("SettingsDialog", "Scale cached images to this size:", nullptr));
        sbThumbsCacheImgSize->setSuffix(QCoreApplication::translate("SettingsDialog", " px", nullptr));
        lblThumbsMinSpacing->setText(QCoreApplication::translate("SettingsDialog", "Minimal space between images:", nullptr));
        sbThumbsMinSpacing->setSuffix(QCoreApplication::translate("SettingsDialog", " px", nullptr));
        gbThumbsBoundaryAdj->setTitle(QCoreApplication::translate("SettingsDialog", "Thumbnail boundary adjustments:", nullptr));
        lblThumbsBoundaryAdjTop->setText(QCoreApplication::translate("SettingsDialog", "Top:", nullptr));
        sbThumbsBoundaryAdjLeft->setSuffix(QCoreApplication::translate("SettingsDialog", " px", nullptr));
        lblThumbsBoundaryAdjLeft->setText(QCoreApplication::translate("SettingsDialog", "Left:", nullptr));
        sbThumbsBoundaryAdjTop->setSuffix(QCoreApplication::translate("SettingsDialog", " px", nullptr));
        lblThumbsBoundaryAdjBottom->setText(QCoreApplication::translate("SettingsDialog", "Bottom:", nullptr));
        sbThumbsBoundaryAdjBottom->setSuffix(QCoreApplication::translate("SettingsDialog", " px", nullptr));
        lblThumbsBoundaryAdjRight->setText(QCoreApplication::translate("SettingsDialog", "Right:", nullptr));
        sbThumbsBoundaryAdjRight->setSuffix(QCoreApplication::translate("SettingsDialog", " px", nullptr));
        btnThumbDefaults->setText(QCoreApplication::translate("SettingsDialog", "&Reset", nullptr));
        cbOrderHints->setText(QCoreApplication::translate("SettingsDialog", "Display hints under pages if order isn't natural", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblAutoSaveProjectDescr->setText(QCoreApplication::translate("SettingsDialog", "Allows to automatically save project file (*.scantailor) with a specified time interval.\n"
"If project was never saved before this will create UnnamedAutoSave.Scantailor file in project's input directory. Otherwise project file will be backed up to *.bak file in the its folder and then overwritten with current project state.", nullptr));
        optAutoSaveProject->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        label_4->setText(QCoreApplication::translate("SettingsDialog", "Save project every:", nullptr));
        sbSavePeriod->setSuffix(QCoreApplication::translate("SettingsDialog", " min.", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblTiffDescr->setText(QCoreApplication::translate("SettingsDialog", "Once all processing stages are complete the resulting images are saved in \"./out\" sub-folder of your project input folder in TIFF format. TIFF format supports dozens of image compression methods from None to JPEG. Default is LZW. Stick to it till you are sure you need something different.\n"
"\n"
"Availability of compression methods depends on their support in libtiff and options used to build it. So not all methods are available. Also some could be used with black/white images only.\n"
"\n"
"Horizontal differencing predictor - a preprocessing step applied to image data that might improve compression rate. Only few compression methods are benefit from this. In particular - LZW.", nullptr));
        optTiffCompression->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        lblTifCompressionBw->setText(QCoreApplication::translate("SettingsDialog", "TIFF compression (b/w):", nullptr));
        lblTifCompressionColor->setText(QCoreApplication::translate("SettingsDialog", "TIFF compression (non b/w):", nullptr));
        cbTiffFilter->setText(QCoreApplication::translate("SettingsDialog", "Hide rare or unsupported methods", nullptr));
        useHorizontalPredictor->setText(QCoreApplication::translate("SettingsDialog", "Use horizontal differencing predictor", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblFixOrientationDescr->setText(QCoreApplication::translate("SettingsDialog", "At this stage it is possible to turn scans by multiples of 90 degrees. i.e., to correct sideways or upside-down scans.\n"
"\n"
"This is a manual stage because the program does not know how to determine the correct orientation of scans - the user must do this. This also means that using batch processing at this stage is useless. Obviously it behooves the user to make sure all initial scans are of the same orientation, if possible; mixing orientation will make this stage less automatic and more time-consuming.\n"
"\n"
"Use \"Apply To...\" dialog to apply changes to a specified range of pages.", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblSplitPagesDescr->setText(QCoreApplication::translate("SettingsDialog", "This stage determines whether you want to divide the page(s).\n"
"Type of division:\n"
"\n"
"\342\200\242 One complete scan, without any parts of the next page. These scans are usually obtained from specialized book scanners or photographs.\n"
"\342\200\242 One scan, which hits part of the next page.\n"
"\342\200\242 Twin scan.\n"
"\n"
"The type of division is determined automatically, but can be set manually. If image width twice bigger than image height it's treated as a scan of two-pages. Use the \"Change ...\", to manually set. The type of division can be applied to all pages at once or individual pages.\n"
"\n"
"The dividing line can also be determined/moved automatically or specified manually, but it can not be applied to other pages unless Apply cut mode is on. It is useful to quickly check out the preview pane of each page to ensure the page splits have been correctly applied - sometimes images in pages can affect the split operation.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblApplyCutDescr->setText(QCoreApplication::translate("SettingsDialog", "If this feature is enabled the application shows \"Apply cut\" check box in \"Apply to...\" dialog at Split pages stage. In case it's checked the application tries to copy dividing lines position to the specified page range. In case target page size mismatch the original page the dividing line position will be scaled.", nullptr));
        optApplyCut->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        label_3->setText(QCoreApplication::translate("SettingsDialog", "Switched on by default:", nullptr));
        cbApplyCutDefault->setText(QString());
        groupBox_9->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblDeskewDescr->setText(QCoreApplication::translate("SettingsDialog", "At this stage one may determine the angle which the page needs to be turned for the text to be properly horizontal. Since compensation is a simple rotation such distortions as keystone or curling can not be corrected at this stage. The rotation angle is determined automatically, but you can also set it manually.\n"
"\n"
"Images can be rotated by dragging the round handles at the edges. You can also explicitly specify the rotation angle in degrees. Positive angles will rotate the image clockwise, negative counter-clockwise. For fine adjustment of the angle it may be convenient to click the mouse on the text portion of the input field corner, then move the mouse wheel to fix it.", nullptr));
        label_11->setText(QString());
        label_12->setText(QCoreApplication::translate("SettingsDialog", "Grid and lines color:", nullptr));
#if QT_CONFIG(tooltip)
        btnColorDeskew->setToolTip(QCoreApplication::translate("SettingsDialog", "Click to change color", nullptr));
#endif // QT_CONFIG(tooltip)
        btnColorDeskew->setText(QString());
#if QT_CONFIG(tooltip)
        btnColorDeskewReset->setToolTip(QCoreApplication::translate("SettingsDialog", "Reset color to default", nullptr));
#endif // QT_CONFIG(tooltip)
        btnColorDeskewReset->setText(QString());
        groupBox_11->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblDeviantDeskewDescr->setText(QCoreApplication::translate("SettingsDialog", "If enabled - marks deviant pages with red asterisks in Thumbnails panel.\n"
"The Deviant page on this stage is defined as a page which absolute deskew angle value is bigger than specified in command line (5 degrees by default) or differs from average angle more than 1.5 standard deviations. Average angle and standard deviation are statistical measurements calculated based on all pages.", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblSelectContentDescr->setText(QCoreApplication::translate("SettingsDialog", "This stage determines the rectangular region with \"useful\" or usable content (shaded in color). Why do we need to define this area? Firstly in order to determine the page size to the output. The content will be added to the total margin area, and the outer limit of these margins affects the size of the output file. Secondly so that the final images don't show the line of fold or other debris from the edges. Strictly speaking whether the debris falls in the margin in the output stage depends on the mode. In most modes the margin is filled in white.\n"
"\n"
"If areas are identified incorrectly, you can tweak individual pages manually by setting the mouse pointer over the edge, clicking & dragging as needed. Check Hotkeys manager for a list of all possible operations. Occasionally Scan Tailor may find non-existent content or conversely not select content where it should. In this case, you can manually create / delete a region by right-clicking on the image, and select the appropriate menu item.", nullptr));
        label_9->setText(QString());
        label_10->setText(QCoreApplication::translate("SettingsDialog", "Content zone highlight color:", nullptr));
#if QT_CONFIG(tooltip)
        btnColorSelectedContent->setToolTip(QCoreApplication::translate("SettingsDialog", "Click to change color", nullptr));
#endif // QT_CONFIG(tooltip)
        btnColorSelectedContent->setText(QString());
#if QT_CONFIG(tooltip)
        btnColorSelectedContentReset->setToolTip(QCoreApplication::translate("SettingsDialog", "Reset color to default", nullptr));
#endif // QT_CONFIG(tooltip)
        btnColorSelectedContentReset->setText(QString());
        groupBox_13->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblDeviantContentDescr->setText(QCoreApplication::translate("SettingsDialog", "If enabled - marks deviant pages with red asterisks in Thumbnails panel.\n"
"The Deviant page on this stage is defined as a page which content zone square differs from average square more than 1.0 standard deviation. Factor 1.0 may be changed via command line. Average square and standard deviation are statistical measurements calculated based on all pages.", nullptr));
        groupBox_18->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblPageDetectontDescr->setText(QCoreApplication::translate("SettingsDialog", "By default application tries to find a content area on whole page. But sometimes user have an scan bigger than page. This could happen if you scan whole possible scanner area even if your pages are smaller than it. In this case you might end up with a big image with huge black borders. If page detection is enabled the application tries to find a real page area in image before content area detection. In case of success the content area is searched inside area found only. Technically it preprocess image to excludes black borders from page area. The following enhancements could be applied (in order they're listed):\n"
"\n"
"Fine tune page corners - move corners of detected page area towards the center of page while the corner pixel won't be non black.\n"
"\n"
"Page detection target size - you may specify real physical size of a single page if it's known. Application will choose a best matching it page area in case there will be several alternatives.\n"
"\n"
"Page borders - after page area is found this will decre"
                        "ase it by given borders.\n"
"\n"
"Everything outside page area is highlighted with yellow in page view panel.", nullptr));
        optPageDetecton->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        gbPageDetectionFineTuneCorners->setTitle(QCoreApplication::translate("SettingsDialog", "Fine tune page corners:", nullptr));
        cbPageDetectionFineTuneCorners->setText(QCoreApplication::translate("SettingsDialog", "Default value for page: enabled", nullptr));
        gbPageDetectionTargetSize->setTitle(QCoreApplication::translate("SettingsDialog", "Target page size in MM:", nullptr));
        label_17->setText(QCoreApplication::translate("SettingsDialog", "Width:", nullptr));
        label_18->setText(QCoreApplication::translate("SettingsDialog", "Height:", nullptr));
        gbPageDetectionBorders->setTitle(QCoreApplication::translate("SettingsDialog", "Default borders in MM:", nullptr));
        label_13->setText(QCoreApplication::translate("SettingsDialog", "Left:", nullptr));
        label_14->setText(QCoreApplication::translate("SettingsDialog", "Top:", nullptr));
        label_15->setText(QCoreApplication::translate("SettingsDialog", "Right:", nullptr));
        label_16->setText(QCoreApplication::translate("SettingsDialog", "Bottom:", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblPageLayoutDescr->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>At this stage you may adjust the margins added to the content box. There are <span style=\" font-weight:600;\">two types of margins</span> - hard and soft.</p><p><span style=\" font-weight:600;\">Hard margin</span> - is that between the solid lines. They are set by the user. You can either move over any solid line, be it an inner or outer edge, or set the margins through numerical values.</p><p><span style=\" font-weight:600;\">Soft margin</span> - is that between the solid and the dotted line. These margins are <span style=\" text-decoration: underline;\">automatically</span> added to bring the page size to the same size of other pages. If you see a dotted line - this means that somewhere in the project there is a page with that width (usable area of Hard + margin), and (possibly others) with that height. This is one big page causing the soft margins in all the other pages, if only for not leveling them off.</p><p><span style=\" font-weight:600;\">Alignment</span> defines how to align co"
                        "ntent zone with its hard margins by changing soft margins. It could be: manual, auto-magnet and original proportions (last two are optional features).</p></body></html>", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblDeviantMarginsDescr->setText(QCoreApplication::translate("SettingsDialog", "If enabled - marks deviant pages with red asterisks in Thumbnails panel.\n"
"The Deviant page on this stage is defined as a page which has no alignment.", nullptr));
        groupBox_22->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblMarginsDescr->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Here you can set default <span style=\" font-weight:600;\">&quot;hard margins&quot;</span> values for <span style=\" font-weight:600;\">top, left, right</span> and <span style=\" font-weight:600;\">bottom</span> sides.</p><p><span style=\" font-weight:600;\">Auto margins</span> let you automatically calculate margin values for content area so their combined size will match page size. Page area is usually equal to image area (after page splitting and deskew) but could be affected with optional page detection feature on content selection stage.</p><p>Note: Even if you apply auto margins to all pages in project that doesn't guarantee that all content rects plus corresponding hard margins will result to the same size. Thus in case of &quot;Match with other pages&quot; enabled you'll get some <span style=\" font-weight:600;\">soft margins</span> that should be addressed with help of Alignment. There could be many reasons of page size mismatch: different size of original scans, different page s"
                        "plitting, page geometry change after deskew or distinction in page detection results.</p></body></html>", nullptr));
        optMargins->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        gbDefaultMarginsValues->setTitle(QCoreApplication::translate("SettingsDialog", "Default values:", nullptr));
        cbMarginUnits->setItemText(0, QCoreApplication::translate("SettingsDialog", "Millimeters (mm)", nullptr));
        cbMarginUnits->setItemText(1, QCoreApplication::translate("SettingsDialog", "Inches (in)", nullptr));

#if QT_CONFIG(statustip)
        marginDefaultTopVal->setStatusTip(QCoreApplication::translate("SettingsDialog", "Top", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        marginDefaultLeftVal->setStatusTip(QCoreApplication::translate("SettingsDialog", "Left", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        marginDefaultRightVal->setStatusTip(QCoreApplication::translate("SettingsDialog", "Right", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        marginDefaultBottomVal->setStatusTip(QCoreApplication::translate("SettingsDialog", "Bottom", nullptr));
#endif // QT_CONFIG(statustip)
        gbMarginsAuto->setTitle(QCoreApplication::translate("SettingsDialog", "Auto margins", nullptr));
        cbMarginsAuto->setText(QCoreApplication::translate("SettingsDialog", "Switched on for page by default", nullptr));
        gmAlignmentDescr->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblAlignmentDescr->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Alignment setting has no sense if &quot;Match with other pages&quot; is switched off. In this case final size for all pages is calculated separately and equal to content one plus its hard margins.</p><p><span style=\" font-weight:600;\">Alignment</span> defines how to align content zone with its hard margins by changing soft margins. It could be combination of values of following alignment types: manual, auto-magnet and original proportions (last two are optional features).</p><p><span style=\" font-weight:600;\">Manual alignment</span> is always available to user and allows him to choose the page side (top, left etc.), page corner (top-left, bottom-right etc.) where soft margins will be set to 0. In case of hard margins are zero for such side this means content zone will touch page border. It also allows to center content zone on page horizontally, vertically or both.</p><p><span style=\" font-weight:600;\">Auto-Magnet alignment</span> (just Auto in other version of ST) is very similar t"
                        "o Manual mode. In fact - it automatically chooses one of Manual mode options based on how close original content zone to page borders. I would say content zone is magnetized to the closest side or corner of page or to its center. This type of alignment is optional.</p><p><span style=\" font-style:italic;\">Note</span>: in case Original Proportions alignment is enabled then Auto-Magnet considers it as one of options and may choose it automatically for vertical/horizontal alignment or both.</p><p><span style=\" font-weight:600;\">Original Proportions alignment</span> (based on Original alignment in other versions of ST) distributes soft margins proportionally to space around content zone on original page. For example, if your content on left pages of document is closer to right border of page and content on right pages is closer to left border of page and you want to keep this alignment for left/right pages in a result you'll face some problems. Because due to different dpi, scan size, splits or deskew angle you"
                        "r page most probably will have a slightly different sizes. And thus even if you set auto-margins or manually set unequal hard margins for left/right pages you'll end up with non-zero soft margins (unless you switch off &quot;Match with other pages&quot; and all your pages final sizes will be different). Or this could happen if you have cover page in your project and want all page sizes be equal - cover pages may be bigger than other pages. Anyway you'll end up with necessity to distribute non-zero soft margins. Original proportions alignment may do it for you automatically proportionally to your content zone original position on page. This type of alignment is optional.</p><p><span style=\" font-style:italic;\">Note</span>: Original proportions alignment is done for content zone with its hard margins around, while position proportions are calculated without considering hard margin values.</p><p><span style=\" font-style:italic;\">Note</span>: Original proportions mode considers page size after its refinement b"
                        "y Page Detection feature (if enabled) on previous processing step.</p><p><span style=\" font-style:italic;\">Note</span>: Final alignment is a sum of horizontal and vertical alignments (or one may say alignment by height and by width). There is a way to define them separately even for different types of alignment. For example: auto-magnet horizontally and original proportions vertically. Or original proportions horizontally and align to top border vertically.</p></body></html>", nullptr));
        optAlignment->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        cbAlignmentAuto->setText(QCoreApplication::translate("SettingsDialog", "Auto-Magnet alignment", nullptr));
        cbAlignmentOriginal->setText(QCoreApplication::translate("SettingsDialog", "Original proportions alignment", nullptr));
        gbAlignmentWidget->setTitle(QCoreApplication::translate("SettingsDialog", "Default values:", nullptr));
#if QT_CONFIG(tooltip)
        lblSelectedAlignment->setToolTip(QCoreApplication::translate("SettingsDialog", "Description of currently selected alignment", nullptr));
#endif // QT_CONFIG(tooltip)
        lblSelectedAlignment->setText(QCoreApplication::translate("SettingsDialog", "Selected alignment", nullptr));
        groupBox_26->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblOutputDescr->setText(QCoreApplication::translate("SettingsDialog", "At this stage the output files are created from the images and written to the disk. The resultant images also appear in the central window of the program.\n"
"\n"
"Unlike the other stages, the \"Output\" stage becomes available only after all page pass the stages of \"Select Content\" and \"Page Layout\". This is because the size of pages in the output depend on each other. Say if it found a big page, then all the other fields are increasing (more is described in the documentation on the Page Layout stage). Therefore it is important to know the final size of pages, and it can only be done through the stages of \"Select Content\" and \"Page Layout\".", nullptr));
        optOutput->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        dpiDefaultLabel->setText(QCoreApplication::translate("SettingsDialog", "Default DPI:", nullptr));
        ThresholdMinMaxLabel->setText(QCoreApplication::translate("SettingsDialog", "Threshold control diapason:", nullptr));
        ThresholdMinLabel->setText(QCoreApplication::translate("SettingsDialog", "Min.:", nullptr));
        ThresholdMaxLabel->setText(QCoreApplication::translate("SettingsDialog", "Max.:", nullptr));
        ThresholdDefaultsLabel->setText(QCoreApplication::translate("SettingsDialog", "Default threshold value:", nullptr));
        originalPageDisplayOnKeyHold->setText(QCoreApplication::translate("SettingsDialog", "Hold spacebar to display original page", nullptr));
        groupBox_27->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblBlackWhiteModeDescr->setText(QCoreApplication::translate("SettingsDialog", "Black and White is not suitable for any images and some drawings. There is an option to \"despeckle\", and to increase or decrease the line thickness (i.e. of the text). In general it is best to not despeckle if the image is reasonably clean as despeckling can result in the loss of some portions of text. This may be compensated for to a degree by increasing the line thickness but it's probably important to experiment on a few pages before applying to the entire project.\n"
"Making black and white image from grayscale or color source requires binarization. Binarization contains several steps which could be seen in debug mode. One of these is image smoothing. In few cases better results could be achieved if smoothing is disabled, but it's enabled by default.", nullptr));
        optBlackWhiteMode->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        disableSmoothingBW->setText(QCoreApplication::translate("SettingsDialog", "Disable smoothing", nullptr));
        groupBox_28->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblColorGrayscaleModeDescr->setText(QCoreApplication::translate("SettingsDialog", "In this mode page content is not changed.\n"
"Margins can be filled with white or left as is. If the margins are filled in white, then the option to equalize illumination also becomes available.\n"
"Equalize illumination option normalizes the background color, bringing it to white, and normalizes contrast, increasing it in the shaded areas.", nullptr));
        optColorGrayscaleMode->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        groupBox_29->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblMixedModeDescr->setText(QCoreApplication::translate("SettingsDialog", "Mixed mode is used for projects in which there are scans from half-tone images (grayscale or color). Pictures will be automatically detected and displayed as it is, just as in the \"Color / Grayscale\" with the included equalized illumination. The rest of the page is displayed in black and white.\n"
"\n"
"Automatic picture zones detection works well enough, but if the picture merges smoothly into the background the result may be unsatisfactory. In this case, you must create and configure the picture zone images. It is important to note that the creation of zones of images is possible only in mixed mode.", nullptr));
        optMixedMode->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        groupBox_30->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblAutoLayerDescr->setText(QCoreApplication::translate("SettingsDialog", "Auto layer is switched on by default and contains automatically detected areas which are most likely pictures and should be left grayscaled/colored while other converted to b/w.\n"
"The result is binary mask and could be viewed in Layers tab. It's highlighted by blue and glowing.\n"
"This mask can't be changed directly but only switched on/off. User could also create zones (polygons) with \"subtract from Auto layer\" or \"Add to Auto layer\" flags to modify it.", nullptr));
        groupBox_31->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblPictureZonesLayerDescr->setText(QCoreApplication::translate("SettingsDialog", "Picture zones layer works on top of Auto layer results and could be useful if your pictures are known to be rectangles. Auto layer is build automatically and doesn't make any assumptions on areas geometry. Picture zones layer tries to improve its mask assuming all picture areas found should be rectangles.\n"
"This layer doesn't modify auto layer mask but automatically creates rectangle zones on top of it. So usually it covers all auto layer with polygons. User can change these polygons as regular picture zones.\n"
"In case sensitivity parameter is 100% the picture detection algorithm looks for the separate picture areas and adds a minimal bounding rect for each of them as a zone. In this case zone contains pixels from auto layer mask and may contain pixels that are not included in auto layer mask but still inside the rect. If sensitivity is less than 100% the algorithm additionally investigates each side of bounding rect and tries to move it towards the center of rect while the line of pixels behind it contain"
                        "s more than N% of pixels that are not from auto layer mask. Decreasing sensitivity may help to better fit picture zone over picture area by ignoring pixels-outliers incorrectly included in auto layer mask. Usually, the sensitivity is 75-100%.", nullptr));
        optPictureZonesLayer->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        label_5->setText(QCoreApplication::translate("SettingsDialog", "Sensitivity:", nullptr));
        rectangularAreasSensitivityValue->setSuffix(QCoreApplication::translate("SettingsDialog", "%", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblForegroundLayerDescr->setText(QCoreApplication::translate("SettingsDialog", "Foreground layer allows user to fill page with white while keeping its content grayscaled or colored. Technically, it binarizes image to a b/w mask and uses such mask to separate background from foreground. Then background is filled with white while foreground is kept as is.\n"
"It could be useful if you have some colored text, arrows or other glyphs which could be hardly represented as a rectangle picture.\n"
"Foreground layer could be adjusted with zones. Use zones with \"subtract from all layers\" property to left a part of image below it in b/w mode. Or \"subtract to auto layer\" to remove auto layer mask below it. By default auto layer masks (if enabled) and foreground layer masks are combined.\n"
"\n"
"As Foreground layer is using binarization to separate content from background it's uses binarization threshold value. By default it's the same value that used for b/w layer. But sometimes you may need bigger threshold to be used for mask detection while keeping b/w threshold for regular binarization. In th"
                        "is case you can switch on \"Separate threshold control\" check box and make additional threshold control visible for foreground layer.", nullptr));
        optGeneral_2->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        cbForegroundLayerSeparateControl->setText(QCoreApplication::translate("SettingsDialog", "Separate threshold control", nullptr));
        groupBox_40->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblFillZonesDescr->setText(QCoreApplication::translate("SettingsDialog", "Fill zones tab allows user to specify zones that will be filled with background cover. This is usually used to remove the library stamps, and spots that are too big to be automatically removed with Despeckle function.", nullptr));
        optFillZones->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        groupBox_42->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblDewarpingDescr->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Dewarping tries to detect and fix distortion of page surface by analyzing lines of text on it. It assumes that the lines should be horizontal.</p><p>Automatic, marginal and manual modes are supported.</p><p>Try to correct auto distortion model if too skewed - if enabled then some vertical edges of automatically generated distortion model that deviate to more than 2.75 degrees to Y-axis may be treated as invalid and slope is set to sero. That may help in some cases when auto generation of distortion model gives incorrect results.</p><p>Try to apply additional deskew after dewarp - we already deskewed our image on one of previous processing stage but sometimes image may get skewed after dewarping. Thus additional attempt to deskew resulting image may be applied. The skew of the image after dewarping is measured and if the angle is more than 2.0 degrees - it's deskewed. There is no controls to tune this automatic deskew, it takes some CPU time and it's not working with automatic dewarping. S"
                        "o use it with <a name=\"result_box\"/>with caution.</p></body></html>", nullptr));
        optDewarping->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        cbTryVertHalfCorrection->setText(QCoreApplication::translate("SettingsDialog", "Try to correct auto distortion model if too skewed", nullptr));
        cbTryDeskewAfterDewarp->setText(QCoreApplication::translate("SettingsDialog", "Try to apply additional deskew after dewarp", nullptr));
        groupBox_44->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblDespecklingDescr->setText(QCoreApplication::translate("SettingsDialog", "Despeckling mode tries to automatically clean page content from spots. It analyses only areas of page rendered in b/w. In a nutshell it looks for connected set of black pixels that could be bounded with a rect smaller then Despeckling mode sensitivity rect - in this case these pixels are filled with background color. Currently 3 levels of sensitivity are supported.", nullptr));
        optDespeckling->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        despecklingDefaultsLabel->setText(QCoreApplication::translate("SettingsDialog", "Default:", nullptr));
        groupBox_45->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblDespecklingDescr_2->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Various image formats allow to specify additional data in files. </p><p>In some cases you may want to copy such information from the source image files to the resulting image files after image processing.</p><p>These settings let you control metadata propagation.</p><p><span style=\" font-weight:600;\">Copy ICC profile from source image </span>- if enabled the embedded Color Profile data will be copied from source to resulting image. Some color profiles are not compatible with all possible color spaces thus this setting turns off some color space optimizations (e.g. RGB image won't be converted to grayscale color space even if all pixels in it are the shades of gray). The resulting image will keep the color space of the original unless it's converted to b/w.</p></body></html>", nullptr));
        optDespeckling_2->setTitle(QCoreApplication::translate("SettingsDialog", "Options", nullptr));
        cbCopyICCProfile->setText(QCoreApplication::translate("SettingsDialog", "Copy ICC profile from source image", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("SettingsDialog", "Description", nullptr));
        lblDebugModeDescr->setText(QCoreApplication::translate("SettingsDialog", "Most of the processing stages require multiple steps of image transformation, cropping, scaling, changing colors, applying filters etc. to calculate resulting image with specified parameters. These transformations could be displayed to user for debugging purposes.\n"
"If debugging enabled you may find a new tabs on top of page view panel. Each tab contain one debugging image representing processing one step described in its title.\n"
"\n"
"In case the page was already processed when you switch Debug Mode on these tabs won't appear as cached resulting image is displayed and no real processing is done in this case. You have to force page reprocessing to get debug images. Use \"Regenerate result\" command from context menu in Thumbnail view for this.\n"
"\n"
"Debug images are saved as png in temporary folder with unique filenames. These files are automatically removed when application doesn't need them anymore. You can find them there or use Save as command from debug tab's image view context menu to make a persi"
                        "stent copy of image.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
