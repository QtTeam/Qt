#ifndef TIMEXX_H
#define TIMEXX_H

#include <QTimer>
#include <QObject>
#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include <QCoreApplication>

class timexx:QObject
{
    Q_OBJECT
private:
    QTimer *time;
    QGraphicsScene *scene;
    QColor color;
    int x,y,state,flag;
    QGraphicsLineItem *line1=nullptr,*line2=nullptr,*line3=nullptr,*line4=nullptr,*line5=nullptr,*line6=nullptr,*line7=nullptr,*line8=nullptr;
    QGraphicsLineItem *line9=nullptr,*line10=nullptr,*line11=nullptr,*line12=nullptr,*line13=nullptr,*line14=nullptr,*line15=nullptr,*line16=nullptr;
public:
    timexx(QGraphicsScene *sc,QColor col,int a,int b);
    void start();
    void stop();
public slots:
    void onTimeOut();
};

#endif // TIMEX_H
