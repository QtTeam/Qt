#include "mywidget.h"

Mywidget::Mywidget(QWidget *parent):QWidget(parent)
{
    view = new QGraphicsView(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(QRectF(QRect(-100,-200,1200,600)));
    resize(1200,600);
    incident *inc = new incident(scene,yellow,0,0);
    inc->drawCircuit();

    timexx *tim = new timexx(scene,blue,0,0);
    tim->start();


    scene->setParent(this);
    view->setScene(scene);
}
