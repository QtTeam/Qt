#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include "incident.h"
#include "timex.h"

#include <QMouseEvent>
class Mywidget : public QWidget
{
    Q_OBJECT
public:
    //explicit Mywidget(QWidget *parent = nullptr);
    Mywidget(QWidget *parent = nullptr);

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
private:
    QColor yellow = QColor(255,255,0);
    QColor purple   = QColor(255,0,255);
    QColor blue   = QColor(0,0,255);
    QGraphicsScene *scene;
    QGraphicsView *view;
signals:

};

#endif // MYWIDGET_H
