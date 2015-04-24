/********************************************************************************
** Form generated from reading UI file 'analysis.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSIS_H
#define UI_ANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Analysis
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_plot;
    QPushButton *pushButton_start;
    QPushButton *pushButton_abort;
    QPushButton *pushButton_results;
    QGroupBox *groupBox_options;
    QGridLayout *gridLayout_2;
    QLabel *label_fct;
    QComboBox *comboBox_fcn;
    QLabel *label_3;
    QComboBox *comboBox_fitAs;
    QLabel *label_lib;
    QComboBox *comboBox_fitSettings;
    QLabel *label_res;
    QToolButton *toolButton_report;
    QComboBox *comboBox_dataType;
    QLabel *label_header;
    QComboBox *comboBox_report;
    QLabel *label_4;
    QComboBox *comboBox_dataFormat;
    QLineEdit *lineEdit_graphics;
    QLabel *label_ffct;
    QLineEdit *lineEdit_report;
    QLabel *label;
    QLabel *label_bins_2;
    QLineEdit *lineEdit_data;
    QToolButton *toolButton_runs;
    QLabel *label_sruns;

    void setupUi(QWidget *Analysis)
    {
        if (Analysis->objectName().isEmpty())
            Analysis->setObjectName(QStringLiteral("Analysis"));
        Analysis->resize(668, 591);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(209, 210, 140, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 230, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(232, 232, 185, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(104, 105, 70, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(139, 140, 93, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(232, 232, 197, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        QBrush brush8(QColor(253, 246, 246, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        Analysis->setPalette(palette);
        gridLayout = new QGridLayout(Analysis);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(Analysis);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        frame = new QFrame(Analysis);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_plot = new QPushButton(frame);
        pushButton_plot->setObjectName(QStringLiteral("pushButton_plot"));
        pushButton_plot->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_plot->sizePolicy().hasHeightForWidth());
        pushButton_plot->setSizePolicy(sizePolicy);
        pushButton_plot->setMinimumSize(QSize(122, 0));
        pushButton_plot->setMaximumSize(QSize(100000, 16777215));
        QPalette palette1;
        QBrush brush9(QColor(171, 204, 150, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        pushButton_plot->setPalette(palette1);

        horizontalLayout->addWidget(pushButton_plot);

        pushButton_start = new QPushButton(frame);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        sizePolicy.setHeightForWidth(pushButton_start->sizePolicy().hasHeightForWidth());
        pushButton_start->setSizePolicy(sizePolicy);
        pushButton_start->setMinimumSize(QSize(122, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        pushButton_start->setPalette(palette2);

        horizontalLayout->addWidget(pushButton_start);

        pushButton_abort = new QPushButton(frame);
        pushButton_abort->setObjectName(QStringLiteral("pushButton_abort"));
        sizePolicy.setHeightForWidth(pushButton_abort->sizePolicy().hasHeightForWidth());
        pushButton_abort->setSizePolicy(sizePolicy);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(245, 255, 239, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(208, 229, 194, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(85, 102, 75, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(114, 136, 100, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush14(QColor(213, 229, 202, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        QBrush brush15(QColor(255, 255, 220, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush15);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        pushButton_abort->setPalette(palette3);

        horizontalLayout->addWidget(pushButton_abort);

        pushButton_results = new QPushButton(frame);
        pushButton_results->setObjectName(QStringLiteral("pushButton_results"));
        sizePolicy.setHeightForWidth(pushButton_results->sizePolicy().hasHeightForWidth());
        pushButton_results->setSizePolicy(sizePolicy);
        pushButton_results->setMinimumSize(QSize(122, 0));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        pushButton_results->setPalette(palette4);

        horizontalLayout->addWidget(pushButton_results);


        gridLayout->addWidget(frame, 2, 0, 1, 1);

        groupBox_options = new QGroupBox(Analysis);
        groupBox_options->setObjectName(QStringLiteral("groupBox_options"));
        sizePolicy.setHeightForWidth(groupBox_options->sizePolicy().hasHeightForWidth());
        groupBox_options->setSizePolicy(sizePolicy);
        groupBox_options->setMinimumSize(QSize(0, 45));
        QPalette palette5;
        QBrush brush16(QColor(211, 212, 142, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush16);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        groupBox_options->setPalette(palette5);
        groupBox_options->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        gridLayout_2 = new QGridLayout(groupBox_options);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_fct = new QLabel(groupBox_options);
        label_fct->setObjectName(QStringLiteral("label_fct"));

        gridLayout_2->addWidget(label_fct, 4, 2, 1, 2);

        comboBox_fcn = new QComboBox(groupBox_options);
        comboBox_fcn->setObjectName(QStringLiteral("comboBox_fcn"));
        sizePolicy.setHeightForWidth(comboBox_fcn->sizePolicy().hasHeightForWidth());
        comboBox_fcn->setSizePolicy(sizePolicy);
        comboBox_fcn->setMinimumSize(QSize(0, 25));
        comboBox_fcn->setStyleSheet(QStringLiteral(""));
        comboBox_fcn->setEditable(false);

        gridLayout_2->addWidget(comboBox_fcn, 4, 4, 1, 1);

        label_3 = new QLabel(groupBox_options);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 4, 5, 1, 2);

        comboBox_fitAs = new QComboBox(groupBox_options);
        comboBox_fitAs->setObjectName(QStringLiteral("comboBox_fitAs"));
        sizePolicy.setHeightForWidth(comboBox_fitAs->sizePolicy().hasHeightForWidth());
        comboBox_fitAs->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_fitAs, 4, 7, 1, 1);

        label_lib = new QLabel(groupBox_options);
        label_lib->setObjectName(QStringLiteral("label_lib"));

        gridLayout_2->addWidget(label_lib, 4, 9, 1, 3);

        comboBox_fitSettings = new QComboBox(groupBox_options);
        comboBox_fitSettings->setObjectName(QStringLiteral("comboBox_fitSettings"));
        sizePolicy.setHeightForWidth(comboBox_fitSettings->sizePolicy().hasHeightForWidth());
        comboBox_fitSettings->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_fitSettings, 4, 12, 1, 1);

        label_res = new QLabel(groupBox_options);
        label_res->setObjectName(QStringLiteral("label_res"));
        QFont font;
        font.setFamily(QStringLiteral("Droid Sans"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label_res->setFont(font);
        label_res->setTextFormat(Qt::RichText);

        gridLayout_2->addWidget(label_res, 5, 0, 1, 2);

        toolButton_report = new QToolButton(groupBox_options);
        toolButton_report->setObjectName(QStringLiteral("toolButton_report"));

        gridLayout_2->addWidget(toolButton_report, 5, 2, 1, 2);

        comboBox_dataType = new QComboBox(groupBox_options);
        comboBox_dataType->setObjectName(QStringLiteral("comboBox_dataType"));

        gridLayout_2->addWidget(comboBox_dataType, 3, 4, 1, 1);

        label_header = new QLabel(groupBox_options);
        label_header->setObjectName(QStringLiteral("label_header"));

        gridLayout_2->addWidget(label_header, 5, 9, 1, 3);

        comboBox_report = new QComboBox(groupBox_options);
        comboBox_report->setObjectName(QStringLiteral("comboBox_report"));
        sizePolicy.setHeightForWidth(comboBox_report->sizePolicy().hasHeightForWidth());
        comboBox_report->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_report, 5, 12, 1, 1);

        label_4 = new QLabel(groupBox_options);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 5, 1, 1);

        comboBox_dataFormat = new QComboBox(groupBox_options);
        comboBox_dataFormat->setObjectName(QStringLiteral("comboBox_dataFormat"));
        sizePolicy.setHeightForWidth(comboBox_dataFormat->sizePolicy().hasHeightForWidth());
        comboBox_dataFormat->setSizePolicy(sizePolicy);
        comboBox_dataFormat->setMinimumSize(QSize(146, 28));
        comboBox_dataFormat->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(comboBox_dataFormat, 3, 7, 1, 1);

        lineEdit_graphics = new QLineEdit(groupBox_options);
        lineEdit_graphics->setObjectName(QStringLiteral("lineEdit_graphics"));
        lineEdit_graphics->setMinimumSize(QSize(125, 25));
        lineEdit_graphics->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(lineEdit_graphics, 3, 12, 1, 1);

        label_ffct = new QLabel(groupBox_options);
        label_ffct->setObjectName(QStringLiteral("label_ffct"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_ffct->sizePolicy().hasHeightForWidth());
        label_ffct->setSizePolicy(sizePolicy1);
        label_ffct->setFont(font);
        label_ffct->setTextFormat(Qt::RichText);

        gridLayout_2->addWidget(label_ffct, 4, 0, 1, 2);

        lineEdit_report = new QLineEdit(groupBox_options);
        lineEdit_report->setObjectName(QStringLiteral("lineEdit_report"));

        gridLayout_2->addWidget(lineEdit_report, 5, 4, 1, 4);

        label = new QLabel(groupBox_options);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 3, 2, 1, 1);

        label_bins_2 = new QLabel(groupBox_options);
        label_bins_2->setObjectName(QStringLiteral("label_bins_2"));
        sizePolicy1.setHeightForWidth(label_bins_2->sizePolicy().hasHeightForWidth());
        label_bins_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_bins_2, 3, 9, 1, 1);

        lineEdit_data = new QLineEdit(groupBox_options);
        lineEdit_data->setObjectName(QStringLiteral("lineEdit_data"));
        lineEdit_data->setEnabled(true);
        lineEdit_data->setMinimumSize(QSize(300, 25));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush16);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush16);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette6.setBrush(QPalette::Active, QPalette::HighlightedText, brush16);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush16);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush16);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush16);
        palette6.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
        lineEdit_data->setPalette(palette6);
        lineEdit_data->setStyleSheet(QStringLiteral(""));
        lineEdit_data->setFrame(true);

        gridLayout_2->addWidget(lineEdit_data, 1, 4, 2, 9);

        toolButton_runs = new QToolButton(groupBox_options);
        toolButton_runs->setObjectName(QStringLiteral("toolButton_runs"));
        sizePolicy1.setHeightForWidth(toolButton_runs->sizePolicy().hasHeightForWidth());
        toolButton_runs->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(toolButton_runs, 1, 2, 2, 1);

        label_sruns = new QLabel(groupBox_options);
        label_sruns->setObjectName(QStringLiteral("label_sruns"));
        QFont font1;
        font1.setFamily(QStringLiteral("Droid Sans"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_sruns->setFont(font1);
        label_sruns->setToolTipDuration(100000);
        label_sruns->setTextFormat(Qt::RichText);

        gridLayout_2->addWidget(label_sruns, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_options, 0, 0, 1, 1);


        retranslateUi(Analysis);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Analysis);
    } // setupUi

    void retranslateUi(QWidget *Analysis)
    {
        Analysis->setWindowTitle(QApplication::translate("Analysis", "ClassAnalysis", 0));
#ifndef QT_NO_ACCESSIBILITY
        tabWidget->setAccessibleName(QApplication::translate("Analysis", "Output_table", 0));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        pushButton_plot->setToolTip(QApplication::translate("Analysis", "Click here to view/create data", 0));
#endif // QT_NO_TOOLTIP
        pushButton_plot->setText(QApplication::translate("Analysis", "Plot", 0));
        pushButton_plot->setShortcut(QString());
        pushButton_start->setText(QApplication::translate("Analysis", "Fit", 0));
        pushButton_abort->setText(QApplication::translate("Analysis", "Abort", 0));
        pushButton_results->setText(QApplication::translate("Analysis", "Next", 0));
        label_fct->setText(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-size:8pt;\">type</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p>Fit as single or global (shared parameters between files)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-size:8pt;\">format</span></p></body></html>", 0));
        comboBox_fitAs->clear();
        comboBox_fitAs->insertItems(0, QStringList()
         << QApplication::translate("Analysis", "Single", 0)
         << QApplication::translate("Analysis", "Global", 0)
        );
#ifndef QT_NO_TOOLTIP
        label_lib->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p>Migrad method is used to get symmetric error for each parameter. </p><p>Minos method is used to find asymmetric errors (more accurate method, but takes longer time to computing).</p><p>Read minuit documentation http://seal.web.cern.ch/seal/documents/minuit/mnerror.pdf </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_lib->setText(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-size:8pt;\">options</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        label_res->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p>Report file, contains the results of the converged fits, </p><p>along the header variables (selected ones). </p><p>This is an ASCII file. </p><p>It can be imported into any software.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_res->setText(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-size:11pt;\">Output</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        toolButton_report->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p>Find the report file</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        toolButton_report->setText(QApplication::translate("Analysis", "..", 0));
#ifndef QT_NO_TOOLTIP
        label_header->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p>how to handle to the report file.</p><p>rewrite: always overwrites the previous content.</p><p>append: keep the previous content</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_header->setText(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-size:8pt;\">options</span></p></body></html>", 0));
        comboBox_report->clear();
        comboBox_report->insertItems(0, QStringList()
         << QApplication::translate("Analysis", "Rewrite", 0)
         << QApplication::translate("Analysis", "Append", 0)
         << QApplication::translate("Analysis", "Edit bnmr logs", 0)
        );
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p>Structure/type of the file to fit/create:</p><p><span style=\" font-weight:600;\">Ascii:</span></p><p>xy, xydy, xdxydy, xdxydy1dy2, xdx1dx2ydy1dy2</p><p>each file must have only ascii numbers and in column format as above.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-size:8pt;\">format</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        comboBox_dataFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit_graphics->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lineEdit_graphics->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_ffct->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p>fitting options</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_ffct->setText(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-size:11pt;\">Fitting</span></p></body></html>", 0));
        lineEdit_report->setText(QApplication::translate("Analysis", "results.fit", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p>type of data:</p><p>-bnmr</p><p>-ascii</p><p>more options can be added</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-size:8pt;\">type</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        label_bins_2->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-size:10pt;\">xmin,xmax</span></p><p><span style=\" font-size:10pt;\">In order and must be seprated by comma &quot;,&quot;</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_bins_2->setWhatsThis(QApplication::translate("Analysis", "What is this", 0));
#endif // QT_NO_WHATSTHIS
        label_bins_2->setText(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-size:8pt;\">options</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_data->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lineEdit_data->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_runs->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p>Load data</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        toolButton_runs->setText(QApplication::translate("Analysis", "..", 0));
#ifndef QT_NO_TOOLTIP
        label_sruns->setToolTip(QApplication::translate("Analysis", "<html><head/><body><p><span style=\" font-weight:600;\">Reading/fitting ASCII files</span><br/>-Files to fit should be either written in the lineEdit (separated by commas) or;<br/>in files of .list or .inf extension as above. <br/>-The file to fit must contain 3 columns only: [X Y DY] of plain numbers, and no characters.<br/>-If it is not in the same directory, then its full name with path should be given.<br/>Examples: <br/>1- Direct input: &quot;file1.txt,file2.txt,file3.txt&quot;<br/>2- .list file: contains a single ascii line: &quot;file1.txt,file2.txt,file3.txt&quot;<br/>3- .inf file: &quot;myruns.inf&quot;, contains columns.<br/>files year temp<br/>file1.txt 2015 100<br/>file2.txt 2014 200<br/>file3.txt 2015 300<br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_sruns->setStatusTip(QApplication::translate("Analysis", "<html><head/><body><p>Here you can either specify the run(s) to plot/fit or the ascii file that contains the run numbers. You can also fit plain ASCII files here.</p><p><br/></p><p>=========================fitting .msr files==============================</p><p>Instructions for using run numbers:</p><p>- &quot;|&quot; is used to separate runs of different years.</p><p>- &quot;,&quot; (coma) separates between run numbers.</p><p>- &quot;(-)&quot; is used to flip the asymmtry opposite to the original one, (either up or down). </p><p>- &quot;-&quot; separates between two numbers, which define a range of runs.</p><p>- No other characters allowed. </p><p>- No space is allowed.</p><p>- A year must always be specified in either direct input or file input.</p><p> Examples: </p><p>1- &quot;2011:45012,45672,42333|2013:45333(-),40123&quot;</p><p>2- &quot;2011:40100-40110&quot;</p><p><br/></p><p>Instructions for files containing a list of run numbers:</p><p>- Name the extension of the file as &quot;.list&quot; so the progra"
                        "m knows what to expect.</p><p>- The content of the file must follow the same instructions as for using run numbers.</p><p><br/></p><p>Example:  A file named &quot;myfavoriteruns.list&quot; contains a single line &quot;2010:45012,45672,41223,45012,40072,42313|2014:45123(-),40003&quot;</p><p><br/></p><p>=========================fitting ASCII files============================</p><p>Instructions for fitting ascii files:</p><p>-Name of the files to fit should be either written in the lineEdit (separated by commas) or;</p><p>- Contained in a file named with an extension &quot;inf&quot;. </p><p>-The ASCII file must contain 3 columns only: [X Y DY] of plain numbers, and no characters.</p><p><br/></p><p>Examples: </p><p>1- Direct input: &quot;file1.txt,file2.txt,file3.txt&quot;</p><p>2- Indirect input: &quot;myruns.inf&quot;, contains a single ascii line of filenames like above.</p></body></html>", 0));
#endif // QT_NO_STATUSTIP
        label_sruns->setText(QApplication::translate("Analysis", "<html><head/><body><p>Data</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Analysis: public Ui_Analysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSIS_H
