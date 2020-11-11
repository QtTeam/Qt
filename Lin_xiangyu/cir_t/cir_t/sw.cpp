#include "sw.h"

SW::SW(int w,int h,QColor c):wide(w),height(h),color(c){
    setAcceptHoverEvents(true);
}
QRectF SW::boundingRect() const{
    qreal penWidth = 1;
    return QRectF(0 - penWidth/2,0 - penWidth/2,
                  wide + penWidth/2, height + penWidth/2);
}

void SW::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *){
    painter->setPen(QPen(color,5));
    painter->drawLine(0,50,25,50);
    painter->drawLine(75,50,100,50);

    if(flag){
        painter->drawLine(25,50,75,50);
    }else{
        painter->drawLine(25,50,65,20);
    }

    QFont font;
    font.setPixelSize(20);
    painter->setFont(font);
    painter->drawText(QRect(30,0,100,20),"sw");

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

//无论器件怎么移动,这个鼠标事件始终作用于这个器件
void SW::mousePressEvent(QGraphicsSceneMouseEvent *event){
    //qDebug()<<"点击了元器件";
    if(!flag)emit timeStart();
    else emit timeStop();
}

void SW::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"leave";
}

void SW::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"enter";
}

void SW::eventStart(){

}
void SW::setState(int t){
    state = t;
}
int SW::getState(){
    return state;
}
void SW::setState(){
    state = !state;
}
void SW::receiveTime(){
    ++cnt;
    flag = true;
    if(cnt == 5) cnt = 0;
    update();
}
void SW::receiveTimeS(){
    flag = false;
    update();
}



