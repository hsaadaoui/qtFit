#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QWidget>
#include "qcustomplot.h"
#include "mainwindow.h"


namespace Ui {
class Graphics;
}

class Graphics : public QWidget
{
    Q_OBJECT

public:
    explicit Graphics(QWidget *parent = 0);
    ~Graphics();

    static Graphics* instance();

    void qcp(QVector<QString>,QVector<QString>,QVector<QString>,
             QVector<int> ,QVector<int>);

    bool qcp_readFile(QVector<double>&, QVector<double>&,QString);

    bool qcp_readFile(QVector<double>&, QVector<double>&,QVector<double>&,QString);

    bool readFile(QString,QVector< QVector<double> > &,QVector<int>);

    void qcp_exportPlot(QCustomPlot*,QString);

    QColor colorName(int i);

    Qt::PenStyle lineStyle(int i);

private slots:
    void on_tabWidget_tabCloseRequested(int index);

    void on_pushButton_export_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_purge_clicked();

    void on_pushButton_next_clicked();

private:
    Ui::Graphics *ui;
    bool draggingLegend;
    QPointF dragLegendOrigin;

private slots:
    void mouseMoveSignal(QMouseEvent *event);
    void mousePressSignal(QMouseEvent *event);
    void mouseReleaseSignal(QMouseEvent *event);
    void beforeReplot();

};

#endif // GRAPHICS_H
