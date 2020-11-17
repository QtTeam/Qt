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
    void setcurrentsize(float size){currentsize = size;}//设置电流大小
    void setdrection(bool d){drec = d;}
    void turn(){turnflag = !turnflag;}
private:
    int wide;
    int height;
    int state = 1;
    QColor color;
    bool flag = false;
    int cnt = 0;
    float currentsize = 5;//表示电流大小
    bool drec = 1;//电流方向，1为正向
    bool turnflag = 1;//器件是否竖直摆放，1为水平摆放
    bool textflag = 0;//是否显示提示文字，鼠标进入时置1
signals:
    void timeStart();
    void timeStop();
public slots:
    void receiveTime();
    void receiveTimeS();
};
#endif // SW_H
