#include "drawrect.h"

drawRect::drawRect(int a,int b,int c,int d):x(a),y(b),len(c),width(d)
{

}

void drawRect::paint(QPainter *painter,
                     const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //painter->setPen(QPen(QColor(255,0,255),3));
    //painter->drawRect(x,y,len,width);
    painter->setPen(QPen(QColor(255,0,255),5));
    painter->drawEllipse(x,y,len,width);
}
QRectF drawRect::boundingRect() const
{
    qreal adjust = 0.5;
    return QRectF(-10-adjust,-10-adjust,20+adjust,20+adjust);
}
