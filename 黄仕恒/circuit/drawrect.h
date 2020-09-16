#ifndef DRAWRECT_H
#define DRAWRECT_H

#include <QGraphicsItem>
#include <QPainter>

class drawRect : public QGraphicsItem
{
private:
    int x,y,len,width;
public:
    drawRect(int a,int b,int c,int d);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = Q_NULLPTR);
    QRectF boundingRect() const;
};

#endif // DRAWRECT_H
