#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    for(int i=0;i<mass.size();i++)
    {
        painter.setPen(QPen(Qt::black, 6));
        painter.drawPoint(mass[i]);
    }

    if(click)
    {
        painter.setPen(Qt::DashDotDotLine);
        painter.drawRect(a);
    }

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    click=true;
    a=QRect(QPoint(event->pos()),QPoint(event->pos()));

    if(event->modifiers() & Qt::ControlModifier)
        mass.append(event->pos());

    repaint();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    click=false;

    for(int i=0;i<mass.size();i++)
    {
        if((a.contains(mass[i])) && (a.width()>=2) && (a.height()>=2))
        {
           mass.removeAt(i);
           i--;
        }
    }

    repaint();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    a=QRect(a.topLeft(),QPoint(event->pos()));
    repaint();
}

