/***************************************************************************
*  File: mainwindow.h                                                      *
*  Description: classes of mainwidow                                       *
*  Author: Hassan Saadaoui                                                 *
*  e-mail: saadaoui@triumf.ca                                              *
*  $Id: mainwidow.h 2014-12-20 $                                           *
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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QPushButton>
#include <QTextBrowser>
#include <QComboBox>
#include <QDialogButtonBox>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QToolButton>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QComboBox>
#include <QDialogButtonBox>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QToolButton>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QActionGroup>
#include <QStandardItemModel>
#include <QDialog>
#include <QMessageBox>
#include <QStyleFactory>
#include <QtGui>
#include <iostream>
#include <QMainWindow>
#include <iostream>
#include <QIcon>
#include <QList>
#include <QPixmap>
#include <QTextStream>
#include <QHBoxLayout>
#include <QColor>
#include <QSpinBox>
#include <QWidgetAction>

#include "analysis.h"
#include "results.h"
#include "database.h"
#include "graphics.h"
namespace Ui {
class Mainwindow;
}

class Mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mainwindow(QWidget *parent = 0);

    ~Mainwindow();

    static Mainwindow* instance();

    QString dataPath(QString);

    static bool combinePlots;

private:
    void readSettings();
    void createImagesGroupBox();
    void writeSettings();
    void createActions();
    void createMenus();
    void checkCurrentStyle();
    void createGraphics();
    void createPages();

    Ui::Mainwindow *mainGUI;
    QTabWidget *pagesTabWidget;

    QMenu        *viewMenu;
    QMenu        *fileMenu;
    QMenu        *editMenu;
    QMenu        *fitMenu;
    QMenu        *helpMenu;
    QMenu        *graphicsMenu;

    QActionGroup *styleActionGroup;
    QActionGroup *colorActionGroup;

    QAction    *show_stream_window;
    QAction    *Action_file_new;
    QAction    *Action_file_old;
    QAction    *Action_file_exit;
    QAction    *Action_edit_paths;
    QAction    *Action_graphics_qcp;
    QAction    *Action_graphics_keepPlots;
    QAction    *Action_graphics_keepAscii;
    QAction    *Action_graphics_combinePlots;
    QAction    *Action_about;
    QAction    *Action_tutorial;
    QAction    *Action_tips;

public slots:
    void Menu_newgui();
    void Menu_changeStyle(bool);
    void Menu_changeColor(bool);
    void Menu_combinePlots(bool);
    void Menu_about();
    void Menu_help();
    void Menu_tutorial();
};

#endif // MAINWINDOW_H
