#include "graphics.h"
#include "ui_graphics.h"

Graphics::Graphics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graphics)
{
    ui->setupUi(this);
}

Graphics::~Graphics()
{
}

Graphics* Graphics::instance()
{
    static Graphics graphics;

    return &graphics;
}

Qt::PenStyle Graphics::lineStyle(int i)
{
    if (i==0)
        return Qt::SolidLine;
    else if (i==1)
        return Qt::DashLine;
    else if (i==2)
        return Qt::DotLine;
    else if (i==3)
        return Qt::DashDotLine;
    else if (i==4)
        return Qt::DashDotDotLine;
}

QColor Graphics::colorName(int i)
{
    if (i==0)
        return Qt::red;
    else if (i==1)
        return Qt::blue;
    else if (i==2)
        return Qt::green;
    else if (i==3)
        return Qt::yellow;
    else if (i==4)
        return Qt::magenta;
    else if (i==5)
        return Qt::cyan;
    else if (i==6)
        return Qt::gray;
    else if (i==7)
        return Qt::black;
    else if (i==8)
        return Qt::white;
    else if (i==9)
        return Qt::darkRed;
    else if (i==10)
        return Qt::darkBlue;
    else if (i==11)
        return Qt::darkGreen;
    else if (i==12)
        return Qt::darkYellow;
    else if (i==14)
        return Qt::darkMagenta;
    else if (i==14)
        return Qt::darkCyan;
    else if (i==15)
        return Qt::darkGray;
    return QColor(i).light(255);
}

void Graphics::qcp(QVector<QString> files,
                   QVector<QString> xLabels, QVector<QString> yLabels,
                   QVector<int> xformat, QVector<int> yformat)
{
    QWidget *widget = new QWidget;
    QCustomPlot  *plot =  new QCustomPlot(widget);
    QString  plotTitle = tr("Plot %1").arg(ui->tabWidget->count()+1);
    ui->tabWidget->addTab(plot,plotTitle);
    ui->tabWidget->setTabsClosable(true);
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);

    //clear all graphs
    plot->clearPlottables();
    //number of new graphs
    int nbgrs = files.size();
    //loop over each graph
    for ( int g = 0; g < nbgrs;g++)
    {
        //loop over sets of each graph
        plot->addGraph();
        QVector<int> length;
        int xlen = xformat.at(g);
        int ylen = yformat.at(g);
        length.push_back(xlen);
        length.push_back(ylen);
        QVector< QVector<double> > data;

        bool state = readFile(files[g],data,length);

        if (state == true)
        {
            if(xlen==1 && ylen==1)
                plot->graph(g)->setData(data[0],data[1]);

            if(xlen==2 && ylen==1)
                plot->graph(g)->setDataKeyError(data[0],data[2],data[1]);

            if(xlen==3 && ylen==1)
                plot->graph(g)->setDataKeyError(data[0],data[3],data[1],data[2]);

            if(xlen==1 && ylen==2)
                plot->graph(g)->setDataValueError(data[0],data[1],data[2]);

            if(xlen==1 && ylen==3)
                plot->graph(g)->setDataValueError(data[0],data[1],data[2],data[3]);

            if(xlen==2 && ylen==2)
                plot->graph(g)->setDataBothError(data[0],data[2],data[1],data[3]);

            if(xlen==3&& ylen==2)
                plot->graph(g)->setDataBothError(data[0],data[3],data[1],
                        data[2],data[4],data[4]);

            if(xlen==2&& ylen==3)
                plot->graph(g)->setDataBothError(data[0],data[2],data[1],
                        data[1],data[3],data[4]);

            if(xlen==3&& ylen==3)
                plot->graph(g)->setDataBothError(data[0],data[3],data[1],
                        data[2],data[4],data[5]);

            QPen customPen;
            customPen.setColor(colorName(g));
            //customPen.setStyle(lineStyle(g));
            customPen.setWidthF(2);
            if(xlen==1 && ylen==1)
            {
                plot->graph(g)->setLineStyle(QCPGraph::lsLine);
                plot->graph(g)->setPen(customPen);
            }
            else
            {
                plot->graph(g)->setLineStyle(QCPGraph::lsNone);
                plot->graph(g)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle,
                                                                colorName(g), colorName(g), 3));
                plot->graph(g)->setErrorType(QCPGraph::etValue);
                plot->graph(g)->setErrorPen(customPen);
                plot->graph(g)->setErrorBarSize(0);
                plot->graph(g)->setErrorType(QCPGraph::etValue);
            }
            plot->graph(g)->setName(QFileInfo(files[g]).baseName());
        }

        plot->rescaleAxes();
        //give the axes some labels:
        plot->setInteraction(QCP::iRangeDrag, true);
        plot->setInteraction(QCP::iRangeZoom, true);
        plot->setInteraction(QCP::iSelectPlottables, true);
        plot->legend->setVisible(true);

        // start out with Graphics's font..
        QFont legendFont;
        legendFont.setPointSize(9);
        plot->legend->setFont(legendFont);
        //plot->legend->setBrush(QBrush(Qt::transparent));
        //QColor(198,199,154,255)));//Qt::white
        //plot->xAxis->setLabel(xLabels[g]);
        //plot->yAxis->setLabel(yLabels[g]);
    }
    // set the placement of the legend (index 0 in the axis rect's inset layout) to not be
    // border-aligned (default), but freely, so we can reposition it anywhere:
    plot->axisRect()->insetLayout()->setInsetPlacement(0, QCPLayoutInset::ipFree);
    draggingLegend = false;

    connect(plot, SIGNAL(mouseMove(QMouseEvent*)), this, SLOT(mouseMoveSignal(QMouseEvent*)));
    connect(plot, SIGNAL(mousePress(QMouseEvent*)), this, SLOT(mousePressSignal(QMouseEvent*)));
    connect(plot, SIGNAL(mouseRelease(QMouseEvent*)), this, SLOT(mouseReleaseSignal(QMouseEvent*)));
    connect(plot, SIGNAL(beforeReplot()), this, SLOT(beforeReplot()));

    plot->setBackground(Qt::darkGray);
    plot->axisRect()->setBackground(Qt::darkGray);
    plot->replot();
}

