#include "incident.h"

incident::incident(QGraphicsScene *sc,Point *pt)
{
    scene = sc;
    point = pt;
}

void incident::combination()
{
    operationalAmplifier *opa = new operationalAmplifier(scene,0,0);
    opa->realize();

    Resistance *res1 = new Resistance(scene,-500,10);
    res1->realizeAcross();

    Resistance *res2 = new Resistance(scene,-300,60);
    res2->realizeAcross();

    Resistance *res3 = new Resistance(scene,-200,-100);
    res3->realizeAcross();

    Resistance *res4 = new Resistance(scene,400,35);
    res4->realizeAcross();

    Grand *grand1 = new Grand(scene,-375,200);
    grand1->realizeUp();

    power *pow = new power(scene,-615,195);
    pow->realize();

    setP(-575,165,-575,30);
    point->vPoint.push_back(px);
    setP(-430,25,-75,25);
    point->vPoint.push_back(px);
    setP(-275,-80,-275,20);
    point->vPoint.push_back(px);
    setP(-130,-85,160,-85);
    point->vPoint.push_back(px);
    setP(170,-85,170,45);
    point->vPoint.push_back(px);
    setP(150,50,325,50);
    point->vPoint.push_back(px);
    setP(-75,75,-225,75);
    point->vPoint.push_back(px);
    setP(-375,75,-375,200);
    point->vPoint.push_back(px);
}

void incident::setP(int a,int b,int c,int d)
{
    px.fx = a;
    px.fy = b;
    px.ex = c;
    px.ey = d;
}
