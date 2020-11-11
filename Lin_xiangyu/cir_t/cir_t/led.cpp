#include "led.h"

LED::LED(int w,int h,QColor c):wide(w),height(h),color(c){
    setAcceptHoverEvents(true);
}
QRectF LED::boundingRect() const{
    qreal penWidth = 1;
    return QRectF(0 - penWidth/2,0 - penWidth/2,
                  wide + penWidth/2, height + penWidth/2);
}

void LED::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *){
    if(light_flag){
        QBrush *brush = new QBrush(QColor(255,255,0));
        brush->setStyle(Qt::SolidPattern);
        painter->setBrush(*brush);
    }

    painter->drawEllipse(20,20,60,60);
    painter->setPen(QPen(color,5));
    painter->drawLine(0,50,20,50);
    painter->drawLine(80,50,100,50);

    QFont font;
    font.setPixelSize(20);
    painter->setFont(font);
    painter->drawText(QRect(30,0,100,20),"led");

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
void LED::mousePressEvent(QGraphicsSceneMouseEvent *event){
    //qDebug()<<"点击了元器件";
}

void LED::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"leave";
}

void LED::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"enter";
}

void LED::eventStart(){

}
void LED::receiveTime(){
    ++cnt;
    flag = true;
    if(cnt == 5) cnt = 0;
    light_flag = 1;
    update();
}
void LED::receiveTimeS(){
    flag = false;
    light_flag = 0;
    update();
}
