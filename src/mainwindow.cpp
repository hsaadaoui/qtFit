/***************************************************************************
*  File: mainwindow.cpp                                                    *
*  Description: invokes the gui                                            *
*  Author: Hassan Saadaoui                                                 *
*  e-mail: saadaoui@triumf.ca                                              *
*  $Id: mainwindow.cpp 2014-12-20 $                                        *
*  Copyright (C) 2014 by Hassan Saadaoui                                   *
***************************************************************************/
/***************************************************************************
    This file is part of qtfit.

    qtfit is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    qtfit  is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with qtfit .  If not, see <http://www.gnu.org/licenses/>.
***************************************************************************/

/***************************************************************************
List of Changes:
----------------------------------------------------------------------------
TYPE  DATE        AUTHOR  DESCRIBE
***************************************************************************/

#include <iostream>                 //Header file for outputting data
#include <fstream>                  //Header file for outputting data
#include <math.h>
#include <string>
#include <stdio.h>
using namespace std;
#include<QStringList>
#include<QWebView>
#include<QMap>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "graphics.h"


Mainwindow::Mainwindow(QWidget *parent) :
    QMainWindow(parent),
    mainGUI(new Ui::Mainwindow)
{
    mainGUI->setupUi(this);
    createGraphics();
    createActions();
    createMenus();
    checkCurrentStyle();
    createPages();
}

Mainwindow::~Mainwindow()
{
    delete mainGUI;
}

void Mainwindow::createGraphics()
{
    //Set Window icon and size
    setWindowIcon(QIcon(":/images/qtfit-logo.png"));
    resize(QSize(720, 920));
    setStyleSheet("QLineEdit, QComboBox, QSpinBox "
                  "{background-color:rgba(246,246,246,255);color:black}"
                  "QGroupBox {border: 1px solid gray;border-radius: 5px; margin-top: 1ex;}"
                  "QFrame {background-color:rgba(171,224,137,255);}");
}

void Mainwindow::createPages()
{
    QLabel *owner = new QLabel("qtFit 2015 (c) Hassan Saadaoui");
    statusBar()->addWidget(owner);
    pagesTabWidget  = new QTabWidget;
    pagesTabWidget->setObjectName("pagesTabWidget");
    pagesTabWidget->setIconSize(QSize(40,40));

    Analysis *tab_analysis = new Analysis;
    pagesTabWidget->addTab(tab_analysis, QIcon(":/images/analyze.png"),
                           QString("       Regression      "));

    Results *tab_results = new Results;
    pagesTabWidget->addTab(tab_results,  QIcon(":/images/results.png"),
                           QString("        Results       "));


    Graphics *tab_graphics =Graphics::instance();
    pagesTabWidget->addTab(tab_graphics,  QIcon(":/images/graphics.png"),
                           QString("        Graphics       "));

    Database *tab_database = new Database;
    pagesTabWidget->addTab(tab_database,  QIcon(":/images/database.png"),
                           QString("        Archive          "));

    this->setCentralWidget(pagesTabWidget);
}

void Mainwindow::Menu_newgui()
{
    popen("./qtfit","w");
}

void Mainwindow::Menu_changeStyle(bool checked)
{
    if (!checked)
    {
        return;
    }
    QAction *action = qobject_cast<QAction *>(sender());
    QStyle *style = QStyleFactory::create(action->data().toString());
    Q_ASSERT(style);
    QApplication::setStyle(style);
}

void Mainwindow::checkCurrentStyle()
{
    foreach (QAction *action, styleActionGroup->actions()) {
        QString styleName = action->data().toString();
        QStyle *candidate = QStyleFactory::create(styleName);
        Q_ASSERT(candidate);
        if (candidate->metaObject()->className()
                == QApplication::style()->metaObject()->className()) {
            action->trigger();
            return;
        }
        delete candidate;
    }
}

void Mainwindow::Menu_changeColor(bool checked)
{
    if (!checked)
    {
        return;
    }
    QAction *action = qobject_cast<QAction *>(sender());
    QString color = action->data().toString();

    if (color=="olive")
    {
        setStyleSheet("background-color: rgba(209,210,140,255);");
    }
    else if (color=="green")
    {
        setStyleSheet("background-color: rgba(171,224,137,255);");
    }
    else if (color=="gray+white")
    {
        setStyleSheet("QLineEdit, QComboBox, QSpinBox "
                      "{background-color:rgba(246,246,246,255);color:black}"
                      "QGroupBox {border: 1px solid gray;border-radius: 5px; margin-top: 1ex;}"
                      "QFrame {background-color:darkGray}");
    }
    else if (color=="olive+white")
    {
        setStyleSheet("QLineEdit, QComboBox, QSpinBox "
                      "{background-color:rgba(246,246,246,255);color:black}"
                      "QGroupBox {border: 1px solid gray;border-radius: 5px; margin-top: 1ex;}"
                      "QFrame {background-color:rgba(209,210,140,255)}");
    }
    else if (color=="green+white")
    {
        setStyleSheet("QLineEdit, QComboBox, QSpinBox "
                      "{background-color:rgba(246,246,246,255);color:black}"
                      "QGroupBox {border: 1px solid gray;border-radius: 5px; margin-top: 1ex;}"
                      "QFrame {background-color:rgba(171,224,137,255);}");
    }
    else
        setStyleSheet("QLineEdit, QComboBox, QSpinBox "
                      "{background-color:rgba(246,246,246,255);color:black}"
                      "QGroupBox {border: 1px solid gray;border-radius: 5px; margin-top: 1ex;}"
                      "QFrame {background-color:rgba(171,224,137,255);}");
}

