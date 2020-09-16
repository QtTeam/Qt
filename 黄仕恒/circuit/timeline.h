#ifndef TIMELINE_H
#define TIMELINE_H

#include <QTimer>
#include <QObject>
#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include <QCoreApplication>

class timeLine:QObject
{
    Q_OBJECT
public:
    timeLine(int a,int b,int c,int d,QGraphicsScene * sc);
    QTimer *time;
    void start();
    void stop();
    int flag=1;
    void setP(int ax,int bx,int cx,int dx);
private:
    QGraphicsScene * scene;
    int x1,y1,x2,y2;
    int nowx,nowy;
    int val = 0;
    void work();
public slots:
    void onTimeOut();
};

#endif // TIMELINE_H
