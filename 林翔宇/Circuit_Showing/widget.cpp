#include "widget.h"
#include <QPixmap>
#include <QGraphicsLineItem>
#include <QGraphicsPixmapItem>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(600,400);
    _view = new QGraphicsView(this);
    _view->setScene(_Scene = new QGraphicsScene);
    QPixmap *BJT = new QPixmap("../1.png");
    QGraphicsLineItem *line;
    _Scene->addItem( line = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(100,100))));
    line->setPos(800,0);
    QGraphicsPixmapItem *bjt = new QGraphicsPixmapItem(*BJT);
    //bjt->setPos(QPointF(QPoint(0,0)));
    _Scene->addItem(bjt);
     bjt->setPos(200,-100);

}

Widget::~Widget()
{
}

void Widget::resizeEvent(QResizeEvent*)
{
    _view->setGeometry(QRect(QPoint(0,0),size()));
}

