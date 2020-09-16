#ifndef RESISTANCE_H
#define RESISTANCE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QGraphicsRectItem>

class Resistance
{
public:
    Resistance(QGraphicsScene *sc,int a,int b);
    void realizeAcross();
    void realizeEndlong();
private:
    int x,y;
    QGraphicsScene * scene;
};

#endif // RESISTANCE_H
