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
    click=true;
    mass.append(QPoint(event->pos()));
    width_lines.append(width_line);
    if(event->modifiers() & Qt::ControlModifier)
    {
        if(width_line<=5)
            width_line++;

    }
    if(event->modifiers() & Qt::ShiftModifier)
    {
        if(width_line>=1)
            width_line--;
    }

    repaint();
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    mass.append(QPoint(event->pos()));
    width_lines.append(width_line);
    repaint();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    click=false;
}


void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    if(click)
    {
        for(int i=0;i<mass.size();i++)
        {
            painter.setPen(QPen(Qt::black,width_lines[i]));
            painter.drawPoint(mass[i]);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