void Mainwindow::createActions()
{
    Action_file_new = new QAction(QIcon(":/images/open.png"), tr("&Open new"), this);
    Action_file_new->setShortcut(tr("Ctrl+N"));
    Action_file_new->setStatusTip(tr("Open a new qtfit GUI"));
    connect(Action_file_new, SIGNAL(triggered()), this, SLOT(Menu_newgui()));

    Action_file_exit = new QAction(QIcon(":/images/exit.png"),tr("&Quit"), this);
    Action_file_exit->setShortcut(tr("Ctrl+Q"));
    Action_file_exit->setStatusTip(tr("Close this GUI"));
    connect(Action_file_exit, SIGNAL(triggered()), this, SLOT(close()));

    styleActionGroup = new QActionGroup(this);
    foreach (QString styleName, QStyleFactory::keys()) {
        QAction *action = new QAction(styleActionGroup);
        action->setText(tr("%1 Style").arg(styleName));
        action->setData(styleName);
        action->setCheckable(true);
        connect(action,SIGNAL(triggered(bool)),this, SLOT(Menu_changeStyle(bool)));
    }

    colorActionGroup = new QActionGroup(this);
    QStringList colors;
    colors <<"default"<<"olive"<<"green"<<"olive+white"<<"gray+white"<<"green+white";
    foreach (QString colorName, colors) {
        QAction *action = new QAction(colorActionGroup);
        action->setText(tr("%1").arg(colorName));
        action->setData(colorName);
        action->setCheckable(true);
        connect(action,SIGNAL(triggered(bool)),this, SLOT(Menu_changeColor(bool)));
    }

    Action_graphics_combinePlots= new QAction(tr("&Combine Plots"), this);
    Action_graphics_combinePlots->setCheckable(true);
    connect(Action_graphics_combinePlots,SIGNAL(toggled(bool)),this, SLOT(Menu_combinePlots(bool)));

    Action_tutorial = new QAction(QIcon(":/images/tuto.png"),tr("&Tutorial"), this);
    Action_tutorial->setShortcut(tr("Ctrl+T"));
    connect(Action_tutorial, SIGNAL(triggered()), this, SLOT(Menu_tutorial()));

    Action_tips = new QAction(QIcon(":/images/tips.png"),tr("&Tips"), this);
    connect(Action_tips, SIGNAL(triggered()), this, SLOT(Menu_help()));

    Action_about = new QAction(QIcon(":/images/logo2.png"),tr("&About"), this);
    connect(Action_about, SIGNAL(triggered()), this, SLOT(Menu_about()));
}


void Mainwindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(Action_file_new);
    fileMenu->addAction(Action_file_exit);

    menuBar()->addSeparator();

    editMenu = menuBar()->addMenu(tr("&Edit"));

    viewMenu = menuBar()->addMenu(tr("&View"));
    viewMenu->addSeparator()->setText(tr("Style"));
    foreach (QAction *action, styleActionGroup->actions())
        viewMenu->addAction(action);

    viewMenu->addSeparator()->setText(tr("Color"));
    foreach (QAction *action, colorActionGroup->actions())
        viewMenu->addAction(action);

    viewMenu->addSeparator();

    graphicsMenu = menuBar()->addMenu(tr("&Plotting"));
    //graphicsMenu->addAction(Action_graphics_combinePlots);

    menuBar()->addSeparator();

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(Action_about);
    helpMenu->addAction(Action_tips);
    helpMenu->addAction(Action_tutorial);
}

bool  Mainwindow::combinePlots = false;

void Mainwindow::Menu_combinePlots(bool state)
{
    combinePlots = state;
}

void Mainwindow::Menu_about()
{
    QMessageBox::about(this, tr("About Menu"),
                       tr("<center><font color=red><b>qtfit [version 15.03.2015]</b></font><br>"
                          "Written in C/C++ and Qt 5.<br>"
                          "<br><b><font color=red>Developped by Hassan Saadaoui.</b></font><br>"
                          "For any questions, please contact:<br>"
                          "saadaoui@triumf.ca<br><br>"
                          "Please<b><font color=red> acknowledge the author</b></font> in your<br>"
                          "work, if you have used the program offline."));
}

void Mainwindow::Menu_help()
{
    QMessageBox::about(this, tr("Tips"),
                       tr("Hover the mouse index onto of the labels\n"
                          "to get some tips"));
}

void Mainwindow::Menu_tutorial()
{
    bool openState = QDesktopServices::openUrl(QUrl("/usr/local/qtfit/doc/tutorial.html"));
    bool openpdf = QDesktopServices::openUrl(QUrl("/usr/local/qtfit/doc/tutorial.pdf"));
    if (openState == false)
    {
        openState = QDesktopServices::openUrl(QUrl("qrc:/doc/tutorial.html"));
        if (openState == false)
        {
            qDebug()<<"Error: cannot find the tutorial page";
        }
    }
}
