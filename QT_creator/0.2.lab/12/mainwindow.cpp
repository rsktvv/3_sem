#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if((event->modifiers() & Qt::ControlModifier))
    {
        int a=100000, o=-1;
        for(int i=0;i<mass.size();i++)
        {
            int x=abs(mass[i]->x()-event->x());
            int y=abs(mass[i]->y()-event->y());
            if(x+y<a)
            {
                a = x+y;
                o = i;
            }
        }
        if(a == -1)
           mass.append(new QPoint(event->x(), event->y()));
        else
            mass.insert(a+1, new QPoint(event->x(), event->y()));
    }
    else
        if((event->modifiers() & Qt::ShiftModifier))
        mass.removeAt(0);

    else
        mass.append(new QPoint(event->x(), event->y()));

    repaint();
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    for(int i=0;i<mass.size();i++)
        painter.drawEllipse(*mass[i], 3,3);

    for(int i=0;i<mass.size()-1;i++)
        painter.drawLine(*mass[i],*mass[i+1]);
}

MainWindow::~MainWindow()
{
    delete ui;
}

