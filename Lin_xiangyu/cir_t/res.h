#ifndef RES_H
#define RES_H

#include <QBrush>
#include <QPen>
#include <QGraphicsScene>
#include <QGraphicsObject>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
#include <QEnterEvent>
#include <QGraphicsSceneHoverEvent>
#include <QPainter>
#include <QDebug>
#include <QMouseEvent>
#include "widget.h"

class RES : public QGraphicsObject
{
    Q_OBJECT
public:
    RES(int w,int h,QColor color);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int getWidth(){return wide;}
    int getHigh(){return height;}
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    void dragEnterEvent(QGraphicsSceneMouseEvent*);
    virtual void eventStart();

private:
    int wide;
    int height;
    int flag = 0,cnt = 0;
    QColor color;
public slots:
    void receiveTime();
};

#endif // RES_H
