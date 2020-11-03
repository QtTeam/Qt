#include "power.h"

POWER::POWER(int w,int h,QColor c):wide(w),height(h),color(c){
    setAcceptHoverEvents(true);
}

QRectF POWER::boundingRect() const{
    qreal penWidth = 1;
    return QRectF(0 - penWidth/2,0 - penWidth/2,
                  wide + penWidth/2, height + penWidth/2);
}

void POWER::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *){
    painter->setBrush(QBrush(QColor(color)));


    painter->setPen(QPen(color,5));
    painter->drawLine(50,0,50,15);
    painter->drawLine(50,85,50,100);

    QFont font;
    font.setPixelSize(20);
    painter->setFont(font);
    painter->drawText(QRect(30,-10,70,20),"power");
    painter->drawEllipse(15,15,70,70);
    painter->setPen(QPen(QColor(255,255,255),5));
    QFont font1;
    font1.setPixelSize(40);
    painter->setFont(font1);
    painter->drawText(QRect(40,25,40,40),"S");



    if(flag){
        painter->setPen(QPen(QColor(0,0,255),5));
        switch(cnt){
        case 0:{
            painter->drawLine(50,100,50,95);
            painter->drawLine(50,75,50,70);
            painter->drawLine(50,50,50,45);
            painter->drawLine(50,25,50,20);
            break;
        }
        case 1:{
            painter->drawLine(50,95,50,90);
            painter->drawLine(50,70,50,65);
            painter->drawLine(50,45,50,40);
            painter->drawLine(50,20,50,15);
            break;
        }
        case 2:{
            painter->drawLine(50,90,50,85);
            painter->drawLine(50,65,50,60);
            painter->drawLine(50,40,50,35);
            painter->drawLine(50,15,50,10);
            break;
        }
        case 3:{
            painter->drawLine(50,85,50,80);
            painter->drawLine(50,60,50,55);
            painter->drawLine(50,35,50,30);
            painter->drawLine(50,10,50,5);
            break;
        }
        case 4:{
            painter->drawLine(50,80,50,75);
            painter->drawLine(50,55,50,50);
            painter->drawLine(50,30,50,25);
            painter->drawLine(50,5,50,0);
            break;
        }
        }
    }
    qDebug() << cnt << endl;
}

//无论器件怎么移动,这个鼠标事件始终作用于这个器件
void POWER::mousePressEvent(QGraphicsSceneMouseEvent *event){
    //qDebug()<<"点击了元器件";
}

void POWER::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"leave";
}

void POWER::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"enter";
}

void POWER::eventStart(){

}

void POWER::receiveTime(){
    ++cnt;
    flag = 1;
    if(cnt == 5) cnt = 0;
    update();
}
