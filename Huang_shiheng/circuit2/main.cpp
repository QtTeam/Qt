#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGraphicsLineItem>
#include "pow.h"
#include "diode.h"
#include "inductance.h"
#include "ledx.h"
#include "oscilloscope.h"
#include "switchx.h"
#include "incident.h"
#include "timex.h"
#include "mywidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //incident *inc = new incident(scene,yellow,0,0);
//    inc->drawCircuit();

//    timexx *tim = new timexx(scene,purple,0,0);
//    tim->start();

//    QGraphicsView view;
//    scene->setSceneRect(QRectF(QRect(-100,-200,1200,600)));
//    view.setScene(scene);
//    view.show();
    Mywidget w;
    w.show();
    return a.exec();
}
