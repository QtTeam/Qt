#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsLineItem>
#include <QGraphicsView>
#include "disc.h"
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    QGraphicsScene *_Scene;
    QGraphicsView *_view;
    void mousePressEvent(QMouseEvent *event);
    void resizeEvent(QResizeEvent*);
    ~Widget();
};
#endif // WIDGET_H
