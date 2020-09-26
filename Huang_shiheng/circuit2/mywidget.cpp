#include "mywidget.h"
#include <QDebug>
Mywidget::Mywidget(QWidget *parent):QWidget(parent)
{
    view = new QGraphicsView(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(QRectF(QRect(-100,-200,1200,600)));
    resize(1200,600);
    incident *inc = new incident(scene,yellow,0,0);
    inc->drawCircuit();

    timexx *tim = new timexx(scene,blue,0,0);
    tim->start();


    scene->setParent(this);
    view->setScene(scene);
    view->setAttribute(Qt::WA_TransparentForMouseEvents);//设置鼠标事件穿透,否则widget不能接收鼠标事件

    this->setMouseTracking(true);//设置不需要按下鼠标也能追踪位置


}

void Mywidget::mousePressEvent(QMouseEvent *event)//鼠标点击事件
{
    qDebug()<<event->pos();//鼠标点击的位置会打印鼠标的坐标
    if(event->pos().x() > 690&&event->pos().x() < 730&&event->pos().y()>272&&event->pos().y() < 325)//判断点击了开关
    {
        qDebug()<<"请在此实现开关状态切换绘图";//建议用个布尔量表示开关状态,每次点击根据布尔值来绘图
    }
}

void Mywidget::mouseMoveEvent(QMouseEvent *event)
{
    //qDebug()<<event->pos();
    if(event->pos().x() > 690&&event->pos().x() < 730&&event->pos().y()>272&&event->pos().y() < 325)//判断鼠标移到了开关上
    {
       qDebug()<<"可以在这里实现开关的高亮选中";
    }
    else if(event->pos().x() > 55&&event->pos().x() < 146&&event->pos().y()>261&&event->pos().y() < 345)//判断鼠标移到了电源上
    {
       //实现电源的高亮
    }
    else if(event->pos().x() > 320&&event->pos().x() < 385&&event->pos().y()>270&&event->pos().y() < 333)//判断鼠标移到了二极管上
    {
       //实现二极管的高亮
    }
    else if(event->pos().x() > 480&&event->pos().x() < 520&&event->pos().y()>240&&event->pos().y() < 360)//判断鼠标移到了电感上
    {
       //实现电感的高亮
    }
    else if(event->pos().x() > 480&&event->pos().x() < 520&&event->pos().y()>240&&event->pos().y() < 360)//判断鼠标移到了电感上
    {
       //实现电感的高亮
    }
    else if(event->pos().x() > 928&&event->pos().x() < 960&&event->pos().y()>290&&event->pos().y() < 312)//判断鼠标移到了小灯上
    {
       //实现小灯的高亮
    }
    else if(event->pos().x() > 784&&event->pos().x() < 853&&event->pos().y()>120&&event->pos().y() < 172)//判断鼠标移到了osc上
    {
       //实现osc的高亮
    }
    else
    {
        //清除高亮元件的显示
    }
}
