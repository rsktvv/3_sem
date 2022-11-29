#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <QPainter>
#include <QMessageBox>
#include <QDebug>
#include <QBrush>
#include <QImage>

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



void MainWindow::mousePressEvent(QMouseEvent *event)
{

    if(event->modifiers() & Qt::ControlModifier)
            Ctrl_click=true;
    else
        Ctrl_click=false;

}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect window = contentsRect();
    QImage img("D:\proga\3_sem\QT_creator\0.lab\flower.png");
    if(!Ctrl_click)
        painter.drawImage(100,100,img);
    else
        painter.drawImage(QRect(window.width()/2-img.width()/2,window.height()/2-img.height()/2, img.width()*2, img.height()*2), img);
}

