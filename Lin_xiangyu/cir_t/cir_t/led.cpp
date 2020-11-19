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
        painter->setPen(QPen(color,3));
    if(turnflag){
        if(light_flag){


            QBrush *brush = new QBrush(QColor(255,255,0,255));
            brush->setStyle(Qt::SolidPattern);

            brush->setColor(QColor(255,255,0,100));
            painter->setBrush(*brush);
            painter->drawEllipse(QPoint(50,50),5,5);

//            brush->setColor(QColor(255,255,0,255));
//            painter->setBrush(*brush);
//            painter->drawEllipse(QPoint(50,50),20,20);


        }
        painter->drawEllipse(20,20,60,60);
        painter->setPen(QPen(color,5));
        painter->drawLine(0,50,20,50);
        painter->drawLine(80,50,100,50);

        if(textflag){
            QFont font;
            font.setPixelSize(20);
            painter->setFont(font);
            painter->drawText(QRect(30,0,100,20),"led");
        }

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
        if(light_flag){
            QBrush *brush = new QBrush(QColor(255,255,0,100));
            brush->setStyle(Qt::SolidPattern);
            painter->setBrush(*brush);
        }

        painter->drawEllipse(20,20,60,60);
        painter->setPen(QPen(color,5));
        painter->drawLine(50,0,50,20);
        painter->drawLine(50,80,50,100);

        if(textflag){
            QFont font;
            font.setPixelSize(20);
            painter->setFont(font);
            painter->drawText(QRect(30,0,100,20),"led");
        }

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
void LED::mousePressEvent(QGraphicsSceneMouseEvent *event){
    //qDebug()<<"点击了元器件";
}

void LED::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"leave";
    textflag = 0;
    update();
}

void LED::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    //qDebug()<<"enter";
    textflag = 1;
    update();
}

void LED::eventStart(){

}
void LED::receiveTime(){
    if(drec){
        ++cnt;
        flag = true;
        if(cnt == 5) cnt = 0;
        light_flag = 1;
        update();
    }
    else {
        --cnt;
        flag = true;
        if(cnt == -1) cnt = 4;
        light_flag = 1;
        update();
    }
}
void LED::receiveTimeS(){
    flag = false;
    light_flag = 0;
    update();
}
