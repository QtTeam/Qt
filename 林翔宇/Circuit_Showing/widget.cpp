#include "widget.h"
#include <QPixmap>
#include <QDebug>
#include <QMouseEvent>
#include <QGraphicsLineItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QTime>
#include <QPushButton>
#include <QLabel>
#include <QPropertyAnimation>
Widget::Widget(QWidget *parent)
    : QWidget(parent),_cnt(0)
{
    resize(800,600);
    //setFixedSize(600,400);
    _view = new QGraphicsView(this);
    _view->setScene(_Scene = new QGraphicsScene(this));
    _Scene->setSceneRect(0,0,1000,1000);//解决view,scene坐标不匹配
    QPixmap *BJT = new QPixmap("T1.png");

    timer = new QTimer(this);
    timer->setInterval(1500);
    //timer->start();
    connect(timer,SIGNAL(timeout()),this,SLOT(add()));
    QPushButton *start_btn = new QPushButton("开始演示",this);
    start_btn->setGeometry(0,0,100,50);
    QPushButton *b1 = new QPushButton("虚短",this);
    b1->setGeometry(0,50,50,50);b1->hide();//在开始演示之前不显示此按钮
     QPushButton *b2 = new QPushButton("虚断",this);
    b2->setGeometry(50,50,50,50);b2->hide();

    connect(start_btn,SIGNAL(clicked(bool)),timer,SLOT(start()));
    connect(start_btn,SIGNAL(clicked(bool)),b1,SLOT(show()));
    connect(start_btn,SIGNAL(clicked(bool)),b2,SLOT(show()));

    connect(b1,SIGNAL(clicked(bool)),this,SLOT(Virtual_short()));
    connect(b2,SIGNAL(clicked(bool)),this,SLOT(Virtual_open()));

    _Scene->addItem( line = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(100,0))));
    bjt = new QGraphicsPixmapItem(*BJT);
//    _Scene->addItem(bjt);
//    bjt->setPos(300,200);


    QPixmap *R0 = new QPixmap("R1.png");
    r0 = new QGraphicsPixmapItem(*R0);
//    r0->setParentItem(bjt);
//    r0->setPos(0,-67);

    QPixmap *R1 = new QPixmap("R1.png");
    r1 = new QGraphicsPixmapItem(*R1);
//    r1->setParentItem(bjt);
//    r1->setPos(-236,34);

    QPixmap *G = new QPixmap("ground.png");
    ground = new QGraphicsPixmapItem(*G);

//    _Scene->addItem(bjt);
//    bjt->setPos(300,200);

    l6 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(0,70)));
//   l6->setParentItem(bjt);
//    l6->setPos(0,60);
    QPen *pen = new QPen(QColor("red"));
    l6->setPen(*pen);

    QPixmap *X1 = new QPixmap("X.png");
    x1 = new QGraphicsPixmapItem(*X1);
    x2 = new QGraphicsPixmapItem(*X1);

        winLabel =new QLabel;
        QPixmap tmpPix;
        tmpPix.load("flu.png");
        winLabel->setGeometry(0,0,tmpPix.width(),tmpPix.height());
        winLabel->setPixmap(tmpPix);
        winLabel->setParent(this);
        winLabel->move(-100,-100);//移除窗口
        anime = new QPropertyAnimation(winLabel,"geometry");



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
        qDebug()<<1;
            _Scene->addItem(bjt);
            bjt->setPos(300,200);
        break;
    case 2:
        qDebug()<<2;
            r0->setParentItem(bjt);
            r0->setPos(0,-67);
        break;
    case 3:
        qDebug()<<3;
            r1->setParentItem(bjt);
            r1->setPos(-236,34);
        break;
    case 4:
        qDebug()<<4;
            ground->setParentItem(bjt);
            ground->setPos(-36,225);
        break;
    case 5:
        qDebug()<<5;
            line->setParentItem(bjt);
            line->setPos(-100,57);
        break;
    case 6:
        qDebug()<<6;
            _Scene->addItem( l1 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(0,100))));
            l1->setParentItem(line);
            l1->setPos(50,-100);
        break;
    case 7:
        qDebug()<<7;
            _Scene->addItem( l2 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(300,0))));
            l2->setParentItem(l1);
        break;
    case 8:
        qDebug()<<8;
            _Scene->addItem( l3 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(0,135))));
            l3->setParentItem(l2);
            l3->setPos(300,0);
        break;
    case 9:
        qDebug()<<9;
            _Scene->addItem( l4 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(200,0))));
            l4->setParentItem(l3);
            l4->setPos(-80,135);
        break;
    case 10:
        qDebug()<<10;
            _Scene->addItem( l5 = new QGraphicsLineItem(QLineF(QPoint(0,0),QPoint(0,100))));
            l5->setParentItem(bjt);
            l5->setPos(0,130);
        break;
    default:
        anime->setDuration(5000);
        anime->setStartValue(QRect(70,256,winLabel->width(),winLabel->height()));
        anime->setKeyValueAt(0.2,QRect(250,255,winLabel->width(),winLabel->height()));
        anime->setKeyValueAt(0.4,QRect(253,158,winLabel->width(),winLabel->height()));
        anime->setKeyValueAt(0.6,QRect(550,157,winLabel->width(),winLabel->height()));
        anime->setKeyValueAt(0.8,QRect(550,292,winLabel->width(),winLabel->height()));
        anime->setKeyValueAt(1,QRect(671,294,winLabel->width(),winLabel->height()));
        anime->setLoopCount(-1);
        anime->start();
        timer->stop();
        break;
    }

}

void Widget::Virtual_short()
{
       l6->setParentItem(bjt);
       l6->setPos(0,60);
}

void Widget::Virtual_open()
{
        x1->setParentItem(bjt);
        x1->setPos(5,50);


        x2->setParentItem(bjt);
        x2->setPos(5,120);
}

