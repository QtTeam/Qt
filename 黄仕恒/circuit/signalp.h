#ifndef POWER_H
#define POWER_H

#include <QGraphicsScene>
#include <QGraphicsLineItem>

#include "drawrect.h"
#include "grand.h"

class power
{
private:
    QGraphicsScene * scene;
    int x,y;
public:
    power(QGraphicsScene *sc,int a,int b);
    void realize();
};

#endif // POWER_H
