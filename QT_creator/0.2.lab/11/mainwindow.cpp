#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

QPoint p;

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if((event->modifiers() & Qt::ControlModifier))
    {
        p = QPoint(event->x(), event->y());
        mass.append(p);
        mass.remove(0);
    }
    else
    {
        p = QPoint(event->x(), event->y());
        mass.append(p);
    }
    repaint();
}
void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    for(int i=0;i<mass.size();i++)
    {
        painter.drawEllipse(mass[i], 3,3);
    }
    for(int i=0;i<mass.size()-1;i++)
    {
        painter.drawLine(mass[i],mass[i+1]);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

