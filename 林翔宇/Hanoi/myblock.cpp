#include "myblock.h"
#include <QPainter>
MyBlock::MyBlock(int w,int h,QString c):wide(w),height(h),color(c)
{

}

QRectF MyBlock::boundingRect() const
{
    qreal penWidth = 1;
    return QRectF(0 - penWidth/2,0 - penWidth/2,
                  wide + penWidth/2, height + penWidth/2);
}

void MyBlock::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setBrush(QBrush(QColor(color)));
    painter->drawRect(0,0,wide,height);
}
