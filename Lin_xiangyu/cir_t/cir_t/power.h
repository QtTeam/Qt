#ifndef POWER_H
#define POWER_H

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

class POWER : public QGraphicsObject
{
    Q_OBJECT
public:
    POWER(int w,int h,QColor color);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int getWidth(){return wide;}
    int getHigh(){return height;}
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    void dragEnterEvent(QGraphicsSceneMouseEvent*);
    virtual void eventStart();
    void setcurrentsize(float size){currentsize = size;}//设置电流大小
    void turn(){turnflag = !turnflag;}
    void setdrection(bool d){drec = d;}
private:
    int wide;
    int height;
    bool flag = false;
    int cnt = 0;
    QColor color;
    float currentsize = 5;
    bool turnflag = 1;
    bool drec = 1;
public slots:
    void receiveTime();
    void receiveTimeS();
};


#endif // POWER_H
