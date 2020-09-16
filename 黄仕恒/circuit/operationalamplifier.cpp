
#include "operationalamplifier.h"

operationalAmplifier::operationalAmplifier(QGraphicsScene *sc,int a,int b)
{
    scene = sc;
    x = a;
    y = b;
}

void operationalAmplifier::realize()
{

    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x+100,y+50);
    line1->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x,y,x+0,y+100);
    line2->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x,y+100,x+100,y+50);
    line3->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x+50,y+25,x+50,y-50);
    line4->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line4);

    QGraphicsLineItem *line5 = new QGraphicsLineItem(x+50,y+75,x+50,y+150);
    line5->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line5);

    QGraphicsLineItem *line6 = new QGraphicsLineItem(x,y+25,x-75,y+25);
    line6->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line6);

    QGraphicsLineItem *line7 = new QGraphicsLineItem(x,y+75,x-75,x+75);
    line7->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line7);

    QGraphicsLineItem *line8 = new QGraphicsLineItem(x+100,y+50,x+150,y+50);
    line8->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line8);

    QGraphicsRectItem *item1 = new QGraphicsRectItem(x+10,y+20,15,15);
    item1->setPen(QPen(QColor(255,255,255),0));
    item1->setToolTip("-");
    QGraphicsTextItem *text1 = new QGraphicsTextItem(item1);
    text1->setPlainText("-");
    QFont font1;
    font1.setPointSize(30);
    text1->setFont(font1);
    text1->setPos(x,y);
    scene->addItem(item1);

    QGraphicsRectItem *item2 = new QGraphicsRectItem(x+10,y+65,15,15);
    item2->setPen(QPen(QColor(255,255,255),0));
    item2->setToolTip("+");
    QGraphicsTextItem *text2 = new QGraphicsTextItem(item2);
    text2->setPlainText("+");
    QFont font2;
    font2.setPixelSize(30);
    text2->setFont(font2);
    text2->setPos(x,y+50);
    scene->addItem(item2);
}
