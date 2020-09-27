#include "incident.h"

incident::incident(QGraphicsScene *sc,QColor col,int a,int b)
{
    x = a;
    y = b;
    scene = sc;
    color = col;
}

void incident::drawCircuit()
{
    //x,y+40  --> x,y+170
    pow_m = new power(scene,color,x-40,y+60);
    pow_m->drawPower();

    //x+250,y+40 -->x+250,y+160
    diode_m = new diode(scene,color,x+250,y+40);
    diode_m->drwaDiodeEnding();
    diode_m->lighting(yellow);

    //x+150,y+200
    grand_m1 = new Grand(scene,color,x+150,y+200);
    grand_m1->realizeUp();

    //x+400,y+10 -->x+400,y+190
    ind_m = new inductance(scene,color,x+400,y+10);
    ind_m->drawInductanceEnding();

    //x+600,y+45 -->x+600,y+155
    switch_m = new switchx(scene,color,x+600,y+45);
    switch_m->creatSwichEnding();

    //x+600,y  -->x+700,y    ;x+685,y-80
    osc_m = new oscilloscope(scene,color,x+685,y-80);
    osc_m->drawOscilloscopeB();

    //x+740,y -->x+840,y

    //x+860,y
    grand_m2 = new Grand(scene,color,x+860,y);
    grand_m2->realizaLeft();

    //x+840,y+55 -->x+840,y+145
    ledx_m = new ledx(scene,color,x+840,y+55);
    ledx_m->drawLedEnding();
    ledx_m->lighting(yellow);

    //x+840,y+200

    //draw line
    line1 = new QGraphicsLineItem(x,y,x,y+40);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    line2 = new QGraphicsLineItem(x,y+170,x,y+200);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    line3 = new QGraphicsLineItem(x,y,x,y+40);
    line3->setPen(QPen(color,5));
    scene->addItem(line3);

    line4 = new QGraphicsLineItem(x,y,x+400,y);
    line4->setPen(QPen(color,5));
    scene->addItem(line4);

    line5 = new QGraphicsLineItem(x+250,y,x+250,y+40);
    line5->setPen(QPen(color,5));
    scene->addItem(line5);

    line6 = new QGraphicsLineItem(x+250,y+160,x+250,y+200);
    line6->setPen(QPen(color,5));
    scene->addItem(line6);

    line7 = new QGraphicsLineItem(x+400,y,x+400,y+30);
    line7->setPen(QPen(color,5));
    scene->addItem(line7);

    line8 = new QGraphicsLineItem(x+400,y+170,x+400,y+200);
    line8->setPen(QPen(color,5));
    scene->addItem(line8);

    line9 = new QGraphicsLineItem(x,y+200,x+400,y+200);
    line9->setPen(QPen(color,5));
    scene->addItem(line9);
    /***************************************************/
    line1 = new QGraphicsLineItem(x+600,y,x+600,y+45);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    line10 = new QGraphicsLineItem(x+600,y+155,x+600,y+200);
    line10->setPen(QPen(color,5));
    scene->addItem(line10);

    line11 = new QGraphicsLineItem(x+600,y,x+700,y);
    line11->setPen(QPen(color,5));
    scene->addItem(line11);

    line12 = new QGraphicsLineItem(x+740,y,x+860,y);
    line12->setPen(QPen(color,5));
    scene->addItem(line12);

    line13 = new QGraphicsLineItem(x+840,y,x+840,y+55);
    line13->setPen(QPen(color,5));
    scene->addItem(line13);

    line14 = new QGraphicsLineItem(x+840,y+145,x+840,y+200);
    line14->setPen(QPen(color,5));
    scene->addItem(line14);

    line15 = new QGraphicsLineItem(x+600,y+200,x+840,y+200);
    line15->setPen(QPen(color,5));
    scene->addItem(line15);
}
