#ifndef PICTURESLOAD_H
#define PICTURESLOAD_H

#include <QGraphicsItem>
#include <QString>
#include <QPainter>

class picturesLoad : public QGraphicsItem
{
private:
    QString str;
    int px,py,len,width;
public:
    picturesLoad(int x,int y,int l,int w,QString s);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = Q_NULLPTR);
    QRectF boundingRect() const;

};

#endif // PICTURESLOAD_H
