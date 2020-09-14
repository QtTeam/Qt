#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
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
    int _cnt;
public slots:
    void add();


};
#endif // WIDGET_H
