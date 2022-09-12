#ifndef BALL_H
#define BALL_H



class QPainter;


class Ball
{
public:
    Ball();
    //Ball(int x, int y,int dx, int dy, int radius);
    Ball(int x, int y, int radius, int dx=0, int dy=0);

    bool contains(int x,int y)
    {


        int dx = this->x - x, dx2 = dx*dx;
        int dy = this->y - y, dy2 = dy*dy;
        return((dx2+dy2)<=radius*radius);
    }
    void draw(QPainter *painter);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);

    int getDx() const;
    void setDx(int value);

    int getDy() const;
    void setDy(int value);

    int getRadius() const;
    void setRadius(int value);

private:
    int x,y,dx,dy;
    int radius;
};



#endif // BALL_H
