#include "ball.h"
#include<QPainter>

Ball::Ball()
    :x(0),y(0),dx(0),dy(0),radius(0)
{
}

Ball::Ball(int x, int y, int radius, int dx, int dy)
    :x(x),y(y),dx(0),dy(0),radius(radius)
{
}

void Ball::draw(QPainter *painter)
{
    painter->drawEllipse(x-radius,y-radius,radius*2,radius*2);
}
int Ball::getX() const
{
    return x;
}

void Ball::setX(int value)
{
    x = value;
}

int Ball::getY() const
{
    return y;
}

void Ball::setY(int value)
{
    y = value;
}

int Ball::getDx() const
{
    return dx;
}

void Ball::setDx(int value)
{
    dx = value;
}

int Ball::getDy() const
{
    return dy;
}

void Ball::setDy(int value)
{
    dy = value;
}

int Ball::getRadius() const
{
    return radius;
}

void Ball::setRadius(int value)
{
    radius = value;
}
