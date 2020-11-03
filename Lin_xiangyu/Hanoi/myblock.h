#ifndef MYBLOCK_H
#define MYBLOCK_H
#include <QGraphicsObject>
#include <QString>
class MyBlock:public QGraphicsObject
{
public:
    MyBlock(int wide,int height,QString color);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int width(){return wide;}
    int high(){return height;}


private:
    int wide;
    int height;
    QString color;
};

#endif // MYBLOCK_H
