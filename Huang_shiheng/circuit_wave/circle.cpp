#include "circle.h"

circle::circle(int a,int b,int c,int d,QColor col):x(a),y(b),len(c),width(d)
{
    color = col;
}

void circle::paint(QPainter *painter,
                     const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(color,5));
    painter->drawEllipse(x,y,len,width);
}
QRectF circle::boundingRect() const
{
    qreal adjust = 0.5;
    return QRectF(-10-adjust,-10-adjust,20+adjust,20+adjust);
}
