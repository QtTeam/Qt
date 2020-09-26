#ifndef POW_H
#define POW_H

#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include "circle.h"

class pow
{
private:
    int x,y;
    QGraphicsScene *scene;
    QColor color;
public:
    pow(QGraphicsScene *sc,QColor col,int a,int b);
    void drawPower();
    void start();
};

#endif // POW_H
