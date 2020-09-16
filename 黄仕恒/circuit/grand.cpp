#include "grand.h"

Grand::Grand(QGraphicsScene *sc,int a,int b)
{
    scene = sc;
    x = a;
    y = b;
}

void Grand::realizeUp()
{
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x,y+30);
    line1->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x-15,y+30,x+15,y+30);
    line2->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x-10,y+40,x+10,y+40);
    line3->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x-5,y+50,x+5,y+50);
    line4->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line4);
}

void Grand::realizaDown()
{
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x,y-30);
    line1->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x-15,y-30,x+15,y-30);
    line2->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x-10,y-40,x+10,y-40);
    line3->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x-5,y-50,x+5,y-50);
    line4->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line4);
}

void Grand::realizaLeft()
{
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x+30,y);
    line1->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x+30,y-15,x+30,y+15);
    line2->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x+40,y-10,x+40,y+10);
    line3->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x+50,y-5,x+50,y+5);
    line4->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line4);
}

void Grand::realizaRight()
{
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x-30,y);
    line1->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x-30,y-15,x-30,y+15);
    line2->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x-40,y-10,x-40,y+10);
    line3->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x-50,y-5,x-50,y+5);
    line4->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line4);
}

