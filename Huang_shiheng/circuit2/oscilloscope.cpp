#include "oscilloscope.h"

oscilloscope::oscilloscope(QGraphicsScene *sc,QColor col,int a,int b)
{
    x = a;
    y = b;
    scene = sc;
    color = col;
}

void oscilloscope::drawOscilloscopeA()
{
    QGraphicsRectItem *rect1 = new QGraphicsRectItem(x,y,70,50);
    rect1->setPen(QPen(color,5));
    scene->addItem(rect1);

    QGraphicsRectItem *rect2 = new QGraphicsRectItem(x+15,y+5,40,15);
    rect2->setPen(QPen(color));
    scene->addItem(rect2);

    QGraphicsLineItem *line1 = new QGraphicsLineItem(x+15,y+50,x+15,y+80);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x+55,y+50,x+55,y+80);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    QGraphicsRectItem *item1 = new QGraphicsRectItem(x+20,y-25,30,20);
    item1->setPen(QPen(QColor(255,255,255),0));
    QGraphicsTextItem *text1 = new QGraphicsTextItem(item1);
    text1->setPlainText("oscilloscopeA");
    QFont font1;
    font1.setPixelSize(20);
    text1->setFont(font1);
    text1->setPos(x-22,y-30);
    scene->addItem(item1);

    QGraphicsRectItem *item2 = new QGraphicsRectItem(x+5,y+25,20,20);
    item2->setPen(QPen(QColor(255,255,255),0));
    QGraphicsTextItem *text2 = new QGraphicsTextItem(item2);
    text2->setPlainText("-");
    QFont font2;
    font2.setPixelSize(40);
    text2->setFont(font2);
    text2->setPos(x+5,y+10);
    scene->addItem(item2);

    QGraphicsRectItem *item3 = new QGraphicsRectItem(x+45,y+25,20,20);
    item3->setPen(QPen(QColor(255,255,255),0));
    QGraphicsTextItem *text3 = new QGraphicsTextItem(item3);
    text3->setPlainText("+");
    QFont font3;
    font3.setPixelSize(30);
    text3->setFont(font3);
    text3->setPos(x+45,y+15);
    scene->addItem(item3);

}
void oscilloscope::drawOscilloscopeB()
{
    QGraphicsRectItem *rect1 = new QGraphicsRectItem(x,y,70,50);
    rect1->setPen(QPen(color,5));
    scene->addItem(rect1);

    QGraphicsRectItem *rect2 = new QGraphicsRectItem(x+15,y+5,40,15);
    rect2->setPen(QPen(color));
    scene->addItem(rect2);

    QGraphicsLineItem *line1 = new QGraphicsLineItem(x+15,y+50,x+15,y+80);
    line1->setPen(QPen(color,5));
    scene->addItem(line1);

    QGraphicsLineItem *line2 = new QGraphicsLineItem(x+55,y+50,x+55,y+80);
    line2->setPen(QPen(color,5));
    scene->addItem(line2);

    QGraphicsRectItem *item1 = new QGraphicsRectItem(x+20,y-25,30,20);
    item1->setPen(QPen(QColor(255,255,255),0));
    QGraphicsTextItem *text1 = new QGraphicsTextItem(item1);
    text1->setPlainText("oscilloscopeB");
    QFont font1;
    font1.setPixelSize(20);
    text1->setFont(font1);
    text1->setPos(x-22,y-30);
    scene->addItem(item1);

    QGraphicsRectItem *item2 = new QGraphicsRectItem(x+5,y+25,20,20);
    item2->setPen(QPen(QColor(255,255,255),0));
    QGraphicsTextItem *text2 = new QGraphicsTextItem(item2);
    text2->setPlainText("+");
    QFont font2;
    font2.setPixelSize(30);
    text2->setFont(font2);
    text2->setPos(x+5,y+15);
    scene->addItem(item2);

    QGraphicsRectItem *item3 = new QGraphicsRectItem(x+45,y+25,20,20);
    item3->setPen(QPen(QColor(255,255,255),0));
    QGraphicsTextItem *text3 = new QGraphicsTextItem(item3);
    text3->setPlainText("-");
    QFont font3;
    font3.setPixelSize(40);
    text3->setFont(font3);
    text3->setPos(x+45,y+10);
    scene->addItem(item3);

}
