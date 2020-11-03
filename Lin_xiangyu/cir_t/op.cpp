#include "op.h"

OP::OP(int w,int h,QColor c):wide(w),height(h),color(c){
    setAcceptHoverEvents(true);
}
QRectF OP::boundingRect() const{
    qreal penWidth = 1;
    return QRectF(0 - penWidth/2,0 - penWidth/2,
                  wide + penWidth/2, height + penWidth/2);
}

void OP::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *){
    painter->setPen(QPen(color,5));
    painter->drawLine(0,25,25,25);
    painter->drawLine(0,75,25,75);
    painter->drawLine(75,50,100,50);
    painter->drawLine(25,0,25,100);
    painter->drawLine(25,0,75,50);
    painter->drawLine(25,100,75,50);

    QFont font;
    font.setPixelSize(20);
    painter->setFont(font);
    painter->drawText(QRect(50,0,50,20),"op");
}

//无论器件怎么移动,这个鼠标事件始终作用于这个器件
void OP::mousePressEvent(QGraphicsSceneMouseEvent *event){
    //qDebug()<<"点击了元器件";
}

void OP::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"leave";
}

void OP::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"enter";
}

void OP::eventStart(){

}
