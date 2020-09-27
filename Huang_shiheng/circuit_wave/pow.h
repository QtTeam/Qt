#ifndef POW_H
#define POW_H

#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include "circle.h"

class power
{
private:
    int x,y;
    QGraphicsScene *scene;
    QColor color;
public:
    power(QGraphicsScene *sc,QColor col,int a,int b);
    void drawPower();
    void start();
};

#endif // POW_H
