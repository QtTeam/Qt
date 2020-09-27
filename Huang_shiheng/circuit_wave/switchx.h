#ifndef SWITCHX_H
#define SWITCHX_H

#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include "circle.h"

class switchx
{
private:
    int x,y;
    QGraphicsScene *scene;
    QColor color;
    QGraphicsLineItem *line;
    int flag,flag_sw;
public:
    switchx(QGraphicsScene *sc,QColor col,int a,int b);
    void creatSwitchACross();
    void creatSwichEnding();
    void switchOn();
    void switchOff();
};

#endif // SWITCH_H