void Graphics::mouseMoveSignal(QMouseEvent *event)
{
    if (draggingLegend)
    {
        QCustomPlot *plot =static_cast<QCustomPlot*>(ui->tabWidget->currentWidget());
        QRectF rect = plot->axisRect()->insetLayout()->insetRect(0);
        // since insetRect is in axisRect coordinates (0..1), we transform the mouse position:
        QPointF mousePoint((event->pos().x()-plot->axisRect()->left())/(double)plot->axisRect()->width(),
                           (event->pos().y()-plot->axisRect()->top())/(double)plot->axisRect()->height());
        rect.moveTopLeft(mousePoint-dragLegendOrigin);
        plot->axisRect()->insetLayout()->setInsetRect(0, rect);
        plot->replot();
    }

}

void Graphics::mousePressSignal(QMouseEvent *event)
{
    QCustomPlot *plot =static_cast<QCustomPlot*>(ui->tabWidget->currentWidget());
    if (plot->legend->selectTest(event->pos(), false) > 0)
    {
        draggingLegend = true;
        // since insetRect is in axisRect coordinates (0..1), we transform the mouse position:
        QPointF mousePoint((event->pos().x()-plot->axisRect()->left())/(double)plot->axisRect()->width(),
                           (event->pos().y()-plot->axisRect()->top())/(double)plot->axisRect()->height());
        dragLegendOrigin = mousePoint-plot->axisRect()->insetLayout()->insetRect(0).topLeft();
    }
}

void Graphics::mouseReleaseSignal(QMouseEvent *event)
{
    Q_UNUSED(event)
    draggingLegend = false;
}

void Graphics::beforeReplot()
{
    QCustomPlot *plot =static_cast<QCustomPlot*>(ui->tabWidget->currentWidget());
    plot->legend->setMaximumSize(plot->legend->minimumSizeHint());
}
void Graphics::qcp_exportPlot(QCustomPlot *plot,QString fileName)
{
    if (QFileInfo(fileName).suffix() == "pdf")
    {
        plot->savePdf(fileName,false, 0, 0,"A","B");
    }
    else if (QFileInfo(fileName).suffix() == "jpg")
    {
        plot->saveJpg(fileName,  0, 0,1.0,-1.0);
    }
    else if (QFileInfo(fileName).suffix() == "bmp")
    {
        plot->saveBmp(fileName,  0, 0,1.0);
    }
}


