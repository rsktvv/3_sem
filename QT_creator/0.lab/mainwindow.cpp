#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <QPainter>
#include <QMessageBox>
#include <QDebug>
#include <QBrush>



void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(n%2==0)
    {
        x=event->x();
        y=event->y();
        n++;
    }
    else
    {
        x_1=event->x();
        y_1=event->y();
        n++;
    }
}

void MainWindow::paintEvent(QPaintEvent *event)
{
      QPainter painter(this);
      QPen pens;
      pens.setStyle(Qt::DashLine);
      painter.setPen(pens);
      if(n==2)
          painter.drawLine(x,y,x_1,y_1);
}
