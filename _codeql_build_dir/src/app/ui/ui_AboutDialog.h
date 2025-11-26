/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLabel *label;
    QLabel *version;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_16;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *label_25;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_9;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *references;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *licenseViewer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(482, 349);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);
        label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(440, 127, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 2);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setText(QString::fromUtf8("Scan Tailor \"Universal\""));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_3->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/appicon-about.png")));

        gridLayout->addWidget(label, 0, 1, 2, 1);

        version = new QLabel(tab);
        version->setObjectName(QString::fromUtf8("version"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        version->setFont(font1);
        version->setText(QString::fromUtf8("version"));
        version->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        version->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(version, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -238, 430, 593));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_17->setFont(font2);

        verticalLayout_2->addWidget(label_17);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_2->addWidget(label_18);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        verticalLayout_2->addWidget(label_6);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setTextFormat(Qt::RichText);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_9->setWordWrap(true);
        label_9->setOpenExternalLinks(true);
        label_9->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_9);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);

        verticalLayout_2->addWidget(label_11);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_13);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font2);

        verticalLayout_2->addWidget(label_16);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_2->addWidget(label_12);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        verticalLayout_2->addWidget(label_10);

        label_25 = new QLabel(scrollAreaWidgetContents);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setText(QString::fromUtf8("<html><head/><body>phaedrus<br>denver 22<br>Taxman<br></body></html>"));
        label_25->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_25);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_9 = new QVBoxLayout(tab_4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        scrollArea_2 = new QScrollArea(tab_4);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 430, 1436));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        references = new QLabel(scrollAreaWidgetContents_2);
        references->setObjectName(QString::fromUtf8("references"));
        references->setTextFormat(Qt::RichText);
        references->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        references->setWordWrap(true);
        references->setOpenExternalLinks(true);
        references->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_8->addWidget(references);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_9->addWidget(scrollArea_2);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        licenseViewer = new QTextBrowser(tab_3);
        licenseViewer->setObjectName(QString::fromUtf8("licenseViewer"));
        licenseViewer->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p></body></html>"));
        licenseViewer->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(licenseViewer);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), AboutDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Scan Tailor \"Universal\"", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "Scan Tailor is an interactive post-processing tool for scanned pages. It performs operations such as page splitting, skew correction, adding/removing margins, and others. You give it raw scans, and you get pages ready to be printed or assembled into a PDF or DJVU file.  Scanning and optical character recognition is out of scope of this project.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AboutDialog", "About", nullptr));
        label_17->setText(QCoreApplication::translate("AboutDialog", "Lead Developer of original version", nullptr));
        label_18->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><a href=\"https://github.com/Tulon\"><span style=\" text-decoration: underline; color:#2980b9;\">Joseph Artsimovich</span></a></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>Lead Developer of <a href=\"https://github.com/trufanov-nok/scantailor-universal\"><span style=\" text-decoration: underline; color:#2980b9;\">Universal</span></a> version</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><a href=\"https://github.com/trufanov-nok\"><span style=\" text-decoration: underline; color:#2980b9;\">Alexander Trufanov</span></a></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("AboutDialog", "Based of following projects", nullptr));
        label_9->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><a href=\"http://scantailor.org/\"><span style=\" text-decoration: underline; color:#2980b9;\">ScanTailor</span></a> (master and <a href=\"https://github.com/scantailor/scantailor/tree/qt5\"><span style=\" text-decoration: underline; color:#2980b9;\">qt5</span></a> branch) by <a href=\"https://github.com/Tulon\"><span style=\" text-decoration: underline; color:#2980b9;\">Joseph Artsimovich</span></a><br/>ScanTailor <a href=\"https://github.com/Tulon/scantailor/tree/experimental\"><span style=\" text-decoration: underline; color:#2980b9;\">Experimental</span></a> by <a href=\"https://github.com/Tulon\"><span style=\" text-decoration: underline; color:#2980b9;\">Joseph Artsimovich</span></a> (Tulon)<br/>ScanTailor <a href=\"https://github.com/scantailor/scantailor/tree/enhanced\"><span style=\" text-decoration: underline; color:#2980b9;\">Enhanced</span></a> by <a href=\"https://github.com/pejuko\"><span style=\" text-decoration: underline; color:#2980b9;\">Petr Kov\303\241\305\231</span></"
                        "a> (pejuko)<br/>ScanTailor <a href=\"https://github.com/scantailor/scantailor/tree/featured\"><span style=\" text-decoration: underline; color:#2980b9;\">Featured</span></a> by <a href=\"http://djvu-soft.narod.ru/\"><span style=\" text-decoration: underline; color:#2980b9;\">Victor Ivanov</span></a> (monday2000)<br/>ScanTailor <a href=\"https://github.com/scantailor/scantailor/tree/plus\"><span style=\" text-decoration: underline; color:#2980b9;\">Plus</span></a> by <a href=\"https://github.com/DikBSD\"><span style=\" text-decoration: underline; color:#2980b9;\">Vadim Kuznetsov</span></a> (DikBSD)<br/>ScanTailor <a href=\"https://github.com/4lex4/scantailor-advanced\"><span style=\" text-decoration: underline; color:#2980b9;\">Advanced</span></a> by <a href=\"https://github.com/4lex4\"><span style=\" text-decoration: underline; color:#2980b9;\">4lex4</span></a></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("AboutDialog", "Notable ST contributors:", nullptr));
        label_13->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body>Robert B. - First generation dewarping algorithm<br>Andrey Bergman - System load adjustment<br>U235 - Picture auto-detection algorithm<br>Petr Kov\303\241\305\231 - Command line interface</body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("AboutDialog", "Translators", nullptr));
        label_8->setText(QCoreApplication::translate("AboutDialog", "English - Alexander Trufanov\n"
"Russian - Alexander Trufanov", nullptr));
        label_16->setText(QCoreApplication::translate("AboutDialog", "Documentation", nullptr));
        label_12->setText(QCoreApplication::translate("AboutDialog", "<a href=https://github.com/ashipunov>Alexey Shipunov</a>", nullptr));
        label_10->setText(QCoreApplication::translate("AboutDialog", "ST documentation", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AboutDialog", "Authors", nullptr));
        references->setText(QCoreApplication::translate("AboutDialog", "<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Recursive+implementation+of+the+Gaussian+filter\">[1]</a> Young, Ian T., and Lucas J. Van Vliet. \"Recursive implementation of the Gaussian filter.\" Signal processing 44.2 (1995): 139-151.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Boundary+conditions+for+Young-van+Vliet+recursive+filtering\">[2]</a> Triggs, Bill, and Micha\303\253l Sdika. \"Boundary conditions for Young-van Vliet recursive filtering.\" Signal Processing, IEEE Transactions on 54.6 (2006): 2365-2367.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Fast+anisotropic+gauss+filtering\">[3]</a> Geusebroek, Jan-Mark, Arnold WM Smeulders, and Joost Van de Weijer. \"Fast anisotropic gauss filtering.\" Image Processing, IEEE Transactions on 12.8 (2003): 938-943.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Structured+second-and+higher-order+derivatives+through+univariate+Taylor+series\">[4]</a> Bischof, Christian, George Corliss, and A"
                        "ndreas Griewank. \"Structured second-and higher-order derivatives through univariate Taylor series.\" Optimization Methods and Software 2.3-4 (1993): 211-232.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=A+concept+for+parametric+surface+fitting+which+avoids+the+parametrization+problem\">[5]</a> Pottmann, Helmut, and Stefan Leopoldseder. \"A concept for parametric surface fitting which avoids the parametrization problem.\" Computer Aided Geometric Design 20.6 (2003): 343-362.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Fitting+b-spline+curves+to+point+clouds+by+squared+distance+minimization\">[6]</a> Wang, Wenping, Helmut Pottmann, and Yang Liu. \"Fitting b-spline curves to point clouds by squared distance minimization.\" Preprint, University of Hong Kong (2004).\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=A+threshold+selection+method+from+gray-level+histograms\">[7]</a> Otsu, Nobuyuki. \"A threshold selection method from gray-level histograms."
                        "\" Automatica 11.285-296 (1975): 23-27.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Adaptive+thresholding+based+on+co-occurrence+matrix+edge+information\">[8]</a> Mokji, Musa Mohd, and S. A. R. A. Bakar. \"Adaptive thresholding based on co-occurrence matrix edge information.\" Modelling &amp; Simulation, 2007. AMS'07. First Asia International Conference on. IEEE, 2007.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Niblack%2C+W.%3A+An+Introduction+to+Digital+Image+Processing.\">[9]</a> Niblack, Wayne. An introduction to digital image processing. Englewood Cliffs, N. J., Prentice Hall (1986) 115-116\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=An+adaptive+binarization+technique+for+low+quality+historical+documents\">[10]</a> Gatos, Basilios, Ioannis Pratikakis, and Stavros J. Perantonis. \"An adaptive binarization technique for low quality historical documents.\" Document Analysis Systems VI. Springer Berlin Heidelberg, 2004. 102-113.\n"
"</p>\n"
""
                        "<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Adaptive+document+image+binarization\">[11]</a> Sauvola, Jaakko, and Matti Pietik\303\244inen. \"Adaptive document image binarization.\" Pattern recognition 33.2 (2000): 225-236.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Text+localization%2C+enhancement+and+binarization+in+multimedia+documents\">[12]</a> Wolf, Christian, Jean-Michel Jolion, and Francoise Chassaing. \"Text localization, enhancement and binarization in multimedia documents.\" Pattern Recognition, 2002. Proceedings. 16th International Conference on. Vol. 2. IEEE, 2002.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=A+fast+algorithm+for+local+minimum+and+maximum+filters+on+rectangular+and+octagonal+kernels\">[13]</a> Van Herk, Marcel. \"A fast algorithm for local minimum and maximum filters on rectangular and octagonal kernels.\" Pattern Recognition Letters 13.7 (1992): 517-521.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Findi"
                        "ng+Lines+under+Bounded+Error\">[14]</a> Breuel, Thomas M. \"Finding lines under bounded error.\" Pattern recognition 29.1 (1996): 167-178.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Morphological+grayscale+reconstruction+in+image+analysis%3A+applications+and+efficient+algorithms\">[15]</a> Vincent, Luc. \"Morphological grayscale reconstruction in image analysis: applications and efficient algorithms.\" Image Processing, IEEE Transactions on 2.2 (1993): 176-201.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?hl=en&q=Binarization+of+Badly+Illuminated+Document+Images+through+Shading+Estimation+and+Compensation\">[16]</a> Lu, Shijian, and Chew Lim Tan. \"Binarization of badly illuminated document images through shading estimation and compensation.\" Document Analysis and Recognition, 2007. ICDAR 2007. Ninth International Conference on. Vol. 1. IEEE, 2007.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Rectifying+the+bound+document+image+captured+by+the+"
                        "camera%3A+A+model+based+approach#\">[17]</a> Cao, Huaigu, Xiaoqing Ding, and Changsong Liu. \"Rectifying the bound document image captured by the camera: A model based approach.\" Document Analysis and Recognition, 2003. Proceedings. Seventh International Conference on. IEEE, 2003.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=X-splines%3A+A+spline+model+designed+for+the+end-user\">[18]</a> Blanc, Carole, and Christophe Schlick. \"X-splines: A spline model designed for the end-user.\" Proceedings of the 22nd annual conference on Computer graphics and interactive techniques. ACM, 1995.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=Danielsson+Euclidean+distance+mapping\">[19]</a> Danielsson, Per-Erik. \"Euclidean distance mapping.\" Computer Graphics and image processing 14.3 (1980): 227-248.\n"
"</p>\n"
"<p>\n"
"<a href=\"http://scholar.google.com/scholar?q=A+general+algorithm+for+computing+distance+transforms+in+linear+time\">[20]</a> Meijster, Arnold, Jos BTM Roerdink"
                        ", and Wim H. Hesselink. \"A general algorithm for computing distance transforms in linear time.\" Mathematical Morphology and its applications to image and signal processing. Springer US, 2002. 331-340.\n"
"</p>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("AboutDialog", "References", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("AboutDialog", "License", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
