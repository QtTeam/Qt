#ifndef GRAND_H
#define GRAND_H

#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include <QGraphicsLineItem>

class Grand
{
private:
    int x,y;
    QGraphicsScene * scene;
    QColor color;
public:
    Grand(QGraphicsScene *sc,QColor col,int a,int b);
    void realizeUp();
    void realizaDown();
    void realizaLeft();
    void realizaRight();

};

#endif // GRAND_H
