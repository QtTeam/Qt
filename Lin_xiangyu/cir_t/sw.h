#ifndef SW_H
#define SW_H

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

class SW : public QGraphicsObject
{
    Q_OBJECT
public:
    SW(int w,int h,QColor color);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int getWidth(){return wide;}
    int getHigh(){return height;}
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    void dragEnterEvent(QGraphicsSceneMouseEvent*);
    virtual void eventStart();
    void setState(int t);
    int getState();
    void setState();
private:
    int wide;
    int height;
    int state = 1;
    QColor color;
    int flag = 0,cnt = 0;
    bool time_flag = 1;//决定点击时发送timeStart或者timeStop
signals:
    void timeStart();
    void timeStop();
public slots:
    void receiveTime();
};
#endif // SW_H
