#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QMouseEvent>
#include <QBrush>
#include <QTimer>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
    timer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{

//    qDebug("1313");
      QPainter painter(this);
//    QBrush brush(QColor(13,24,89));
//    QBrush  same(Qt::red);
//    painter.drawLine(x-5,y,x+5,y);
//    painter.drawLine(x,y-5,x,y+5);
//    painter.setBrush(brush);

      if(bim)
        {
          bim->draw(&painter);
             //painter.drawEllipse(bim->getX()-(bim->getRadius()),bim->getY()-(bim->getRadius()),bim->getRadius()*2,bim->getRadius()*2);

        }

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    //содание нажатий кнопок и условия их проверок, что нажато
    //event->buttons() & Qt::LeftButton & Qt::RightButton & Qt::MidButton;

    if (event->modifiers()& Qt::ControlModifier)
    {
        //qDebug("Ctrl-click");
        if(bim && bim->contains(event->x(),event->y()))
        {
            qDebug("Есть пробитие!");
            delete bim;
            bim = nullptr;
        }
        else
        {
            qDebug("сегодня без пробития!");
        }
    }
    else if (event->modifiers()& Qt::ShiftModifier)
    {
        qDebug("shift-click");
    }
    else if (event->modifiers()& Qt::AltModifier)
    {
        qDebug("alt-click");
    }
    else
    {
        //qDebug("press");
        bim = new Ball(event->x(),event->y(),40,-20,-20);
        bim->setDx(-20);
        bim->setDy(-20);
    }

    repaint();
}

void MainWindow::update()
{
    if(!bim)
    {
        return;
    }

    QRect r = contentsRect();
    if(bim->getX()-bim->getRadius()<= 0 ) bim->setDx(-bim->getDx());
    if(bim->getY()-bim->getRadius()<= 0 ) bim->setDy(-bim->getDy());
    if(bim->getX()+bim->getRadius() >=r.width()) bim->setDx(-bim->getDx());
    if(bim->getY()+bim->getRadius() >=r.height() ) bim->setDy(-bim->getDy());
    bim->setX(bim->getX()+bim->getDx());
    bim->setY(bim->getY()+bim->getDy());
    repaint();
}
