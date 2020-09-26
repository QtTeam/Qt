#include "pow.h"

power::power(QGraphicsScene *sc,QColor col,int a,int b)
{
    x = a;
    y = b;
    scene = sc;
    color = col;
}
void power::drawPower()
{
    circle *cri = new circle(x,y,80,80);
    scene->addItem(cri);

    QGraphicsLineItem *line = new QGraphicsLineItem(x+40,y,x+40,y-30);
    line->setPen(QPen(color,5));
    scene->addItem(line);

    QGraphicsRectItem *item1 = new QGraphicsRectItem(x+25,y+10,20,20);
    item1->setPen(QPen(QColor(255,255,255),0));
    QGraphicsTextItem *text1 = new QGraphicsTextItem(item1);
    text1->setPlainText("+");
    QFont font1;
    font1.setPointSize(24);
    text1->setFont(font1);
    text1->setPos(x+28,y);
    scene->addItem(item1);

    QGraphicsRectItem *item2 = new QGraphicsRectItem(x+25,y+50,20,20);
    item2->setPen(QPen(QColor(255,255,255),0));
    QGraphicsTextItem *text2 = new QGraphicsTextItem(item2);
    text2->setPlainText("-");
    QFont font2;
    font2.setPixelSize(40);
    text2->setFont(font2);
    text2->setPos(x+31,y+30);
    scene->addItem(item2);

    QGraphicsRectItem *item3 = new QGraphicsRectItem(x-15,y-15,20,20);
    item3->setPen(QPen(QColor(255,255,255),0));
    QGraphicsTextItem *text3 = new QGraphicsTextItem(item3);
    text3->setPlainText("3V");
    QFont font3;
    font3.setPixelSize(25);
    text3->setFont(font3);
    text3->setPos(x-15,y-15);
    scene->addItem(item3);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x+40,y+80,x+40,y+110);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

}

void power::start()
{

}
