#include "myview.h"
#include <QMouseEvent>

#include <QDebug>

MyView::MyView(QWidget *parent):
    QGraphicsView(parent)
{

}

void MyView::mousePressEvent(QMouseEvent *event)
{
    QPoint viewPos = event ->pos();
    qDebug() << viewPos;
}
