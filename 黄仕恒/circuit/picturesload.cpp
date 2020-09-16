#include "picturesload.h"

picturesLoad::picturesLoad(int x,int y,int l,int w,QString s):px(x),py(y),len(l),width(w)
{
    str = s;
}
/*
void Graphic::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    painter->drawImage(QRectF(0,0,100,130),QImage(":/img/plane.png"));

*/
void picturesLoad::paint(QPainter *painter,
            const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawImage(QRectF(px,py,len,width),QImage(str));
}

QRectF picturesLoad::boundingRect() const
{
     qreal adjust = 0.5;
     return QRectF(-10-adjust,-10-adjust,20+adjust,20+adjust);
}

/*
QString s1 = "/home/sh/图片/1.jpg";
picturesLoad *pl1 = new picturesLoad(-1200,-600,600,400,s1);
//pl1->setPos(-500,-500);
scene->addItem(pl1);

QString s2 = "/home/sh/图片/2.jpg";
picturesLoad *pl2 = new picturesLoad(-600,-200,600,400,s2);
scene->addItem(pl2);
*/
