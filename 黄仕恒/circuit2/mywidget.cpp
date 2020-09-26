#include "mywidget.h"
#include <QGraphicsView>
#include <QTimer>
Mywidget::Mywidget(QGraphicsScene* sce,QColor col1,QColor col2,int x, int y,QWidget *parent):scene(sce),color1(col1),color2(col2),_x(x),_y(y),QWidget(parent)
{
    incident *inc = new incident(scene,color1,0,0);
    inc->drawCircuit();

    timexx *tim = new timexx(scene,color2,0,0);
    tim->start();
    QGraphicsView *view = new QGraphicsView;
    scene->setSceneRect(QRectF(QRect(-100,-200,1200,600)));
    scene->setParent(this);
    view->setScene(scene);
}
