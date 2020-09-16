#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QGraphicsView>
#include <QTime>
#include <QGraphicsLineItem>

#include "incident.h"
#include "point.h"
#include "connectpoint.h"

int main(int argc, char* argv[ ])
{
    QApplication app(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene;
    Point *point = new Point();
    incident *cident = new incident(scene,point);
    cident->combination();

    connectPoint *cp = new connectPoint(point,scene);
    cp->start();

    QGraphicsView view;
    view.setScene(scene);
    view.show();
    return app.exec();
}

