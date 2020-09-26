#include "diode.h"
//er ji guan
diode::diode(QGraphicsScene *sc,QColor col,int a,int b)
{
    x = a;
    y = b;
    scene = sc;
    color = col;
}

void diode::drawDiodeAcross()
{
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x+30,y);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x+30,y-30,x+30,y+30);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x+30,y-30,x+90,y);
    line3->setPen(QPen(color,5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x+30,y+30,x+90,y);
    line4->setPen(QPen(color,5));
    scene->addItem(line4);

    QGraphicsLineItem *line5 = new QGraphicsLineItem(x+90,y,x+120,y);
    line5->setPen(QPen(color,5));
    scene->addItem(line5);

    QGraphicsLineItem *line6 = new QGraphicsLineItem(x+90,y-30,x+90,y+30);
    line6->setPen(QPen(color,5));
    scene->addItem(line6);
}
void diode::drwaDiodeEnding()
{
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x,y+30);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x-30,y+30,x+30,y+30);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x-30,y+30,x,y+90);
    line3->setPen(QPen(color,5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x+30,y+30,x,y+90);
    line4->setPen(QPen(color,5));
    scene->addItem(line4);

    QGraphicsLineItem *line5 = new QGraphicsLineItem(x-30,y+90,x+30,y+90);
    line5->setPen(QPen(color,5));
    scene->addItem(line5);

    QGraphicsLineItem *line6 = new QGraphicsLineItem(x,y+90,x,y+120);
    line6->setPen(QPen(color,5));
    scene->addItem(line6);
}
void diode::start(QColor colx)
{
    cir = new circle(x-60,y,120,120,colx);
}
void diode::lighting(QColor colx)
{
    start(colx);
    scene->addItem(cir);
}

void diode::dark()
{
    scene->removeItem(cir);
    delete cir;
}
