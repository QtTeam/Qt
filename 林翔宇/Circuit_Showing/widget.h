#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsLineItem>
#include <QGraphicsView>
#include <QPropertyAnimation>
#include <QLabel>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    QGraphicsScene *_Scene;
    QGraphicsView *_view;
    ~Widget();

    void resizeEvent(QResizeEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mousePressEvent(QMouseEvent *event);
    void Delay_MSec_Suspend(unsigned int msec);
    int _cnt;//动态演示计算变量

    /*演示需要的元件*/
    QGraphicsPixmapItem *bjt;//运放
    QGraphicsPixmapItem *r0;//电阻
    QGraphicsPixmapItem *r1;
    QGraphicsPixmapItem *ground;//地
    QGraphicsLineItem *line;
    QGraphicsLineItem *l1;
    QGraphicsLineItem *l2;
    QGraphicsLineItem *l3;
    QGraphicsLineItem *l4;
    QGraphicsLineItem *l5;
    QGraphicsLineItem *l6;//演示虚短

    QGraphicsPixmapItem *x1;//演示虚断
    QGraphicsPixmapItem *x2;

    QLabel* winLabel;
    QPropertyAnimation* anime;//电流动画
    QTimer *timer;
public slots:
    void add();
    void Virtual_short();
    void Virtual_open();


};
#endif // WIDGET_H
