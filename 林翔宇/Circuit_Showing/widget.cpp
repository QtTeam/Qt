#include "widget.h"
#include <QPixmap>
#include <QDebug>
#include <QMouseEvent>
#include <QGraphicsLineItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QTime>
Widget::Widget(QWidget *parent)
    : QWidget(parent),_cnt(0)
{
    resize(800,600);
    //setFixedSize(600,400);
    _view = new QGraphicsView(this);
    _view->setScene(_Scene = new QGraphicsScene(this));
    _Scene->setSceneRect(0,0,1000,1000);//解决view,scene坐标不匹配
    QPixmap *BJT = new QPixmap("T1.png");
    QGraphicsLineItem *line;

    QTimer *timer = new QTimer(this);
    timer->setInterval(2000);
    timer->start();
    connect(timer,SIGNAL(timeout()),this,SLOT(add()));

    _Scene->addItem( line = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(100,0))));
    QGraphicsPixmapItem *bjt = new QGraphicsPixmapItem(*BJT);
    _Scene->addItem(bjt);
    bjt->setPos(300,200);
    Delay_MSec_Suspend(1000);

    QPixmap *R0 = new QPixmap("R1.png");
    QGraphicsPixmapItem *r0 = new QGraphicsPixmapItem(*R0);
    r0->setParentItem(bjt);
    r0->setPos(0,-67);

    QPixmap *R1 = new QPixmap("R1.png");
    QGraphicsPixmapItem *r1 = new QGraphicsPixmapItem(*R1);
    r1->setParentItem(bjt);
    r1->setPos(-236,34);

    QPixmap *G = new QPixmap("ground.png");
    QGraphicsPixmapItem *ground = new QGraphicsPixmapItem(*G);
    ground->setParentItem(bjt);
    ground->setPos(-36,225);

    line->setParentItem(bjt);
    line->setPos(-100,57);

    QGraphicsLineItem *l1;
    _Scene->addItem( l1 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(0,100))));
    l1->setParentItem(line);
    l1->setPos(50,-100);

    QGraphicsLineItem *l2;
    _Scene->addItem( l2 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(300,0))));
    l2->setParentItem(l1);

    QGraphicsLineItem *l3;
    _Scene->addItem( l3 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(0,135))));
    l3->setParentItem(l2);
    l3->setPos(300,0);

    QGraphicsLineItem *l4;
    _Scene->addItem( l4 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(200,0))));
    l4->setParentItem(l3);
    l4->setPos(-80,135);

    QGraphicsLineItem *l5;
    _Scene->addItem( l5 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(0,100))));
    l5->setParentItem(bjt);
    l5->setPos(0,130);

}

Widget::~Widget()
{
}

void Widget::resizeEvent(QResizeEvent*)
{
    _view->setGeometry(QRect(QPoint(0,0),size()));
    //_Scene->setSceneRect(0,0,this->width(),this->height());
}

void Widget::mouseMoveEvent(QMouseEvent *e)
{
    qDebug()<<e->pos();
}

void Widget::mousePressEvent(QMouseEvent *event)//用来查看坐标
{
    qDebug()<<event->pos();
}

void Widget::add()
{
    qDebug()<<_cnt++;
    switch (_cnt){
    case 1:
        qDebug()<<1;break;
    case 2:
        qDebug()<<2;break;
    case 3:
        qDebug()<<3;break;
    case 4:
        qDebug()<<4;break;
    case 5:
        qDebug()<<5;break;
    case 6:
        qDebug()<<6;break;
    }

}


void Widget::Delay_MSec_Suspend(unsigned int msec)
{
    QTime _Timer = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < _Timer );
}

