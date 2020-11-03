#include "item.h"
#include <QPainter>
#include <QDebug>
#include <QMouseEvent>
item::item(int w,int h,QString c):wide(w),height(h),color(c){
    setAcceptHoverEvents(true);
}

QRectF item::boundingRect() const{
    qreal penWidth = 1;
    return QRectF(0 - penWidth/2,0 - penWidth/2,
                  wide + penWidth/2, height + penWidth/2);
}

void item::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *){
    painter->setBrush(QBrush(QColor(color)));
    painter->drawRect(0,0,wide,height);
}

//无论器件怎么移动,这个鼠标事件始终作用于这个器件
void item::mousePressEvent(QGraphicsSceneMouseEvent *event){
    //qDebug()<<"点击了元器件";
}

void item::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"leave";
}

void item::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"enter";
}

void item::eventStart(){

}
/*
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x+30,y);
    line1->setPen();
    scene->addItem(line1);
*/
