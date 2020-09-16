#ifndef CONNECTPOINT_H
#define CONNECTPOINT_H

#include <QGraphicsScene>

#include "point.h"
#include "timeline.h"

class connectPoint
{
private:
    Point *point;
    QGraphicsScene *scene;
public:
    connectPoint(Point *pt,QGraphicsScene *sc);
    void start();
};

#endif // CONNECTPOINT_H
