#include "widget.h"
#include "myblock.h"
#include <QGraphicsRectItem>
#include <QGraphicsSimpleTextItem>
#include <QDebug>
#include <QPropertyAnimation>
#include <QTimer>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //setFixedSize(600,400);
    resize(1462,761);
    _view = new QGraphicsView(this);
    _view->setScene(_Scene = new QGraphicsScene(this));
    _Scene->setSceneRect(0,0,2000,2000);//解决view,scene坐标不匹配

    Disc *disc = new Disc();
    disc->drawDisc(_Scene);//添加一个底盘
    qDebug()<<disc->b1->pos();
    //A->C,A->B,C->B,A->C,B->A,B->C,A->C
    disc->MoveBlock(disc->b3,QString('A'),QString('C'));
    QTimer::singleShot(4000,[=](){
        disc->MoveBlock(disc->b2,QString('A'),QString('B'));
    });
    QTimer::singleShot(8000,[=](){
        disc->MoveBlock(disc->b3,QString('C'),QString('B'));
    });
    QTimer::singleShot(12000,[=](){
        disc->MoveBlock(disc->b1,QString('A'),QString('C'));
    });
    QTimer::singleShot(16000,[=](){
        disc->MoveBlock(disc->b3,QString('B'),QString('A'));
    });
    QTimer::singleShot(20000,[=](){
        disc->MoveBlock(disc->b2,QString('B'),QString('C'));
    });
    QTimer::singleShot(24000,[=](){
        disc->MoveBlock(disc->b3,QString('A'),QString('C'));
    });



}

Widget::~Widget()
{
}

void Widget::mousePressEvent(QMouseEvent *event)//用来查看坐标
{
    qDebug()<<event->pos();
}

void Widget::resizeEvent(QResizeEvent*)
{
    _view->setGeometry(QRect(QPoint(0,0),size()));
    //_Scene->setSceneRect(0,0,this->width(),this->height());
}
