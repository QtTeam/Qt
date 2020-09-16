#ifndef INCIDENT_H
#define INCIDENT_H

#include <QGraphicsScene>

#include "picturesload.h"
#include "timeline.h"
#include "operationalamplifier.h"
#include "resistance.h"
#include "grand.h"
#include "signalp.h"
#include "point.h"

class incident
{
public:
    incident(QGraphicsScene * sc,Point *pt);
    void combination();
    void setP(int a,int b,int c,int d);
private:
    QGraphicsScene *scene;
    Point *point;
    p px;
};

#endif // INCIDENT_H
