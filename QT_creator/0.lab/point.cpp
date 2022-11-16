#include "point.h"
#include<QPainter>

Point::Point()
    :x(0),y(0)
{
}

Point::Point(int x, int y)
    :x(x),y(y)
{
}

void Point::draw(QPainter *painter)
{
    painter->drawPoint(x,y);
}

int Point::getX() const
{
    return x;
}

void Point::setX(int value)
{
    x = value;
}

int Point::getY() const
{
    return y;
}

void Point::setY(int value)
{
    y = value;
}




