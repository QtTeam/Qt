#ifndef WIDGET_H
#define WIDGET_H


#include <QWidget>
#include <QMouseEvent>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QEvent>
#include <QDebug>
#include <QTimer>
#include "res.h"
#include "cap.h"
#include "led.h"
#include "ind.h"
#include "sw.h"
#include "diode.h"
#include "op.h"
#include "power.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QGraphicsScene *_Scene;
    QGraphicsView *_view;

    void mousePressEvent(QMouseEvent *event);
    void stop();
    QTimer* timer;
private:
    Ui::Widget *ui;
    float curSize = 5;//全局电流大小
public slots:
    void timeStart();
    void timeStop();
signals:
    void sendTime();
};
#endif // WIDGET_H
