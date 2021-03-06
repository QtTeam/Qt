#ifndef LED_H
#define LED_H

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

class LED : public QGraphicsObject
{
    Q_OBJECT
public:
    LED(int w,int h,QColor c);
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
    QColor color;
    bool flag = false;
    int cnt = 0;
    bool light_flag = 0;
    float currentsize = 5;
    bool turnflag = 1;
    bool textflag = 0;
    bool drec = 1;
public slots:
    void receiveTime();
    void receiveTimeS();
};

#endif // LED_H
