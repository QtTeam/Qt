#ifndef OSCILLOSCOPE_H
#define OSCILLOSCOPE_H

#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

class oscilloscope
{
private:
    int x,y;
    QGraphicsScene *scene;
    QColor color;
    float inputa;
    float inputb;
public:
    oscilloscope(QGraphicsScene *sc,QColor col,int a,int b);
    void drawOscilloscopeA();
    void drawOscilloscopeB();
};

#endif // OSCILLOSCOPE_H
