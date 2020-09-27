#include "switchx.h"


switchx::switchx(QGraphicsScene *sc,QColor col,int a,int b)
{
    x = a;
    y = b;
    scene = sc;
    color = col;
}

void switchx::creatSwitchACross()
{
    line = new QGraphicsLineItem(x+30,y,x+70,y-30);
    line->setPen(QPen(color,5));
    scene->addItem(line);

    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x+30,y);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    circle *cir = new circle(x+27,y-3,6,6,color);
    scene->addItem(cir);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x+80,y,x+110,y);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    flag = 1;
    flag_sw = 1;
}

void switchx::creatSwichEnding()
{
    line = new QGraphicsLineItem(x,y+30,x+30,y+70);
    line->setPen(QPen(color,5));
    scene->addItem(line);

    QGraphicsLineItem *line1 = new QGraphicsLineItem(x,y,x,y+30);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    circle *cir = new circle(x-3,y+27,6,6,color);
    scene->addItem(cir);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x,y+80,x,y+110);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    flag = 0;
    flag_sw = 1;
}
void switchx::switchOn()
{
    if(flag_sw) return;
    scene->removeItem(line);
    delete line;
    if(flag)
        line = new QGraphicsLineItem(x+30,y,x+80,y);
    else
        line = new QGraphicsLineItem(x,y+30,x,y+80);
    line->setPen(QPen(color,5));
    scene->addItem(line);
}

void switchx::switchOff()
{
    if(!flag_sw) return;
    scene->removeItem(line);
    delete line;
    if(flag)
        line = new QGraphicsLineItem(x+30,y,x+40,y-30);
    else
        line = new QGraphicsLineItem(x,y+30,x+30,y+70);
    line->setPen(QPen(color,5));
    scene->addItem(line);
}
