/********************************************************************************
** Form generated from reading UI file 'OutputOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTOPTIONSWIDGET_H
#define UI_OUTPUTOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputOptionsWidget
{
public:
    QAction *actionModeBW;
    QAction *actionModeColorOrGrayscale;
    QAction *actionModeMixed;
    QAction *actionReset_to_default_value;
    QAction *actionReset_to_default_value_foeground;
    QAction *actionactionDespeckleOff;
    QAction *actionactionDespeckleCautious;
    QAction *actionactionDespeckleNormal;
    QAction *actionactionDespeckleAggressive;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_15;
    QLabel *dpiLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *dpiValue;
    QFrame *line_2;
    QWidget *modePanel;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *modeLabel;
    QSpacerItem *horizontalSpacer_10;
    QLabel *modeValue;
    QWidget *illuminationPanel;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *whiteMarginsCB;
    QCheckBox *equalizeIlluminationCB;
    QWidget *layersPanel;
    QVBoxLayout *verticalLayout_111;
    QCheckBox *autoLayerCB;
    QCheckBox *pictureZonesLayerCB;
    QCheckBox *foregroundLayerCB;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *applyColorsButton;
    QSpacerItem *horizontalSpacer_9;
    QFrame *line;
    QWidget *widget;
    QVBoxLayout *verticalLayout_7;
    QWidget *bwOptions;
    QVBoxLayout *verticalLayout;
    QComboBox *thresholdMethodSelector;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QLabel *thresholdLabel;
    QHBoxLayout *horizontalLayout_4;
    QSlider *thresholdSlider;
    QGridLayout *gridLayout;
    QLabel *thresholdWindowSizeLabel;
    QSpinBox *thresholdWindowSize;
    QLabel *thresholdCoefLabel;
    QDoubleSpinBox *thresholdCoef;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *applyThresholdButton;
    QSpacerItem *horizontalSpacer_7;
    QFrame *line_3;
    QWidget *bwForegroundOptions;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_16;
    QLabel *thresholdForegroundLabel;
    QHBoxLayout *horizontalLayout_8;
    QSlider *thresholdForegroundSlider;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_17;
    QLabel *applyForegroundThresholdButton;
    QSpacerItem *horizontalSpacer_18;
    QFrame *line_6;
    QWidget *depthPerceptionPanel;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *depthPerceptionLabel;
    QSpacerItem *horizontalSpacer_8;
    QLabel *depthPerceptionValue;
    QHBoxLayout *horizontalLayout_16;
    QSlider *depthPerceptionSlider;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_13;
    QLabel *applyDepthPerception;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_4;
    QFrame *line_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *dewarpingLabel;
    QSpacerItem *horizontalSpacer_20;
    QLabel *dewarpingStatusLabel;
    QFrame *line_5;
    QWidget *despecklingPanel;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *despeckleLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *despeckleValue;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_11;
    QToolButton *despeckleOffBtn;
    QToolButton *despeckleCautiousBtn;
    QToolButton *despeckleNormalBtn;
    QToolButton *despeckleAggressiveBtn;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_14;
    QLabel *applyDespeckleButton;
    QSpacerItem *horizontalSpacer_15;
    QWidget *despeckleSliderPanel;
    QHBoxLayout *horizontalLayout_2;
    QSlider *despeckleSlider;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OutputOptionsWidget)
    {
        if (OutputOptionsWidget->objectName().isEmpty())
            OutputOptionsWidget->setObjectName(QString::fromUtf8("OutputOptionsWidget"));
        OutputOptionsWidget->resize(279, 871);
        OutputOptionsWidget->setWindowTitle(QString::fromUtf8("Form"));
        actionModeBW = new QAction(OutputOptionsWidget);
        actionModeBW->setObjectName(QString::fromUtf8("actionModeBW"));
        actionModeColorOrGrayscale = new QAction(OutputOptionsWidget);
        actionModeColorOrGrayscale->setObjectName(QString::fromUtf8("actionModeColorOrGrayscale"));
        actionModeMixed = new QAction(OutputOptionsWidget);
        actionModeMixed->setObjectName(QString::fromUtf8("actionModeMixed"));
        actionReset_to_default_value = new QAction(OutputOptionsWidget);
        actionReset_to_default_value->setObjectName(QString::fromUtf8("actionReset_to_default_value"));
        actionReset_to_default_value_foeground = new QAction(OutputOptionsWidget);
        actionReset_to_default_value_foeground->setObjectName(QString::fromUtf8("actionReset_to_default_value_foeground"));
        actionactionDespeckleOff = new QAction(OutputOptionsWidget);
        actionactionDespeckleOff->setObjectName(QString::fromUtf8("actionactionDespeckleOff"));
        actionactionDespeckleOff->setText(QString::fromUtf8("actionDespeckleOff"));
        actionactionDespeckleCautious = new QAction(OutputOptionsWidget);
        actionactionDespeckleCautious->setObjectName(QString::fromUtf8("actionactionDespeckleCautious"));
        actionactionDespeckleCautious->setText(QString::fromUtf8("actionDespeckleCautious"));
        actionactionDespeckleNormal = new QAction(OutputOptionsWidget);
        actionactionDespeckleNormal->setObjectName(QString::fromUtf8("actionactionDespeckleNormal"));
        actionactionDespeckleNormal->setText(QString::fromUtf8("actionDespeckleNormal"));
        actionactionDespeckleAggressive = new QAction(OutputOptionsWidget);
        actionactionDespeckleAggressive->setObjectName(QString::fromUtf8("actionactionDespeckleAggressive"));
        actionactionDespeckleAggressive->setText(QString::fromUtf8("actionDespeckleAggressive"));
        verticalLayout_8 = new QVBoxLayout(OutputOptionsWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        dpiLabel = new QLabel(OutputOptionsWidget);
        dpiLabel->setObjectName(QString::fromUtf8("dpiLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        dpiLabel->setFont(font);
        dpiLabel->setContextMenuPolicy(Qt::NoContextMenu);
        dpiLabel->setTextFormat(Qt::RichText);

        horizontalLayout_15->addWidget(dpiLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);

        dpiValue = new QLabel(OutputOptionsWidget);
        dpiValue->setObjectName(QString::fromUtf8("dpiValue"));
        dpiValue->setFont(font);
        dpiValue->setText(QString::fromUtf8("value"));

        horizontalLayout_15->addWidget(dpiValue);


        verticalLayout_8->addLayout(horizontalLayout_15);

        line_2 = new QFrame(OutputOptionsWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_2);

        modePanel = new QWidget(OutputOptionsWidget);
        modePanel->setObjectName(QString::fromUtf8("modePanel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modePanel->sizePolicy().hasHeightForWidth());
        modePanel->setSizePolicy(sizePolicy);
        modePanel->setMinimumSize(QSize(0, 168));
        modePanel->setMaximumSize(QSize(16777215, 168));
        verticalLayout_6 = new QVBoxLayout(modePanel);
        verticalLayout_6->setSpacing(3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 3, 0, 3);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        modeLabel = new QLabel(modePanel);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));
        modeLabel->setFont(font);

        horizontalLayout_3->addWidget(modeLabel);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        modeValue = new QLabel(modePanel);
        modeValue->setObjectName(QString::fromUtf8("modeValue"));
        modeValue->setFont(font);
        modeValue->setContextMenuPolicy(Qt::NoContextMenu);
        modeValue->setText(QString::fromUtf8("value"));
        modeValue->setTextFormat(Qt::RichText);

        horizontalLayout_3->addWidget(modeValue);


        verticalLayout_6->addLayout(horizontalLayout_3);

        illuminationPanel = new QWidget(modePanel);
        illuminationPanel->setObjectName(QString::fromUtf8("illuminationPanel"));
        verticalLayout_3 = new QVBoxLayout(illuminationPanel);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 0, 0, 0);
        whiteMarginsCB = new QCheckBox(illuminationPanel);
        whiteMarginsCB->setObjectName(QString::fromUtf8("whiteMarginsCB"));

        verticalLayout_3->addWidget(whiteMarginsCB);

        equalizeIlluminationCB = new QCheckBox(illuminationPanel);
        equalizeIlluminationCB->setObjectName(QString::fromUtf8("equalizeIlluminationCB"));

        verticalLayout_3->addWidget(equalizeIlluminationCB);


        verticalLayout_6->addWidget(illuminationPanel);

        layersPanel = new QWidget(modePanel);
        layersPanel->setObjectName(QString::fromUtf8("layersPanel"));
        verticalLayout_111 = new QVBoxLayout(layersPanel);
        verticalLayout_111->setSpacing(0);
        verticalLayout_111->setObjectName(QString::fromUtf8("verticalLayout_111"));
        verticalLayout_111->setContentsMargins(6, 0, 0, 0);
        autoLayerCB = new QCheckBox(layersPanel);
        autoLayerCB->setObjectName(QString::fromUtf8("autoLayerCB"));
        autoLayerCB->setChecked(true);

        verticalLayout_111->addWidget(autoLayerCB);

        pictureZonesLayerCB = new QCheckBox(layersPanel);
        pictureZonesLayerCB->setObjectName(QString::fromUtf8("pictureZonesLayerCB"));

        verticalLayout_111->addWidget(pictureZonesLayerCB);

        foregroundLayerCB = new QCheckBox(layersPanel);
        foregroundLayerCB->setObjectName(QString::fromUtf8("foregroundLayerCB"));

        verticalLayout_111->addWidget(foregroundLayerCB);


        verticalLayout_6->addWidget(layersPanel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        applyColorsButton = new QLabel(modePanel);
        applyColorsButton->setObjectName(QString::fromUtf8("applyColorsButton"));
        QFont font1;
        font1.setItalic(true);
        applyColorsButton->setFont(font1);
        applyColorsButton->setContextMenuPolicy(Qt::NoContextMenu);
        applyColorsButton->setTextFormat(Qt::RichText);

        horizontalLayout_5->addWidget(applyColorsButton);

        horizontalSpacer_9 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout_6->addLayout(horizontalLayout_5);

        line = new QFrame(modePanel);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);


        verticalLayout_8->addWidget(modePanel);

        widget = new QWidget(OutputOptionsWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 164));
        widget->setMaximumSize(QSize(16777215, 164));
        verticalLayout_7 = new QVBoxLayout(widget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        bwOptions = new QWidget(widget);
        bwOptions->setObjectName(QString::fromUtf8("bwOptions"));
        verticalLayout = new QVBoxLayout(bwOptions);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 3, 0, 0);
        thresholdMethodSelector = new QComboBox(bwOptions);
        thresholdMethodSelector->setObjectName(QString::fromUtf8("thresholdMethodSelector"));

        verticalLayout->addWidget(thresholdMethodSelector);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label = new QLabel(bwOptions);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout_12->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_6);

        thresholdLabel = new QLabel(bwOptions);
        thresholdLabel->setObjectName(QString::fromUtf8("thresholdLabel"));
        thresholdLabel->setFont(font);
        thresholdLabel->setText(QString::fromUtf8("value"));

        horizontalLayout_12->addWidget(thresholdLabel);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        thresholdSlider = new QSlider(bwOptions);
        thresholdSlider->setObjectName(QString::fromUtf8("thresholdSlider"));
        thresholdSlider->setContextMenuPolicy(Qt::ActionsContextMenu);
        thresholdSlider->setStyleSheet(QString::fromUtf8(""));
        thresholdSlider->setMinimum(-30);
        thresholdSlider->setMaximum(30);
        thresholdSlider->setSingleStep(1);
        thresholdSlider->setPageStep(5);
        thresholdSlider->setTracking(true);
        thresholdSlider->setOrientation(Qt::Horizontal);
        thresholdSlider->setInvertedAppearance(false);
        thresholdSlider->setInvertedControls(false);
        thresholdSlider->setTickPosition(QSlider::TicksBelow);
        thresholdSlider->setTickInterval(3);

        horizontalLayout_4->addWidget(thresholdSlider);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        thresholdWindowSizeLabel = new QLabel(bwOptions);
        thresholdWindowSizeLabel->setObjectName(QString::fromUtf8("thresholdWindowSizeLabel"));

        gridLayout->addWidget(thresholdWindowSizeLabel, 0, 0, 1, 1);

        thresholdWindowSize = new QSpinBox(bwOptions);
        thresholdWindowSize->setObjectName(QString::fromUtf8("thresholdWindowSize"));
        thresholdWindowSize->setMinimum(3);
        thresholdWindowSize->setMaximum(9999);

        gridLayout->addWidget(thresholdWindowSize, 0, 1, 1, 1);

        thresholdCoefLabel = new QLabel(bwOptions);
        thresholdCoefLabel->setObjectName(QString::fromUtf8("thresholdCoefLabel"));

        gridLayout->addWidget(thresholdCoefLabel, 1, 0, 1, 1);

        thresholdCoef = new QDoubleSpinBox(bwOptions);
        thresholdCoef->setObjectName(QString::fromUtf8("thresholdCoef"));
        thresholdCoef->setMinimum(0.010000000000000);
        thresholdCoef->setMaximum(9.990000000000000);
        thresholdCoef->setSingleStep(0.010000000000000);

        gridLayout->addWidget(thresholdCoef, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        applyThresholdButton = new QLabel(bwOptions);
        applyThresholdButton->setObjectName(QString::fromUtf8("applyThresholdButton"));
        applyThresholdButton->setFont(font1);
        applyThresholdButton->setContextMenuPolicy(Qt::NoContextMenu);
        applyThresholdButton->setTextFormat(Qt::RichText);

        horizontalLayout_7->addWidget(applyThresholdButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_7);

        line_3 = new QFrame(bwOptions);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);


        verticalLayout_7->addWidget(bwOptions);


        verticalLayout_8->addWidget(widget);

        bwForegroundOptions = new QWidget(OutputOptionsWidget);
        bwForegroundOptions->setObjectName(QString::fromUtf8("bwForegroundOptions"));
        verticalLayout_4 = new QVBoxLayout(bwForegroundOptions);
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 3, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_2 = new QLabel(bwForegroundOptions);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_13->addWidget(label_2);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_16);

        thresholdForegroundLabel = new QLabel(bwForegroundOptions);
        thresholdForegroundLabel->setObjectName(QString::fromUtf8("thresholdForegroundLabel"));
        thresholdForegroundLabel->setFont(font);
        thresholdForegroundLabel->setText(QString::fromUtf8("value"));

        horizontalLayout_13->addWidget(thresholdForegroundLabel);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        thresholdForegroundSlider = new QSlider(bwForegroundOptions);
        thresholdForegroundSlider->setObjectName(QString::fromUtf8("thresholdForegroundSlider"));
        thresholdForegroundSlider->setContextMenuPolicy(Qt::ActionsContextMenu);
        thresholdForegroundSlider->setStyleSheet(QString::fromUtf8(""));
        thresholdForegroundSlider->setMinimum(-30);
        thresholdForegroundSlider->setMaximum(30);
        thresholdForegroundSlider->setSingleStep(1);
        thresholdForegroundSlider->setPageStep(5);
        thresholdForegroundSlider->setTracking(true);
        thresholdForegroundSlider->setOrientation(Qt::Horizontal);
        thresholdForegroundSlider->setInvertedAppearance(false);
        thresholdForegroundSlider->setInvertedControls(false);
        thresholdForegroundSlider->setTickPosition(QSlider::TicksBelow);
        thresholdForegroundSlider->setTickInterval(3);

        horizontalLayout_8->addWidget(thresholdForegroundSlider);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_17);

        applyForegroundThresholdButton = new QLabel(bwForegroundOptions);
        applyForegroundThresholdButton->setObjectName(QString::fromUtf8("applyForegroundThresholdButton"));
        applyForegroundThresholdButton->setFont(font1);
        applyForegroundThresholdButton->setContextMenuPolicy(Qt::NoContextMenu);
        applyForegroundThresholdButton->setTextFormat(Qt::RichText);

        horizontalLayout_14->addWidget(applyForegroundThresholdButton);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_18);


        verticalLayout_4->addLayout(horizontalLayout_14);

        line_6 = new QFrame(bwForegroundOptions);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_6);


        verticalLayout_8->addWidget(bwForegroundOptions);

        depthPerceptionPanel = new QWidget(OutputOptionsWidget);
        depthPerceptionPanel->setObjectName(QString::fromUtf8("depthPerceptionPanel"));
        verticalLayout_2 = new QVBoxLayout(depthPerceptionPanel);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 3, 0, 3);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        depthPerceptionLabel = new QLabel(depthPerceptionPanel);
        depthPerceptionLabel->setObjectName(QString::fromUtf8("depthPerceptionLabel"));
        depthPerceptionLabel->setFont(font);

        horizontalLayout_17->addWidget(depthPerceptionLabel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_8);

        depthPerceptionValue = new QLabel(depthPerceptionPanel);
        depthPerceptionValue->setObjectName(QString::fromUtf8("depthPerceptionValue"));
        depthPerceptionValue->setFont(font);
        depthPerceptionValue->setText(QString::fromUtf8("value"));

        horizontalLayout_17->addWidget(depthPerceptionValue);


        verticalLayout_2->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        depthPerceptionSlider = new QSlider(depthPerceptionPanel);
        depthPerceptionSlider->setObjectName(QString::fromUtf8("depthPerceptionSlider"));
        depthPerceptionSlider->setContextMenuPolicy(Qt::ActionsContextMenu);
        depthPerceptionSlider->setMinimum(10);
        depthPerceptionSlider->setMaximum(30);
        depthPerceptionSlider->setPageStep(5);
        depthPerceptionSlider->setValue(10);
        depthPerceptionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_16->addWidget(depthPerceptionSlider);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);

        applyDepthPerception = new QLabel(depthPerceptionPanel);
        applyDepthPerception->setObjectName(QString::fromUtf8("applyDepthPerception"));
        applyDepthPerception->setFont(font1);
        applyDepthPerception->setContextMenuPolicy(Qt::NoContextMenu);
        applyDepthPerception->setTextFormat(Qt::RichText);

        horizontalLayout_10->addWidget(applyDepthPerception);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        line_4 = new QFrame(depthPerceptionPanel);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line_4);


        verticalLayout_2->addLayout(horizontalLayout_10);

        line_7 = new QFrame(depthPerceptionPanel);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_7);


        verticalLayout_8->addWidget(depthPerceptionPanel);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        dewarpingLabel = new QLabel(OutputOptionsWidget);
        dewarpingLabel->setObjectName(QString::fromUtf8("dewarpingLabel"));
        dewarpingLabel->setFont(font);

        horizontalLayout_11->addWidget(dewarpingLabel);

        horizontalSpacer_20 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_20);

        dewarpingStatusLabel = new QLabel(OutputOptionsWidget);
        dewarpingStatusLabel->setObjectName(QString::fromUtf8("dewarpingStatusLabel"));
        dewarpingStatusLabel->setFont(font);
        dewarpingStatusLabel->setContextMenuPolicy(Qt::NoContextMenu);
        dewarpingStatusLabel->setText(QString::fromUtf8("value"));
        dewarpingStatusLabel->setTextFormat(Qt::RichText);

        horizontalLayout_11->addWidget(dewarpingStatusLabel);


        verticalLayout_8->addLayout(horizontalLayout_11);

        line_5 = new QFrame(OutputOptionsWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_5);

        despecklingPanel = new QWidget(OutputOptionsWidget);
        despecklingPanel->setObjectName(QString::fromUtf8("despecklingPanel"));
        verticalLayout_5 = new QVBoxLayout(despecklingPanel);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        despeckleLabel = new QLabel(despecklingPanel);
        despeckleLabel->setObjectName(QString::fromUtf8("despeckleLabel"));
        despeckleLabel->setFont(font);

        horizontalLayout_6->addWidget(despeckleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        despeckleValue = new QLabel(despecklingPanel);
        despeckleValue->setObjectName(QString::fromUtf8("despeckleValue"));
        despeckleValue->setFont(font);
        despeckleValue->setText(QString::fromUtf8("value"));

        horizontalLayout_6->addWidget(despeckleValue);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        despeckleOffBtn = new QToolButton(despecklingPanel);
        despeckleOffBtn->setObjectName(QString::fromUtf8("despeckleOffBtn"));
        despeckleOffBtn->setText(QString::fromUtf8(""));
        despeckleOffBtn->setIconSize(QSize(16, 16));
        despeckleOffBtn->setCheckable(true);
        despeckleOffBtn->setChecked(true);
        despeckleOffBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(despeckleOffBtn);

        despeckleCautiousBtn = new QToolButton(despecklingPanel);
        despeckleCautiousBtn->setObjectName(QString::fromUtf8("despeckleCautiousBtn"));
        despeckleCautiousBtn->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/despeckle-cautious.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        despeckleCautiousBtn->setIcon(icon);
        despeckleCautiousBtn->setIconSize(QSize(16, 16));
        despeckleCautiousBtn->setCheckable(true);
        despeckleCautiousBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(despeckleCautiousBtn);

        despeckleNormalBtn = new QToolButton(despecklingPanel);
        despeckleNormalBtn->setObjectName(QString::fromUtf8("despeckleNormalBtn"));
        despeckleNormalBtn->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/despeckle-normal.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        despeckleNormalBtn->setIcon(icon1);
        despeckleNormalBtn->setIconSize(QSize(16, 16));
        despeckleNormalBtn->setCheckable(true);
        despeckleNormalBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(despeckleNormalBtn);

        despeckleAggressiveBtn = new QToolButton(despecklingPanel);
        despeckleAggressiveBtn->setObjectName(QString::fromUtf8("despeckleAggressiveBtn"));
        despeckleAggressiveBtn->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/despeckle-aggressive.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        despeckleAggressiveBtn->setIcon(icon2);
        despeckleAggressiveBtn->setIconSize(QSize(16, 16));
        despeckleAggressiveBtn->setCheckable(true);
        despeckleAggressiveBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(despeckleAggressiveBtn);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);

        applyDespeckleButton = new QLabel(despecklingPanel);
        applyDespeckleButton->setObjectName(QString::fromUtf8("applyDespeckleButton"));
        applyDespeckleButton->setFont(font1);
        applyDespeckleButton->setContextMenuPolicy(Qt::NoContextMenu);
        applyDespeckleButton->setTextFormat(Qt::RichText);

        horizontalLayout_9->addWidget(applyDespeckleButton);

        horizontalSpacer_15 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);


        verticalLayout_5->addLayout(horizontalLayout_9);


        verticalLayout_8->addWidget(despecklingPanel);

        despeckleSliderPanel = new QWidget(OutputOptionsWidget);
        despeckleSliderPanel->setObjectName(QString::fromUtf8("despeckleSliderPanel"));
        despeckleSliderPanel->setContextMenuPolicy(Qt::ActionsContextMenu);
        horizontalLayout_2 = new QHBoxLayout(despeckleSliderPanel);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        despeckleSlider = new QSlider(despeckleSliderPanel);
        despeckleSlider->setObjectName(QString::fromUtf8("despeckleSlider"));
        despeckleSlider->setMinimum(0);
        despeckleSlider->setMaximum(3);
        despeckleSlider->setPageStep(1);
        despeckleSlider->setOrientation(Qt::Horizontal);
        despeckleSlider->setTickPosition(QSlider::TicksBelow);
        despeckleSlider->setTickInterval(1);

        horizontalLayout_2->addWidget(despeckleSlider);


        verticalLayout_8->addWidget(despeckleSliderPanel);

        verticalSpacer = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);


        retranslateUi(OutputOptionsWidget);

        QMetaObject::connectSlotsByName(OutputOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *OutputOptionsWidget)
    {
        actionModeBW->setText(QCoreApplication::translate("OutputOptionsWidget", "&Black and White", nullptr));
        actionModeColorOrGrayscale->setText(QCoreApplication::translate("OutputOptionsWidget", "&Color / Grayscale", nullptr));
        actionModeMixed->setText(QCoreApplication::translate("OutputOptionsWidget", "&Mixed", nullptr));
        actionReset_to_default_value->setText(QCoreApplication::translate("OutputOptionsWidget", "&Reset to default value", nullptr));
        actionReset_to_default_value_foeground->setText(QCoreApplication::translate("OutputOptionsWidget", "&Reset to default value", nullptr));
        dpiLabel->setText(QCoreApplication::translate("OutputOptionsWidget", "Output Resolution:", nullptr));
        modeLabel->setText(QCoreApplication::translate("OutputOptionsWidget", "Mode:", nullptr));
        whiteMarginsCB->setText(QCoreApplication::translate("OutputOptionsWidget", "White margins", nullptr));
        equalizeIlluminationCB->setText(QCoreApplication::translate("OutputOptionsWidget", "Equalize illumination", nullptr));
        autoLayerCB->setText(QCoreApplication::translate("OutputOptionsWidget", "Auto layer", nullptr));
        pictureZonesLayerCB->setText(QCoreApplication::translate("OutputOptionsWidget", "Picture Zones layer", nullptr));
        foregroundLayerCB->setText(QCoreApplication::translate("OutputOptionsWidget", "Foreground layer", nullptr));
        applyColorsButton->setText(QCoreApplication::translate("OutputOptionsWidget", "<a href=\"#\">Apply To...</a>", nullptr));
        label->setText(QCoreApplication::translate("OutputOptionsWidget", "Binarisation threshold:", nullptr));
        thresholdWindowSizeLabel->setText(QCoreApplication::translate("OutputOptionsWidget", "Window size:", nullptr));
#if QT_CONFIG(tooltip)
        thresholdWindowSize->setToolTip(QCoreApplication::translate("OutputOptionsWidget", "The dimensions of a pixel neighborhood to consider.", nullptr));
#endif // QT_CONFIG(tooltip)
        thresholdCoefLabel->setText(QCoreApplication::translate("OutputOptionsWidget", "Coef:", nullptr));
#if QT_CONFIG(tooltip)
        thresholdCoef->setToolTip(QCoreApplication::translate("OutputOptionsWidget", "Default value is 0.34.", nullptr));
#endif // QT_CONFIG(tooltip)
        applyThresholdButton->setText(QCoreApplication::translate("OutputOptionsWidget", "<a href=\"#\">Apply To...</a>", nullptr));
        label_2->setText(QCoreApplication::translate("OutputOptionsWidget", "Foreground layer threshold:", nullptr));
        applyForegroundThresholdButton->setText(QCoreApplication::translate("OutputOptionsWidget", "<a href=\"#\">Apply To...</a>", nullptr));
        depthPerceptionLabel->setText(QCoreApplication::translate("OutputOptionsWidget", "Depth perception:", nullptr));
        applyDepthPerception->setText(QCoreApplication::translate("OutputOptionsWidget", "<a href=\"#\">Apply To...</a>", nullptr));
        dewarpingLabel->setText(QCoreApplication::translate("OutputOptionsWidget", "Dewarping:", nullptr));
        despeckleLabel->setText(QCoreApplication::translate("OutputOptionsWidget", "Despeckling:", nullptr));
#if QT_CONFIG(statustip)
        despeckleOffBtn->setStatusTip(QCoreApplication::translate("OutputOptionsWidget", "No despeckling", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        despeckleCautiousBtn->setStatusTip(QCoreApplication::translate("OutputOptionsWidget", "Cautious despeckling", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        despeckleNormalBtn->setStatusTip(QCoreApplication::translate("OutputOptionsWidget", "Normal despeckling", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        despeckleAggressiveBtn->setStatusTip(QCoreApplication::translate("OutputOptionsWidget", "Aggressive despeckling", nullptr));
#endif // QT_CONFIG(statustip)
        applyDespeckleButton->setText(QCoreApplication::translate("OutputOptionsWidget", "<a href=\"#\">Apply To...</a>", nullptr));
        (void)OutputOptionsWidget;
    } // retranslateUi

};

namespace Ui {
    class OutputOptionsWidget: public Ui_OutputOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTOPTIONSWIDGET_H
