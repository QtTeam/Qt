#ifndef DIODE_H
#define DIODE_H

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

class DIODE : public QGraphicsObject
{
    Q_OBJECT
public:
    DIODE(int w,int h,QColor c);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int getWidth(){return wide;}
    int getHigh(){return height;}
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    void dragEnterEvent(QGraphicsSceneMouseEvent*);
    virtual void eventStart();
    void changeState();
    void setcurrentsize(float size){currentsize = size;}//设置电流大小
    void turn(){turnflag = !turnflag;}
private:
    int wide;
    int height;
    int state = 0;
    QColor color;
    bool flag = false;
    int cnt = 0;
    float currentsize = 5;
    bool turnflag = 1;
public slots:
    void receiveTime();
    void receiveTimeS();
};

#endif // DIODE_H
