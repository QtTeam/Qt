#include "diode.h"

DIODE::DIODE(int w,int h,QColor c):wide(w),height(h),color(c){
    setAcceptHoverEvents(true);
}
QRectF DIODE::boundingRect() const{
    qreal penWidth = 1;
    return QRectF(0 - penWidth/2,0 - penWidth/2,
                  wide + penWidth/2, height + penWidth/2);
}

void DIODE::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *){
    if(turnflag){
    painter->setPen(QPen(color,5));
    painter->drawLine(0,50,35,50);
    painter->drawLine(65,50,100,50);

    painter->drawLine(35,20,35,80);
    painter->drawLine(65,20,65,80);
    painter->drawLine(35,20,65,50);
    painter->drawLine(35,80,65,50);

    if(flag){
        //painter->setBrush(QBrush(QColor(0,255,0,100)));
        painter->drawEllipse(0,0,100,100);
    }
    QFont font;
    font.setPixelSize(20);
    painter->setFont(font);
    painter->drawText(QRect(30,0,100,20),"diode");

    if(flag){
        painter->setPen(QPen(QColor(0,0,255),currentsize));
        switch(cnt){
        case 0:{
            painter->drawLine(0,50,5,50);
            painter->drawLine(25,50,30,50);
            painter->drawLine(50,50,55,50);
            painter->drawLine(75,50,80,50);
            break;
        }
        case 1:{
            painter->drawLine(5,50,10,50);
            painter->drawLine(30,50,35,50);
            painter->drawLine(55,50,60,50);
            painter->drawLine(80,50,85,50);
            break;
        }
        case 2:{
            painter->drawLine(10,50,15,50);
            painter->drawLine(35,50,40,50);
            painter->drawLine(60,50,65,50);
            painter->drawLine(85,50,90,50);
            break;
        }
        case 3:{
            painter->drawLine(15,50,20,50);
            painter->drawLine(40,50,45,50);
            painter->drawLine(65,50,70,50);
            painter->drawLine(90,50,95,50);
            break;
        }
        case 4:{
            painter->drawLine(20,50,25,50);
            painter->drawLine(45,50,50,50);
            painter->drawLine(70,50,75,50);
            painter->drawLine(95,50,100,50);
            break;
        }
        }
    }
    }
    else{
        painter->setPen(QPen(color,5));
        painter->drawLine(50,0,50,35);
        painter->drawLine(50,65,50,100);

        painter->drawLine(20,35,80,35);
        painter->drawLine(20,65,80,65);
        painter->drawLine(20,35,50,65);
        painter->drawLine(80,35,50,65);

        if(flag){
            painter->setBrush(QBrush(QColor(0,255,0,100)));
            painter->drawEllipse(0,0,100,100);
        }
        QFont font;
        font.setPixelSize(20);
        painter->setFont(font);
        painter->drawText(QRect(30,0,100,20),"diode");

        if(flag){
            painter->setPen(QPen(QColor(0,0,255),currentsize));
            switch(cnt){
            case 0:{
                painter->drawLine(50,0,50,5);
                painter->drawLine(50,25,50,30);
                painter->drawLine(50,50,50,55);
                painter->drawLine(50,75,50,80);
                break;
            }
            case 1:{
                painter->drawLine(50,5,50,10);
                painter->drawLine(50,30,50,35);
                painter->drawLine(50,55,50,60);
                painter->drawLine(50,80,50,85);
                break;
            }
            case 2:{
                painter->drawLine(50,10,50,15);
                painter->drawLine(50,35,50,40);
                painter->drawLine(50,60,50,65);
                painter->drawLine(50,85,50,90);
                break;
            }
            case 3:{
                painter->drawLine(50,15,50,20);
                painter->drawLine(50,40,50,45);
                painter->drawLine(50,65,50,70);
                painter->drawLine(50,90,50,95);
                break;
            }
            case 4:{
                painter->drawLine(50,20,50,25);
                painter->drawLine(50,45,50,50);
                painter->drawLine(50,70,50,75);
                painter->drawLine(50,95,50,100);
                break;
            }
            }
        }
}


}

//无论器件怎么移动,这个鼠标事件始终作用于这个器件
void DIODE::mousePressEvent(QGraphicsSceneMouseEvent *event){
    //qDebug()<<"点击了元器件";
}

void DIODE::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"leave";
}

void DIODE::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"enter";
}

void DIODE::eventStart(){

}

void DIODE::changeState(){
    state = !state;
}
void DIODE::receiveTime(){
    if(drec){
        ++cnt;
        flag = true;
        if(cnt == 5) cnt = 0;
        update();
    }
    else {
        --cnt;
        flag = true;
        if(cnt == -1) cnt = 4;
        update();
    }
}

void DIODE::receiveTimeS(){
    flag = false;
     update();
}
