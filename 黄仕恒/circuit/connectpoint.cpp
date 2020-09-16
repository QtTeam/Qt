#include "connectpoint.h"

connectPoint::connectPoint(Point *pt,QGraphicsScene *sc)
{
    point = pt;
    scene = sc;
}

void connectPoint::start()
{
    int i = 0;
    while(i < point->vPoint.size()){
        timeLine * ti = new timeLine(point->vPoint[i].fx,point->vPoint[i].fy,
                                     point->vPoint[i].ex,point->vPoint[i].ey,scene);
        ti->start();
        ++i;
    }
}
