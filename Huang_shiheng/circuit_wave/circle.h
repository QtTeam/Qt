#ifndef CIRCLE_H
#define CIRCLE_H

#include <QGraphicsItem>
#include <QPainter>

class circle : public QGraphicsItem
{
private:
    int x,y,len,width;
    QColor color;
public:
    circle(int a,int b,int c,int d,QColor col = QColor(255,0,255));
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = Q_NULLPTR);
    QRectF boundingRect() const;
};

#endif // CIRCLE_H
