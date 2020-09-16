#include "signalp.h"

power::power(QGraphicsScene *sc,int a,int b)
{
    scene = sc;
    x = a;
    y = b;
}

void power::realize()
{
    drawRect *draw = new drawRect(x,y,80,80);
    scene->addItem(draw);

    QGraphicsLineItem *line = new QGraphicsLineItem(x+40,y,x+40,y-70);
    line->setPen(QPen(QColor(255,0,255),5));
    scene->addItem(line);

    Grand *grand = new Grand(scene,x+40,y+80);
    grand->realizeUp();
}
