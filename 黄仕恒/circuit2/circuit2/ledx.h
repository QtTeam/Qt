#ifndef LEDX_H
#define LEDX_H

#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include "circle.h"

class ledx
{
private:
    int x,y;
    QGraphicsScene *scene;
    QColor color;
    circle *cir1,*cir2;
    int flag;
public:
    ledx(QGraphicsScene *sc,QColor col,int a,int b);
    void drawLedAcross();
    void drawLedEnding();
    void lighting(QColor colx);
    void dark();
};

#endif // LEDX_H
