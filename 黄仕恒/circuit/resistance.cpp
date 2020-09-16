#include "resistance.h"


Resistance::Resistance(QGraphicsScene *sc,int a,int b)
{
    x = a;
    y = b;
    scene = sc;
}

void Resistance::realizeAcross()
{
    QGraphicsRectItem *item1 = new QGraphicsRectItem(x,y,70,30);
    item1->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(item1);

    QGraphicsLineItem *line1 = new QGraphicsLineItem(x+70,y+15,x+145,y+15);
    line1->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x,y+15,x-75,y+15);
    line2->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line2);
}

void Resistance::realizeEndlong()
{
    QGraphicsRectItem *item1 = new QGraphicsRectItem(x,y,30,70);
    item1->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(item1);

    QGraphicsLineItem *line1 = new QGraphicsLineItem(x+15,y,x+15,y-75);
    line1->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x+15,y+70,x+15,y+145);
    line2->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line2);
}
