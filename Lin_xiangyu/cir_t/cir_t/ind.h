#ifndef IND_H
#define IND_H

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
//dian gan
class IND : public QGraphicsObject
{
    Q_OBJECT
public:
    IND(int w,int h,QColor color);
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
private:
    int wide;
    int height;
    QColor color;
    bool flag = false;
    int cnt = 0;
    float currentsize = 5;
public slots:
    void receiveTime();
    void receiveTimeS();
};
#endif // IND_H
