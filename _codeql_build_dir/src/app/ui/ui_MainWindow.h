/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "NonOwningWidget.h"
#include "StageListView.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSaveProject;
    QAction *actionSaveProjectAs;
    QAction *actionNextPage;
    QAction *actionPrevPage;
    QAction *actionNewProject;
    QAction *actionOpenProject;
    QAction *actionPrevPageQ;
    QAction *actionNextPageW;
    QAction *actionCloseProject;
    QAction *actionQuit;
    QAction *actionSettings;
    QAction *actionFirstPage;
    QAction *actionLastPage;
    QAction *actionAbout;
    QAction *actionFixDpi;
    QAction *actionRelinking;
    QAction *actionSwitchFilter1;
    QAction *actionSwitchFilter2;
    QAction *actionSwitchFilter3;
    QAction *actionSwitchFilter4;
    QAction *actionSwitchFilter5;
    QAction *actionSwitchFilter6;
    QAction *actionExport;
    QAction *actionAbout_Qt;
    QAction *actionJumpPageF;
    QAction *actionJumpPageB;
    QAction *actionFirstSelectedPage;
    QAction *actionLastSelectedPage;
    QAction *actionNextSelectedPage;
    QAction *actionPrevSelectedPage;
    QAction *actionInsertEmptyPgBefore;
    QAction *actionInsertEmptyPgAfter;
    QAction *actionRemoveFromProject;
    QAction *actionCopySourceFileName;
    QAction *actionCopyOutputFileName;
    QAction *actionCopyPageNumber;
    QAction *actionGoToPage;
    QAction *actionSelectPages;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *imageViewFrame;
    QMenuBar *menubar;
    QMenu *menuDebug;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QStatusBar *appStatusBar;
    QDockWidget *dockWidgetThumbnails;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *inverseOrderButton;
    QToolButton *focusButton;
    QToolButton *multiselectButton;
    QGraphicsView *thumbView;
    QWidget *sortOptionsWgt;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *resetSortingBtn;
    QComboBox *sortOptions;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_3;
    StageListView *filterList;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    NonOwningWidget *filterOptions;
    QWidget *statusBarPanel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *statusLabelMousePos;
    QFrame *line_2;
    QLabel *statusLabelPhysSize;
    QFrame *line;
    QLabel *statusLabelPageNo;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(783, 464);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionSaveProject = new QAction(MainWindow);
        actionSaveProject->setObjectName(QString::fromUtf8("actionSaveProject"));
        actionSaveProjectAs = new QAction(MainWindow);
        actionSaveProjectAs->setObjectName(QString::fromUtf8("actionSaveProjectAs"));
        actionNextPage = new QAction(MainWindow);
        actionNextPage->setObjectName(QString::fromUtf8("actionNextPage"));
        actionNextPage->setText(QString::fromUtf8("Next Page"));
        actionNextPage->setIconText(QString::fromUtf8("Next Page"));
