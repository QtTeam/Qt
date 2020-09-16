#ifndef OPERATIONALAMPLIFIER_H
#define OPERATIONALAMPLIFIER_H

#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsLineItem>
#include <QGraphicsTextItem>

class operationalAmplifier
{
private:
    QGraphicsScene * scene;
    int x,y;
public:
    operationalAmplifier(QGraphicsScene *sc,int a,int b);
    void realize();
};

#endif // OPERATIONALAMPLIFIER_H
