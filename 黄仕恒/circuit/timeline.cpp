#include "timeline.h"

timeLine::timeLine(int a,int b,int c,int d,QGraphicsScene * sc)
{
    x1 = a;
    y1 = b;
    x2 = c;
    y2 = d;
    nowx = x1;
    nowy = y1;
    scene = sc;
    time = new QTimer();
    time->setInterval(100);
    connect(time,SIGNAL(timeout()),this,SLOT(onTimeOut()));
    time->start();
}

void timeLine::start()
{
    time->start();
    flag=1;
}

void timeLine::stop()
{
    time->stop();
    flag=0;
}

void timeLine::work()
{
    QGraphicsLineItem *line = new QGraphicsLineItem(nowx,nowy,5,5);
    line->setPen(QPen(QColor(255,0,255),5));
    nowx+=1;
    nowy+=1;
    scene->addItem(line);
}

void timeLine::setP(int ax,int bx,int cx,int dx)
{
    nowx = ax;
    nowy = bx;
    x1 = ax;
    y1 = bx;
    x2 = cx;
    y2 = dx;
}
void timeLine::onTimeOut()
{
    if(x1==x2){
        if(y1>y2){
            if(nowy<=y2)
                time->stop();
            QGraphicsLineItem *line = new QGraphicsLineItem(nowx,nowy,nowx,nowy-5 );
            line->setPen(QPen(QColor(255,0,255),5));
            nowy-=5;
            scene->addItem(line);
        }else{
            if(nowy>=y2)
                time->stop();
            QGraphicsLineItem *line = new QGraphicsLineItem(nowx,nowy,nowx,nowy+5);
            line->setPen(QPen(QColor(255,0,255),5));
            nowy+=5;
            scene->addItem(line);
        }
    }
    else if(y1==y2){
        if(x1>x2){
            if(nowx<=x2)
                time->stop();
            QGraphicsLineItem *line = new QGraphicsLineItem(nowx,nowy,nowx-5,nowy);
            line->setPen(QPen(QColor(255,0,255),5));
            nowx-=5;
            scene->addItem(line);
        }else{
            if(nowx>=x2)
                time->stop();
            QGraphicsLineItem *line = new QGraphicsLineItem(nowx,nowy,nowx+5,nowy);
            line->setPen(QPen(QColor(255,0,255),5));
            nowx+=5;
            scene->addItem(line);
        }
    }
}
