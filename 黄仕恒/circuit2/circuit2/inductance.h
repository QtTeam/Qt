#ifndef INDUCTANCE_H
#define INDUCTANCE_H

#include <QGraphicsLineItem>
#include <QGraphicsScene>

class inductance
{
private:
    int x,y;
    QGraphicsScene *scene;
    QColor color;
public:
    inductance(QGraphicsScene *sc,QColor col,int a,int b);
    void drawInductanceAcross();
    void drawInductanceEnding();
};

#endif // INDUCTANCE_H
