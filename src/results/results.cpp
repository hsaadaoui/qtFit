/***************************************************************************
*  File: results.cpp                                                       *
*  Description: reads and makes 2D plots out of the fitting results files. *
*  Author: Hassan Saadaoui                                                 *
*  e-mail: saadaoui@triumf.ca                                              *
*  $Id:  results.cpp  2014-12-20 $                                         *
*  Copyright (C) 2011 by Hassan Saadaoui                                   *
***************************************************************************/
/***************************************************************************
    This file is part of qtFit.

    qtFit is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    qtFit  is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with qtFit .  If not, see <http://www.gnu.org/licenses/>.
***************************************************************************/

/***************************************************************************
List of Changes:
----------------------------------------------------------------------------
TYPE  DATE        AUTHOR  DESCRIBE
***************************************************************************/

#include<iostream>
#include<fstream>
#include<math.h>
#include<string>
#include<stdio.h>
using namespace std;
#include <QString>
#include <QSpinBox>
#include <QFileDialog>
#include <QDir>
#include <QtGui>
#include <QMainWindow>
#include <QHeaderView>
#include <QTableWidget>
#include <QMessageBox>
#include <QIcon>
#include <QList>
#include <QPixmap>
#include <QProcess>
#include "results.h"
#include "ui_results.h"
#include "graphics.h"

Results::Results(QWidget *parent) :
    QWidget(parent),
    resGUI(new Ui::Results)
{
    resGUI->setupUi(this);
}

Results::~Results()
{
    delete resGUI;
}


void Results::on_lineEdit_filename_textChanged(const QString &arg1)
{
    on_lineEdit_filename_returnPressed();
}


void Results::on_lineEdit_filename_returnPressed()
{

    QString filename = resGUI->lineEdit_filename  -> text();
    if(!filename.isEmpty())
    {
        QString suffix   = QFileInfo(filename).suffix();
        QString basename = QFileInfo(filename).baseName();
        QFile   report(filename);report.open(QIODevice::ReadOnly);
        QTextStream inDataFile(&report);
        if (report.exists())
        {
            QStringList TableArgs = inDataFile.readLine().split(QRegExp("\\s+"));
            if ( TableArgs.size() != 0 )
            {
                QTableWidget *newtable  = new QTableWidget(this);
                newtable  ->  setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
                newtable  ->  setSelectionMode(QAbstractItemView::NoSelection);

                int nbrows = TableArgs.size(), nbcols = 2;
                newtable  ->  setColumnCount(nbcols);
                newtable  ->  setRowCount(nbrows);

                QHeaderView * tableWidget_headers = newtable -> horizontalHeader();
                QStringList labels;
                labels << tr("x axis") << tr("y axis");
                newtable->setHorizontalHeaderLabels(labels);
                tableWidget_headers->resizeSections(QHeaderView::Interactive);//ResizeToContents);
                tableWidget_headers->setSectionResizeMode(QHeaderView::Stretch);
                for (int row = 0 ; row <nbrows ; row ++ )
                {
                    QTableWidgetItem *xaxis=new QTableWidgetItem(TableArgs.at(row));
                    xaxis->setFlags( Qt::ItemIsEnabled  | Qt::ItemIsUserCheckable);
                    xaxis->setCheckState(Qt::Unchecked);
                    xaxis->setTextAlignment(Qt::AlignHCenter);
                    newtable->setItem(row,0,xaxis);

                    QTableWidgetItem *yaxis=new QTableWidgetItem(TableArgs.at(row));
                    yaxis->setFlags( Qt::ItemIsEnabled  | Qt::ItemIsUserCheckable);
                    yaxis->setCheckState(Qt::Unchecked);
                    yaxis->setTextAlignment(Qt::AlignHCenter);
                    newtable->setItem(row,1,yaxis);
                }
                resGUI->tabWidget->setTabsClosable(true);
                resGUI->tabWidget->addTab(newtable, QString(basename) );
                resGUI->tabWidget->setCurrentIndex(resGUI->tabWidget->count()-1);
                resGUI->tabWidget->setTabToolTip(resGUI->tabWidget->count()-1, QString(filename));
            }
            else
            {
                QMessageBox::warning(this, tr("Error:"),
                                     tr("Data file %1 has no headers\n"
                                        "...how am I suppose to know which is which.")
                                     .arg(filename));
            }
        }
        else
            QMessageBox::warning(this, tr("Fatal Error:"),
                                 tr("Data file %1 does not exist")
                                 .arg(filename));
    }
}


void Results::on_pushButton_browse_clicked()
{
    QString filename =QFileDialog::getOpenFileName(this,tr("Open File"),
                                                   "./",tr("Data file(*.db *.txt *.fit)"));
    resGUI->lineEdit_filename  -> setText(filename);
    on_lineEdit_filename_returnPressed();
}


