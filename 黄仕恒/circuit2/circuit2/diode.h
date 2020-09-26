#ifndef DIODE_H
#define DIODE_H

#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include "circle.h"

class diode
{
private:
    int x,y;
    float in,out;
    QGraphicsScene *scene;
    QColor color;
    circle *cir;
public:
    diode(QGraphicsScene *sc,QColor col,int a,int b);
    void drawDiodeAcross();
    void drwaDiodeEnding();
    void start(QColor colx);
    void lighting(QColor colx);
    void dark();
};

#endif // DIODE_H
