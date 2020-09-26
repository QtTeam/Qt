#ifndef INCIDENT_H
#define INCIDENT_H

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGraphicsLineItem>
#include "pow.h"           //dian yuan
#include "grand.h"         //di
#include "diode.h"         //er ji guan
#include "inductance.h"    //dian gan
#include "ledx.h"          //deng
#include "oscilloscope.h"  //shi bo qi
#include "switchx.h"       //kai guan

class incident
{
private:
    QGraphicsScene *scene;
    pow *pow_m;
    switchx *switch_m;
    diode *diode_m;
    inductance *ind_m;
    Grand *grand_m1;
    Grand *grand_m2;
    ledx *ledx_m;
    oscilloscope *osc_m;
    int x,y;
    QColor color;
    QColor yellow = QColor(0,255,0);
    QGraphicsLineItem *line1,*line2,*line3,*line4,*line5,*line6,*line7,*line8;
    QGraphicsLineItem *line9,*line10,*line11,*line12,*line13,*line14,*line15,*line16;
public:
    incident(QGraphicsScene *sc,QColor col,int a,int b);
    void drawCircuit();
    void dynamic(QColor col);
};

#endif // INCIDENT_H