bool Graphics::qcp_readFile(QVector<double> &x,
                            QVector<double> &y,
                            QString inFile)
{
    QFile file(inFile);
    file.open(QIODevice::ReadOnly);
    if (!file.exists())
    {
        qDebug() <<"Error opening input data file\n"
                <<inFile
               <<" , maybe it does not exist or holds data\n";
        return false;
    }
    else
    {
        QTextStream indata(&file);
        QString inX, inY;
        bool ok;
        while (true)
        {
            indata >> inX >> inY;
            if (   inX.toDouble(&ok)&& ok  == true
                   && inY.toDouble(&ok)&& ok  == true)
            {
                x.push_back(inX.toDouble());
                y.push_back(inY.toDouble());
            }
            if( indata.atEnd() ) break;
        }
        return true;
    }
}



bool Graphics::qcp_readFile(QVector<double> &x, QVector<double> &y,
                            QVector<double> &dy, QString inFile)
{
    QFile file(inFile);
    file.open(QIODevice::ReadOnly);
    if (!file.exists())
    {
        qDebug() <<"Error opening input data file\n"
                <<inFile
               <<" , maybe it does not exist or holds data\n";
        return false;
    }
    else
    {
        QTextStream indata(&file);
        QString inX, inY,indY;
        bool ok;
        while (true)
        {
            indata >> inX >> inY>>indY;
            if (   inX.toDouble(&ok)&& ok  == true
                   && inY.toDouble(&ok)&& ok  == true
                   && indY.toDouble(&ok)&& ok  == true)
            {
                x.push_back(inX.toDouble());
                y.push_back(inY.toDouble());
                dy.push_back(indY.toDouble());
            }
            if( indata.atEnd() ) break;
        }
        return true;
    }
}



//read file
bool Graphics::readFile(QString inFile,
                        QVector< QVector<double> > &data,
                        QVector<int> Length)
{
    QFile file(inFile);
    file.open(QIODevice::ReadOnly);
    if (!file.exists() && file.size()>0)
    {
        qDebug() <<"Error opening input data file.\n"
                   "Maybe it does not exist or holds data\n";
    }
    else
    {
        QTextStream indata(&file);
        QString in;
        bool ok;

        int nbArgs = 0;
        for(short v = 0; v < Length.size(); v++)
            nbArgs += Length.at(v);
        data.resize(nbArgs);

        while(!indata.atEnd())
        {
            nbArgs = 0;
            for(short v = 0; v < Length.size(); v++)
            {
                for(short c = 0; c < Length.at(v); c++)
                {
                    indata >> in;
                    if (in.toDouble(&ok)&& ok &&  !indata.atEnd() )
                        data[nbArgs].push_back(in.toDouble());
                    nbArgs ++;
                }
            }
        }
    }
    file.close();
    return file.exists();
}


/*Close tab index*/
void Graphics::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

void Graphics::on_pushButton_export_clicked()
{
    QCustomPlot *plot = qobject_cast<QCustomPlot *>(ui->tabWidget->currentWidget());
    if(plot!= NULL)
    {
        QString fileName =QFileDialog::getOpenFileName(this,tr("Export to"),
                                                       "./",tr("(*.pdf *.jpg *.bmp)"));
        qcp_exportPlot(plot,fileName);
    }
}

void Graphics::on_pushButton_clear_clicked()
{
    ui->tabWidget->removeTab(ui->tabWidget->currentIndex());
}

void Graphics::on_pushButton_purge_clicked()
{
    int nbTabs = ui->tabWidget->count();
    if ( nbTabs > 0 )
    {
        int ok = QMessageBox::warning(this, tr("Delete"),tr("Delete all plots?"),
                                      QMessageBox::Yes,QMessageBox::No);
        if (ok == QMessageBox::Yes)
        {
            for(int n=nbTabs; n >= 0; n--)
                ui->tabWidget->removeTab(n);
        }
    }
}

void Graphics::on_pushButton_next_clicked()
{
    //find the objectname of the tabwidget
    QTabWidget *tab = qobject_cast<QTabWidget*>(this->parent()->parent()->parent()
                                                ->findChild<QTabWidget*>
                                                ("pagesTabWidget"));
    if(tab->count()>=3)
        tab->setCurrentIndex(3);
}
