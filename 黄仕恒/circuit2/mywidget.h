#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "incident.h"
#include "timex.h"
#include <QGraphicsScene>

class Mywidget : public QWidget
{
    Q_OBJECT
public:
    //explicit Mywidget(QWidget *parent = nullptr);
    Mywidget(QGraphicsScene* sce,QColor col1,QColor col2,int x, int y,QWidget *parent = nullptr);
private:
    QGraphicsScene* scene;
    QColor color1;
    QColor color2;
    int _x,_y;
signals:

};

#endif // MYWIDGET_H