#if QT_CONFIG(tooltip)
        actionNextPage->setToolTip(QString::fromUtf8("Next Page"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNextPage->setShortcut(QString::fromUtf8("PgDown"));
#endif // QT_CONFIG(shortcut)
        actionNextPage->setAutoRepeat(false);
        actionPrevPage = new QAction(MainWindow);
        actionPrevPage->setObjectName(QString::fromUtf8("actionPrevPage"));
        actionPrevPage->setText(QString::fromUtf8("Previous Page"));
        actionPrevPage->setIconText(QString::fromUtf8("Previous Page"));
#if QT_CONFIG(tooltip)
        actionPrevPage->setToolTip(QString::fromUtf8("Previous Page"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrevPage->setShortcut(QString::fromUtf8("PgUp"));
#endif // QT_CONFIG(shortcut)
        actionPrevPage->setAutoRepeat(false);
        actionNewProject = new QAction(MainWindow);
        actionNewProject->setObjectName(QString::fromUtf8("actionNewProject"));
        actionOpenProject = new QAction(MainWindow);
        actionOpenProject->setObjectName(QString::fromUtf8("actionOpenProject"));
        actionPrevPageQ = new QAction(MainWindow);
        actionPrevPageQ->setObjectName(QString::fromUtf8("actionPrevPageQ"));
        actionPrevPageQ->setText(QString::fromUtf8("Previous Page"));
        actionPrevPageQ->setIconText(QString::fromUtf8("Previous Page"));
#if QT_CONFIG(tooltip)
        actionPrevPageQ->setToolTip(QString::fromUtf8("Previous Page"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrevPageQ->setShortcut(QString::fromUtf8("Q"));
#endif // QT_CONFIG(shortcut)
        actionPrevPageQ->setAutoRepeat(false);
        actionNextPageW = new QAction(MainWindow);
        actionNextPageW->setObjectName(QString::fromUtf8("actionNextPageW"));
        actionNextPageW->setText(QString::fromUtf8("Next Page"));
        actionNextPageW->setIconText(QString::fromUtf8("Next Page"));
#if QT_CONFIG(tooltip)
        actionNextPageW->setToolTip(QString::fromUtf8("Next Page"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNextPageW->setShortcut(QString::fromUtf8("W"));
#endif // QT_CONFIG(shortcut)
        actionNextPageW->setAutoRepeat(false);
        actionCloseProject = new QAction(MainWindow);
        actionCloseProject->setObjectName(QString::fromUtf8("actionCloseProject"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
#if QT_CONFIG(shortcut)
        actionSettings->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        actionFirstPage = new QAction(MainWindow);
        actionFirstPage->setObjectName(QString::fromUtf8("actionFirstPage"));
        actionFirstPage->setText(QString::fromUtf8("First Page"));
        actionFirstPage->setIconText(QString::fromUtf8("First Page"));
#if QT_CONFIG(tooltip)
        actionFirstPage->setToolTip(QString::fromUtf8("First Page"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFirstPage->setShortcut(QString::fromUtf8("Home"));
#endif // QT_CONFIG(shortcut)
        actionLastPage = new QAction(MainWindow);
        actionLastPage->setObjectName(QString::fromUtf8("actionLastPage"));
        actionLastPage->setText(QString::fromUtf8("Last Page"));
        actionLastPage->setIconText(QString::fromUtf8("Last Page"));
#if QT_CONFIG(tooltip)
        actionLastPage->setToolTip(QString::fromUtf8("Last Page"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLastPage->setShortcut(QString::fromUtf8("End"));
#endif // QT_CONFIG(shortcut)
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionFixDpi = new QAction(MainWindow);
        actionFixDpi->setObjectName(QString::fromUtf8("actionFixDpi"));
        actionRelinking = new QAction(MainWindow);
        actionRelinking->setObjectName(QString::fromUtf8("actionRelinking"));
        actionSwitchFilter1 = new QAction(MainWindow);
        actionSwitchFilter1->setObjectName(QString::fromUtf8("actionSwitchFilter1"));
        actionSwitchFilter1->setText(QString::fromUtf8("Switch filter to orientation"));
        actionSwitchFilter1->setIconText(QString::fromUtf8("Switch filter to orientation"));
#if QT_CONFIG(tooltip)
        actionSwitchFilter1->setToolTip(QString::fromUtf8("Switch filter to orientation"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchFilter1->setShortcut(QString::fromUtf8("Ctrl+1"));
#endif // QT_CONFIG(shortcut)
        actionSwitchFilter2 = new QAction(MainWindow);
        actionSwitchFilter2->setObjectName(QString::fromUtf8("actionSwitchFilter2"));
        actionSwitchFilter2->setText(QString::fromUtf8("Switch filter to orientation"));
        actionSwitchFilter2->setIconText(QString::fromUtf8("Switch filter to orientation"));
#if QT_CONFIG(tooltip)
        actionSwitchFilter2->setToolTip(QString::fromUtf8("Switch filter to split pages"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchFilter2->setShortcut(QString::fromUtf8("Ctrl+2"));
#endif // QT_CONFIG(shortcut)
        actionSwitchFilter3 = new QAction(MainWindow);
        actionSwitchFilter3->setObjectName(QString::fromUtf8("actionSwitchFilter3"));
        actionSwitchFilter3->setText(QString::fromUtf8("Switch filter to orientation"));
        actionSwitchFilter3->setIconText(QString::fromUtf8("Switch filter to orientation"));
#if QT_CONFIG(tooltip)
        actionSwitchFilter3->setToolTip(QString::fromUtf8("Switch filter to deskew"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchFilter3->setShortcut(QString::fromUtf8("Ctrl+3"));
#endif // QT_CONFIG(shortcut)
        actionSwitchFilter4 = new QAction(MainWindow);
        actionSwitchFilter4->setObjectName(QString::fromUtf8("actionSwitchFilter4"));
        actionSwitchFilter4->setText(QString::fromUtf8("Switch filter to orientation"));
        actionSwitchFilter4->setIconText(QString::fromUtf8("Switch filter to orientation"));
#if QT_CONFIG(tooltip)
        actionSwitchFilter4->setToolTip(QString::fromUtf8("Switch filter to select content"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchFilter4->setShortcut(QString::fromUtf8("Ctrl+4"));
#endif // QT_CONFIG(shortcut)
        actionSwitchFilter5 = new QAction(MainWindow);
        actionSwitchFilter5->setObjectName(QString::fromUtf8("actionSwitchFilter5"));
        actionSwitchFilter5->setText(QString::fromUtf8("Switch filter to orientation"));
        actionSwitchFilter5->setIconText(QString::fromUtf8("Switch filter to orientation"));
#if QT_CONFIG(tooltip)
        actionSwitchFilter5->setToolTip(QString::fromUtf8("Switch filter to margins"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchFilter5->setShortcut(QString::fromUtf8("Ctrl+5"));
#endif // QT_CONFIG(shortcut)
        actionSwitchFilter6 = new QAction(MainWindow);
        actionSwitchFilter6->setObjectName(QString::fromUtf8("actionSwitchFilter6"));
        actionSwitchFilter6->setText(QString::fromUtf8("Switch filter to orientation"));
        actionSwitchFilter6->setIconText(QString::fromUtf8("Switch filter to orientation"));
#if QT_CONFIG(tooltip)
        actionSwitchFilter6->setToolTip(QString::fromUtf8("Switch filter to output"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchFilter6->setShortcut(QString::fromUtf8("Ctrl+6"));
#endif // QT_CONFIG(shortcut)
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionJumpPageF = new QAction(MainWindow);
        actionJumpPageF->setObjectName(QString::fromUtf8("actionJumpPageF"));
        actionJumpPageF->setText(QString::fromUtf8("Jump Forward"));
        actionJumpPageF->setIconText(QString::fromUtf8("Jump Forward"));
#if QT_CONFIG(tooltip)
        actionJumpPageF->setToolTip(QString::fromUtf8("Jump Forward"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionJumpPageF->setShortcut(QString::fromUtf8("Ctrl+PgDown"));
#endif // QT_CONFIG(shortcut)
        actionJumpPageB = new QAction(MainWindow);
        actionJumpPageB->setObjectName(QString::fromUtf8("actionJumpPageB"));
        actionJumpPageB->setText(QString::fromUtf8("Jump Backward"));
        actionJumpPageB->setIconText(QString::fromUtf8("Jump Backward"));
#if QT_CONFIG(tooltip)
        actionJumpPageB->setToolTip(QString::fromUtf8("Jump Backward"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionJumpPageB->setShortcut(QString::fromUtf8("Ctrl+PgUp"));
#endif // QT_CONFIG(shortcut)
        actionFirstSelectedPage = new QAction(MainWindow);
        actionFirstSelectedPage->setObjectName(QString::fromUtf8("actionFirstSelectedPage"));
        actionFirstSelectedPage->setText(QString::fromUtf8("First Selected Page"));
        actionFirstSelectedPage->setIconText(QString::fromUtf8("First Selected Page"));
#if QT_CONFIG(tooltip)
        actionFirstSelectedPage->setToolTip(QString::fromUtf8("First Selected Page"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFirstSelectedPage->setShortcut(QString::fromUtf8("Alt+Home"));
#endif // QT_CONFIG(shortcut)
        actionLastSelectedPage = new QAction(MainWindow);
        actionLastSelectedPage->setObjectName(QString::fromUtf8("actionLastSelectedPage"));
        actionLastSelectedPage->setText(QString::fromUtf8("Last Selected Page"));
        actionLastSelectedPage->setIconText(QString::fromUtf8("Last Selected Page"));
#if QT_CONFIG(tooltip)
        actionLastSelectedPage->setToolTip(QString::fromUtf8("Last Selected Page"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLastSelectedPage->setShortcut(QString::fromUtf8("Alt+End"));
#endif // QT_CONFIG(shortcut)
        actionNextSelectedPage = new QAction(MainWindow);
        actionNextSelectedPage->setObjectName(QString::fromUtf8("actionNextSelectedPage"));
        actionNextSelectedPage->setText(QString::fromUtf8("Next Selected Page"));
        actionNextSelectedPage->setIconText(QString::fromUtf8("Next Selected Page"));
#if QT_CONFIG(tooltip)
        actionNextSelectedPage->setToolTip(QString::fromUtf8("Next Selected Page"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNextSelectedPage->setShortcut(QString::fromUtf8("Alt+PgDown"));
#endif // QT_CONFIG(shortcut)
        actionPrevSelectedPage = new QAction(MainWindow);
        actionPrevSelectedPage->setObjectName(QString::fromUtf8("actionPrevSelectedPage"));
        actionPrevSelectedPage->setText(QString::fromUtf8("Previous Selected Page"));
        actionPrevSelectedPage->setIconText(QString::fromUtf8("Previous Selected Page"));
#if QT_CONFIG(tooltip)
        actionPrevSelectedPage->setToolTip(QString::fromUtf8("Previous Selected Page"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrevSelectedPage->setShortcut(QString::fromUtf8("Alt+PgUp"));
#endif // QT_CONFIG(shortcut)
        actionInsertEmptyPgBefore = new QAction(MainWindow);
        actionInsertEmptyPgBefore->setObjectName(QString::fromUtf8("actionInsertEmptyPgBefore"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/insert-before-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsertEmptyPgBefore->setIcon(icon);
        actionInsertEmptyPgBefore->setText(QString::fromUtf8("Insert before	Ctrl+Shift+B"));
        actionInsertEmptyPgAfter = new QAction(MainWindow);
        actionInsertEmptyPgAfter->setObjectName(QString::fromUtf8("actionInsertEmptyPgAfter"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/insert-after-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsertEmptyPgAfter->setIcon(icon1);
        actionInsertEmptyPgAfter->setText(QString::fromUtf8("Insert after	Ctrl+Shift+A"));
        actionRemoveFromProject = new QAction(MainWindow);
        actionRemoveFromProject->setObjectName(QString::fromUtf8("actionRemoveFromProject"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/user-trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveFromProject->setIcon(icon2);
        actionRemoveFromProject->setText(QString::fromUtf8("Remove from project"));
        actionCopySourceFileName = new QAction(MainWindow);
        actionCopySourceFileName->setObjectName(QString::fromUtf8("actionCopySourceFileName"));
        QIcon icon3;
        QString iconThemeName = QString::fromUtf8("copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCopySourceFileName->setIcon(icon3);
        actionCopyOutputFileName = new QAction(MainWindow);
        actionCopyOutputFileName->setObjectName(QString::fromUtf8("actionCopyOutputFileName"));
        actionCopyPageNumber = new QAction(MainWindow);
        actionCopyPageNumber->setObjectName(QString::fromUtf8("actionCopyPageNumber"));
        actionGoToPage = new QAction(MainWindow);
        actionGoToPage->setObjectName(QString::fromUtf8("actionGoToPage"));
        actionSelectPages = new QAction(MainWindow);
        actionSelectPages->setObjectName(QString::fromUtf8("actionSelectPages"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setCursor(QCursor(Qt::ArrowCursor));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        imageViewFrame = new QFrame(centralwidget);
        imageViewFrame->setObjectName(QString::fromUtf8("imageViewFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(imageViewFrame->sizePolicy().hasHeightForWidth());
        imageViewFrame->setSizePolicy(sizePolicy1);
        imageViewFrame->setFrameShape(QFrame::StyledPanel);
        imageViewFrame->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(imageViewFrame);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 783, 22));
        menuDebug = new QMenu(menubar);
        menuDebug->setObjectName(QString::fromUtf8("menuDebug"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menubar);
        appStatusBar = new QStatusBar(MainWindow);
        appStatusBar->setObjectName(QString::fromUtf8("appStatusBar"));
        MainWindow->setStatusBar(appStatusBar);
        dockWidgetThumbnails = new QDockWidget(MainWindow);
        dockWidgetThumbnails->setObjectName(QString::fromUtf8("dockWidgetThumbnails"));
        dockWidgetThumbnails->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetThumbnails->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        inverseOrderButton = new QToolButton(dockWidgetContents_2);
        inverseOrderButton->setObjectName(QString::fromUtf8("inverseOrderButton"));
        inverseOrderButton->setText(QString::fromUtf8(""));
        inverseOrderButton->setCheckable(true);
        inverseOrderButton->setToolButtonStyle(Qt::ToolButtonIconOnly);
        inverseOrderButton->setArrowType(Qt::DownArrow);

        horizontalLayout_3->addWidget(inverseOrderButton);

        focusButton = new QToolButton(dockWidgetContents_2);
        focusButton->setObjectName(QString::fromUtf8("focusButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(focusButton->sizePolicy().hasHeightForWidth());
        focusButton->setSizePolicy(sizePolicy2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/keep-in-view.png"), QSize(), QIcon::Normal, QIcon::Off);
        focusButton->setIcon(icon4);
        focusButton->setCheckable(true);
        focusButton->setChecked(true);

        horizontalLayout_3->addWidget(focusButton);

        multiselectButton = new QToolButton(dockWidgetContents_2);
        multiselectButton->setObjectName(QString::fromUtf8("multiselectButton"));
        multiselectButton->setText(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/multi_choice.png"), QSize(), QIcon::Normal, QIcon::Off);
        multiselectButton->setIcon(icon5);
        multiselectButton->setCheckable(true);

        horizontalLayout_3->addWidget(multiselectButton);


        verticalLayout->addLayout(horizontalLayout_3);

        thumbView = new QGraphicsView(dockWidgetContents_2);
        thumbView->setObjectName(QString::fromUtf8("thumbView"));
        sizePolicy1.setHeightForWidth(thumbView->sizePolicy().hasHeightForWidth());
        thumbView->setSizePolicy(sizePolicy1);
        thumbView->setMinimumSize(QSize(150, 0));
        thumbView->setMaximumSize(QSize(16777215, 16777215));
        thumbView->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(thumbView);

        sortOptionsWgt = new QWidget(dockWidgetContents_2);
        sortOptionsWgt->setObjectName(QString::fromUtf8("sortOptionsWgt"));
        horizontalLayout_4 = new QHBoxLayout(sortOptionsWgt);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        resetSortingBtn = new QToolButton(sortOptionsWgt);
        resetSortingBtn->setObjectName(QString::fromUtf8("resetSortingBtn"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/gimp-reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetSortingBtn->setIcon(icon6);

        horizontalLayout_4->addWidget(resetSortingBtn);

        sortOptions = new QComboBox(sortOptionsWgt);
        sortOptions->setObjectName(QString::fromUtf8("sortOptions"));
        sortOptions->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        horizontalLayout_4->addWidget(sortOptions);


        verticalLayout->addWidget(sortOptionsWgt);


        verticalLayout_2->addLayout(verticalLayout);

        dockWidgetThumbnails->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidgetThumbnails);
        dockWidget_4 = new QDockWidget(MainWindow);
        dockWidget_4->setObjectName(QString::fromUtf8("dockWidget_4"));
        dockWidget_4->setMinimumSize(QSize(250, 199));
        dockWidget_4->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidget_4->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        filterList = new StageListView(dockWidgetContents_5);
        filterList->setObjectName(QString::fromUtf8("filterList"));
        filterList->setMinimumSize(QSize(0, 0));
        filterList->setMaximumSize(QSize(16777215, 16777215));
        filterList->setAutoScroll(false);
        filterList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        filterList->setTabKeyNavigation(false);
        filterList->setProperty("showDropIndicator", QVariant(false));
        filterList->setAlternatingRowColors(true);
        filterList->setSelectionMode(QAbstractItemView::SingleSelection);
        filterList->setSelectionBehavior(QAbstractItemView::SelectRows);
        filterList->setTextElideMode(Qt::ElideNone);
        filterList->setShowGrid(false);
        filterList->setWordWrap(false);
        filterList->setCornerButtonEnabled(false);

        verticalLayout_3->addWidget(filterList);

        scrollArea = new QScrollArea(dockWidgetContents_5);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 256, 185));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy3);
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        filterOptions = new NonOwningWidget(scrollAreaWidgetContents_2);
        filterOptions->setObjectName(QString::fromUtf8("filterOptions"));
        sizePolicy3.setHeightForWidth(filterOptions->sizePolicy().hasHeightForWidth());
        filterOptions->setSizePolicy(sizePolicy3);
        statusBarPanel = new QWidget(filterOptions);
        statusBarPanel->setObjectName(QString::fromUtf8("statusBarPanel"));
        statusBarPanel->setGeometry(QRect(9, 92, 231, 20));
        horizontalLayout_2 = new QHBoxLayout(statusBarPanel);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        statusLabelMousePos = new QLabel(statusBarPanel);
        statusLabelMousePos->setObjectName(QString::fromUtf8("statusLabelMousePos"));
        statusLabelMousePos->setMinimumSize(QSize(100, 0));
        statusLabelMousePos->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(statusLabelMousePos, 0, Qt::AlignRight);

        line_2 = new QFrame(statusBarPanel);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        statusLabelPhysSize = new QLabel(statusBarPanel);
        statusLabelPhysSize->setObjectName(QString::fromUtf8("statusLabelPhysSize"));
        statusLabelPhysSize->setMinimumSize(QSize(31, 0));
        statusLabelPhysSize->setAlignment(Qt::AlignCenter);
        statusLabelPhysSize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(statusLabelPhysSize);

        line = new QFrame(statusBarPanel);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        statusLabelPageNo = new QLabel(statusBarPanel);
        statusLabelPageNo->setObjectName(QString::fromUtf8("statusLabelPageNo"));
        statusLabelPageNo->setMinimumSize(QSize(31, 0));
        statusLabelPageNo->setAlignment(Qt::AlignCenter);
        statusLabelPageNo->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_2->addWidget(statusLabelPageNo);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addWidget(filterOptions);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea);

        dockWidget_4->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_4);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuDebug->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuDebug->addAction(actionFixDpi);
        menuDebug->addAction(actionRelinking);
        menuDebug->addAction(actionExport);
        menuDebug->addSeparator();
        menuDebug->addAction(actionSettings);
        menuFile->addAction(actionNewProject);
        menuFile->addAction(actionOpenProject);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveProject);
        menuFile->addAction(actionSaveProjectAs);
        menuFile->addSeparator();
        menuFile->addAction(actionCloseProject);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout_Qt);
        menuHelp->addAction(actionAbout);
        menuEdit->addAction(actionGoToPage);
        menuEdit->addAction(actionSelectPages);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSaveProject->setText(QCoreApplication::translate("MainWindow", "&Save Project", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveProject->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveProjectAs->setText(QCoreApplication::translate("MainWindow", "Save Project &As...", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveProjectAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewProject->setText(QCoreApplication::translate("MainWindow", "&New Project...", nullptr));
#if QT_CONFIG(shortcut)
        actionNewProject->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenProject->setText(QCoreApplication::translate("MainWindow", "&Open Project...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenProject->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCloseProject->setText(QCoreApplication::translate("MainWindow", "&Close Project", nullptr));
#if QT_CONFIG(shortcut)
        actionCloseProject->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSettings->setText(QCoreApplication::translate("MainWindow", "&Settings...", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionFixDpi->setText(QCoreApplication::translate("MainWindow", "Fix &DPI...", nullptr));
        actionRelinking->setText(QCoreApplication::translate("MainWindow", "&Relinking...", nullptr));
        actionExport->setText(QCoreApplication::translate("MainWindow", "&Export...", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About &Qt", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertEmptyPgBefore->setToolTip(QCoreApplication::translate("MainWindow", "Insert before", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionInsertEmptyPgBefore->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        actionInsertEmptyPgAfter->setToolTip(QCoreApplication::translate("MainWindow", "Insert after", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionInsertEmptyPgAfter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        actionRemoveFromProject->setToolTip(QCoreApplication::translate("MainWindow", "Remove from project", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRemoveFromProject->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopySourceFileName->setText(QCoreApplication::translate("MainWindow", "Copy source file name(s)", nullptr));
#if QT_CONFIG(shortcut)
        actionCopySourceFileName->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopyOutputFileName->setText(QCoreApplication::translate("MainWindow", "Copy output file name(s)", nullptr));
        actionCopyPageNumber->setText(QCoreApplication::translate("MainWindow", "Copy page number(s)", nullptr));
        actionGoToPage->setText(QCoreApplication::translate("MainWindow", "Go to page...", nullptr));
        actionSelectPages->setText(QCoreApplication::translate("MainWindow", "Select pages...", nullptr));
        menuDebug->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        dockWidgetThumbnails->setWindowTitle(QCoreApplication::translate("MainWindow", "Thumbnails", nullptr));
#if QT_CONFIG(statustip)
        inverseOrderButton->setStatusTip(QCoreApplication::translate("MainWindow", "Inverse page order", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        focusButton->setStatusTip(QCoreApplication::translate("MainWindow", "Keep current page in view.", nullptr));
#endif // QT_CONFIG(statustip)
        focusButton->setText(QString());
#if QT_CONFIG(tooltip)
        multiselectButton->setToolTip(QCoreApplication::translate("MainWindow", "Keep selection key pressed", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        multiselectButton->setStatusTip(QCoreApplication::translate("MainWindow", "Simulate press of the modifier key for fast page selection (Ctrl+CapsLock)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        multiselectButton->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+CapsLock", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(statustip)
        resetSortingBtn->setStatusTip(QCoreApplication::translate("MainWindow", "Reset sorting to default", nullptr));
#endif // QT_CONFIG(statustip)
        dockWidget_4->setWindowTitle(QCoreApplication::translate("MainWindow", "Filters", nullptr));
#if QT_CONFIG(tooltip)
        statusLabelMousePos->setToolTip(QCoreApplication::translate("MainWindow", "Mouse position", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        statusLabelMousePos->setStatusTip(QCoreApplication::translate("MainWindow", "Mouse position relative to page", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        statusLabelPhysSize->setToolTip(QCoreApplication::translate("MainWindow", "Physical size", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        statusLabelPhysSize->setStatusTip(QCoreApplication::translate("MainWindow", "Physical size of image. (Click to change units of measurement)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        statusLabelPageNo->setToolTip(QCoreApplication::translate("MainWindow", "Page number", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        statusLabelPageNo->setStatusTip(QCoreApplication::translate("MainWindow", "Position of the selected page in current order", nullptr));
#endif // QT_CONFIG(statustip)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
