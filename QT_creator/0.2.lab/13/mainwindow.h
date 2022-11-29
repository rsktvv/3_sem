#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QPoint>
#include <QMouseEvent>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
     void paintEvent(QPaintEvent *event);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVector <QPoint> mass;
    QPoint point;
    int dx=0, dy=0;

};
#endif // MAINWINDOW_H
