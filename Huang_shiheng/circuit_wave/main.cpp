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


    Mywidget w;
    w.show();
    return a.exec();
}
