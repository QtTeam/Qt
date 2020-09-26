#include "ledx.h"

ledx::ledx(QGraphicsScene *sc,QColor col,int a,int b)
{
    x = a;
    y = b;
    scene = sc;
    color = col;
}

void ledx::drawLedAcross()
{
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x+30,y);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    circle *cir = new circle(x+30,y-15,30,30,color);
    scene->addItem(cir);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x+35,y-10,x+55,y+10);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x+35,y+10,x+55,y-10);
    line3->setPen(QPen(color,5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x+60,y,x+90,y);
    line4->setPen(QPen(color,5));
    scene->addItem(line4);

    flag = 1;
}

void ledx::drawLedEnding()
{
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x,y+30);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    circle *cir = new circle(x-15,y+30,30,30,color);
    scene->addItem(cir);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x-10,y+35,x+10,y+55);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x+10,y+35,x-10,y+55);
    line3->setPen(QPen(color,5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x,y+60,x,y+90);
    line4->setPen(QPen(color,5));
    scene->addItem(line4);

    flag = 0;
}

void ledx::lighting(QColor colx)
{
    if(flag){
        cir1 = new circle(x+15,y-30,60,60,colx);
        cir2 = new circle(x,y-45,90,90,colx);
    }else{
        cir1 = new circle(x-30,y+15,60,60,colx);
        cir2 = new circle(x-45,y,90,90,colx);
    }

    scene->addItem(cir1);
    scene->addItem(cir2);
}

void ledx::dark()
{
    scene->removeItem(cir1);
    scene->removeItem(cir2);
    delete cir1;
    delete cir2;
}





