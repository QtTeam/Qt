
#include "inductance.h"
// dian gan
inductance::inductance(QGraphicsScene *sc,QColor col,int a,int b)
{
    x = a;
    y = b;
    scene = sc;
    color = col;
}

void inductance::drawInductanceAcross()
{
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x+30,y);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x+30,y,x+45,y-20);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x+45,y-20,x+75,y+20);
    line3->setPen(QPen(color,5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x+75,y+20,x+115,y-20);
    line4->setPen(QPen(color,5));
    scene->addItem(line4);

    QGraphicsLineItem *line5 = new QGraphicsLineItem(x+115,y-20,x+135,y+20);
    line5->setPen(QPen(color,5));
    scene->addItem(line5);

    QGraphicsLineItem *line6 = new QGraphicsLineItem(x+135,y+20,x+150,y);
    line6->setPen(QPen(color,5));
    scene->addItem(line6);

    QGraphicsLineItem *line7 = new QGraphicsLineItem(x+150,y,x+180,y);
    line7->setPen(QPen(color,5));
    scene->addItem(line7);

    QGraphicsLineItem *line8 = new QGraphicsLineItem(x+30,y-30,x+150,y-30);
    line8->setPen(QPen(color,5));
    scene->addItem(line8);

    QGraphicsLineItem *line9 = new QGraphicsLineItem(x+30,y-40,x+150,y-40);
    line9->setPen(QPen(color,5));
    scene->addItem(line9);
}

void inductance::drawInductanceEnding()
{
    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x,y+30);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x,y+30,x+20,y+45);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    QGraphicsLineItem *line3 = new QGraphicsLineItem(x+20,y+45,x-20,y+75);
    line3->setPen(QPen(color,5));
    scene->addItem(line3);

    QGraphicsLineItem *line4 = new QGraphicsLineItem(x-20,y+75,x+20,y+105);
    line4->setPen(QPen(color,5));
    scene->addItem(line4);

    QGraphicsLineItem *line5 = new QGraphicsLineItem(x+20,y+105,x-20,y+135);
    line5->setPen(QPen(color,5));
    scene->addItem(line5);

    QGraphicsLineItem *line6 = new QGraphicsLineItem(x-20,y+135,x,y+150);
    line6->setPen(QPen(color,5));
    scene->addItem(line6);

    QGraphicsLineItem *line7 = new QGraphicsLineItem(x,y+150,x,y+180);
    line7->setPen(QPen(color,5));
    scene->addItem(line7);

    QGraphicsLineItem *line8 = new QGraphicsLineItem(x+30,y+30,x+30,y+150);
    line8->setPen(QPen(color,5));
    scene->addItem(line8);

    QGraphicsLineItem *line9 = new QGraphicsLineItem(x+40,y+30,x+40,y+150);
    line9->setPen(QPen(color,5));
    scene->addItem(line9);
}
