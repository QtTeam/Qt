#include "widget.h"

/* QColor*/
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    /*
   器件都在此处添加,设置位置
   */
    setMouseTracking(true);
    _view = new QGraphicsView(this);
    _view->setScene(_Scene = new QGraphicsScene(this));
    _Scene->setSceneRect(0,0,2000,2000);//解决view,scene坐标不匹配
    resize(1200,700);
    RES *it1 = new RES(100,100,"red");
    _Scene->addItem(it1);
    it1->setPos(200,200);

    CAP *it2 = new CAP(100,100,"green");
    _Scene->addItem(it2);
    it2->setPos(300,200);

    LED *it3 = new LED(100,100,"yellow");
    _Scene->addItem(it3);
    it3->setPos(400,200);

    IND *it4 = new IND(100,100,"purple");
    _Scene->addItem(it4);
    it4->setPos(500,200);

    SW *it5 = new SW(100,100,"green");
    _Scene->addItem(it5);
    it5->setPos(600,200);

    DIODE *it6 = new DIODE(100,100,"green");
    _Scene->addItem(it6);
    it6->setPos(700,200);

    OP *it7 = new OP(100,100,"green");
    _Scene->addItem(it7);
    it7->setPos(800,200);

    POWER *it8 = new POWER(100,100,"green");
    _Scene->addItem(it8);
    it8->setPos(900,200);
    //_Scene->removeItem(it1);

    connect(it5,SIGNAL(timeStart()),this,SLOT(timeStart()));
    connect(it5,SIGNAL(timeStop()),this,SLOT(timeStop()));
    connect(it5,SIGNAL(timeStop()),it3,SLOT(receiveStop()));
    timer = new QTimer();
    connect(timer,&QTimer::timeout,[=](){
        //qDebug() << "hello" << endl;
        emit sendTime();
    });

    connect(timer,SIGNAL(timeout()),it1,SLOT(receiveTime()));
    connect(timer,SIGNAL(timeout()),it2,SLOT(receiveTime()));
    connect(timer,SIGNAL(timeout()),it3,SLOT(receiveTime()));
    connect(timer,SIGNAL(timeout()),it4,SLOT(receiveTime()));
    connect(timer,SIGNAL(timeout()),it5,SLOT(receiveTime()));
    connect(timer,SIGNAL(timeout()),it6,SLOT(receiveTime()));
    connect(timer,SIGNAL(timeout()),it8,SLOT(receiveTime()));
}

Widget::~Widget()
{

}

void Widget::mousePressEvent(QMouseEvent *event)//用来查看坐标
{
    qDebug()<<event->pos();
}

void Widget::stop()
{
    this->close();
}

void Widget::timeStart(){
    timer->setInterval(500);
    timer->start();
}

void Widget::timeStop(){
    timer->stop();
}
