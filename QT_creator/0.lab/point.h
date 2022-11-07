#ifndef POINT_H
#define POINT_H

class QPainter;


class Point
{
public:
    Point();

    Point(int x, int y);

    void draw(QPainter *painter);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);

    int getDx() const;
    void setDx(int value);

    int getDy() const;
    void setDy(int value);


protected:
    int x,y;
};
#endif // POINT_H