void Results::on_pushButton_plot_clicked()
{

    for (int tab=0; tab <resGUI->tabWidget->count(); tab ++)
    {
        QTableWidget *table = static_cast<QTableWidget *>(resGUI->tabWidget->widget(tab) );

        QString   dataFile  =resGUI->tabWidget->tabToolTip(tab);

        QFile oreport(dataFile);
        oreport.open(QIODevice::ReadOnly);
        QTextStream inDataFile(&oreport);

        if (!oreport.exists())
            QMessageBox::warning(this, tr("Fatal Error"),
                                 tr("% could not be found.")
                                 .arg(dataFile));
        else
        {
            int         nbofvars = table->rowCount();
            //Reads the first line of the file which should contain the labels.
            inDataFile.readLine();

            int nbofruns = 0;
            QVector< QVector <QString> > data;
            QString str;
            while(true)
            {
                data.resize( nbofruns +1);
                for (int j = 0; j < nbofvars  ; j ++ )
                {
                    inDataFile >> str;
                    data[ nbofruns ].push_back(str);
                }
                if (inDataFile.atEnd()) break;
                nbofruns ++;
            }

            QVector<QString>  file2write;
            QVector<int>      xformat,yformat,nbsets;
            QVector<QString>  names,xLabels,yLabels,legends,titles;


            for (int xrow= 0 ; xrow < table->rowCount() ; xrow ++ )
            {
                QTableWidgetItem *xtable = table->item(xrow, 0);
                if (xtable -> checkState ()/2 == 1)
                {
                    for (int yrow= 0 ; yrow < table->rowCount() ; yrow ++ )
                    {
                        QTableWidgetItem *ytable = table->item(yrow, 1);
                        if ( ytable -> checkState ()/2 == 1)
                        {
                            QString itemName = QFileInfo(dataFile).baseName()
                                    + "_" + ytable -> text() + "_vs_" + xtable -> text() + ".dat";
                            itemName.remove(QRegExp("\\([KG]\\)"));
                            itemName.remove(QRegExp("\\(min\\)"));
                            itemName.remove(QRegExp("\\(kHz\\)"));
                            itemName.remove(QRegExp("\\(keV\\)"));
                            itemName.remove(QRegExp("\\(kV\\)"));
                            itemName.remove(QRegExp("1/"));
                            itemName.remove(QRegExp("\\(ms\\)"));
                            itemName.remove(QRegExp("\\(s\\)"));
                            itemName.remove(QRegExp("\\("));
                            itemName.remove(QRegExp("\\)"));


                            file2write.push_back(itemName);
                            names.push_back(itemName);
                            nbsets.push_back(1);
                            xLabels.push_back(xtable->text()) ;
                            yLabels.push_back(ytable->text()) ;
                            titles.push_back("");
                            legends.push_back("");

                            QFile outFile(itemName);
                            outFile.open(QIODevice::WriteOnly);
                            QTextStream outData(&outFile);

//                            outData<<"#Data extracted from "<<dataFile <<endl;
//                            outData<<"#Created on "<<QDate::currentDate().toString()
//                                  <<"\t at"<<QTime::currentTime().toString()<<endl;
//                            outData<<"#" <<xtable->text() <<"\td"<< xtable->text()
//                                  <<"\t"<<ytable->text() <<"\td"<< ytable->text() <<endl;
                            QStringList X,Y;
                            double x,y,dxP,dyP,dxM,dyM;
                            for (int n = 0 ; n < nbofruns ; n ++ )
                            {
                                X = data[n].at(xrow).split(QRegExp(","));
                                Y = data[n].at(yrow).split(QRegExp(","));
                                x = X.at(0).toDouble();
                                y = Y.at(0).toDouble();
                                xformat.push_back(X.size());
                                yformat.push_back(Y.size());
                                if (X.size()>=1)
                                {
                                    outData<<x <<"\t";
                                }
                                if (X.size()>=2)
                                {
                                    dxP = X.at(1).toDouble();
                                    outData<<dxP <<"\t";
                                }
                                if (X.size()>=3)
                                {
                                    dxM = X.at(2).toDouble();
                                    outData<<dxM <<"\t";
                                }
                                if (Y.size()>=1)
                                {
                                    outData<<y<<"\t";
                                }
                                if (Y.size()>=2)
                                {
                                    dyP = Y.at(1).toDouble();
                                    outData<<dyP <<"\t";
                                }
                                if (Y.size()>=3)
                                {
                                    dyM = Y.at(2).toDouble();
                                    outData<<dyM <<"\t";
                                }
                                outData<<"\n";
                            }
                            outFile.close();
                        }
                    }
                }
            }
            int nbgraphs = names.size();
            //Graphics plots;
            if ( nbgraphs > 0)
            {
                Graphics::instance()->qcp(file2write,xLabels,yLabels,xformat,yformat);
                QTabWidget *tab = qobject_cast<QTabWidget*>(this->parent()->parent()->parent()
                                                                ->findChild<QTabWidget*>
                                                                ("pagesTabWidget"));
                    if (tab != NULL && tab->count() > 2 )
                        tab->setCurrentIndex(2);
            }
            else
                QMessageBox::warning(this, tr("Warning:"),tr("No plots have been selected"));
        }
    }
}

void Results::on_pushButton_clear_clicked()
{
    for (int tab=0; tab <resGUI->tabWidget->count(); tab ++)
    {
        QTableWidget *table = static_cast<QTableWidget *>(resGUI->tabWidget->widget(tab) );
        for (int xrow= 0 ; xrow < table->rowCount() ; xrow ++ )
        {
            for (int yrow= 0 ; yrow < table->rowCount() ; yrow ++ )
            {
                table->item(yrow, 1)->setCheckState(Qt::Unchecked);
                table->item(xrow, 0)->setCheckState(Qt::Unchecked);
            }
        }
    }
}

void Results::on_tabWidget_tabCloseRequested(int index)
{
    resGUI->tabWidget->removeTab(index);
}

void Results::on_pushButton_purge_clicked()
{
    int nbTabs = resGUI->tabWidget->count();
    for (int i = 0; i < nbTabs; i++)
        resGUI->tabWidget->removeTab(i);
}

void Results::on_pushButton_next_clicked()
{
    //find the objectname of the tabwidget
    QObject *obj = this->parent()->parent()->parent()->findChild<QTabWidget*>("pagesTabWidget");
    QTabWidget *tab = qobject_cast<QTabWidget*>(obj);
    if(tab->count()>=2)
        tab->setCurrentIndex(2);
}
