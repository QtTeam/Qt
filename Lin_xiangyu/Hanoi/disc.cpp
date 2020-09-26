#include "disc.h"
#include <QBrush>
#include <QPen>
#include <QGraphicsScene>
#include <QPropertyAnimation>
#include <QDebug>
Disc::Disc():cnt_A(3),cnt_B(0),cnt_C(0),px(0),py(0)
{
    b1 = new MyBlock(300,50,"red");
    b2 = new MyBlock(200,50,"green");
    b3 = new MyBlock(100,50,"yellow");

}

void Disc::drawDisc(QGraphicsScene *scene)
{
        QGraphicsRectItem *rect0 = new QGraphicsRectItem(0,0,900,50);
        rect0->setBrush(QBrush(QColor(100,149,237)));
        rect0->setPos(300,600);
        scene->addItem(rect0);

        QGraphicsLineItem *A = new QGraphicsLineItem(0,0,0,400,rect0);
        QGraphicsSimpleTextItem *text_A = new QGraphicsSimpleTextItem ("A",rect0);
        text_A->setPos(150,-500);text_A->setScale(2);//变大两倍
        QPen *pen = new QPen();pen->setWidth(8);
        A->setPen(*pen);
        A->setParentItem(rect0);
        A->setPos(150,-405);


        QGraphicsLineItem *B = new QGraphicsLineItem(0,0,0,400,rect0);
        QGraphicsSimpleTextItem *text_B = new QGraphicsSimpleTextItem ("B",rect0);
        text_B->setPos(450,-500);text_B->setScale(2);
        //QPen *pen = new QPen();pen->setWidth(10);
        B->setPen(*pen);
        B->setParentItem(rect0);
        B->setPos(450,-405);

        QGraphicsLineItem *C = new QGraphicsLineItem(0,0,0,400,rect0);
        QGraphicsSimpleTextItem *text_C = new QGraphicsSimpleTextItem ("C",rect0);
        text_C->setPos(750,-500);text_C->setScale(2);
        //QPen *pen = new QPen();pen->setWidth(10);
        C->setPen(*pen);
        C->setParentItem(rect0);
        C->setPos(750,-405);

        //添加砖块
        b1->setParentItem(rect0);
        b1->setPos(0,-50);
        b2->setParentItem(rect0);
        b2->setPos(50,-100);
        b3->setParentItem(rect0);
        b3->setPos(100,-150);
}
void Disc::MoveBlock(MyBlock* block,QString from,QString to)
{
    if('A' == from && 'B' == to)
        px = 300;
    else if('A' == from && 'C' == to)
        px = 600;
    else if('B' == from && 'C' == to)
        px = 300;
    else if('C' == from && 'B' == to)
        px = -300;
    else if('C' == from && 'A' == to)
        px = -600;
    else if('B' == from && 'A' == to)
        px = -300;
    else
        px = 0;


    QPropertyAnimation *anime = new QPropertyAnimation(block,"pos");
    anime->setDuration(5000);
    anime->setStartValue(QPoint(block->x(),block->y()));
    anime->setEasingCurve(QEasingCurve::InOutCubic);
    anime->setKeyValueAt(0.33,QPoint(block->x(), block->y() - 450));
    anime->setKeyValueAt(0.66,QPoint(block->x() + px,block->y() - 450));

    int *cur_column0 = nullptr;
    if('A' == from){
        cnt_A--;cur_column0 = &cnt_A;
    }
    else if('B' == from){
        cnt_B--;cur_column0 = &cnt_B;
    }
    else if('C' == from){
        cnt_C--;cur_column0 = &cnt_C;
    }
    else
        NULL;

    int *cur_column = nullptr;
    if('A' == to)
        cur_column = &cnt_A;
    else if('B' == to)
        cur_column = &cnt_B;
    else if('C' == to)
        cur_column = &cnt_C;
    else
        NULL;


    py = 50*(*cur_column0 - *cur_column);//高度的相对值

    (*cur_column)++;
    anime->setKeyValueAt(1,QPoint(block->x() + px,block->y() + py));
    anime->start();
    qDebug()<<cnt_A<<' '<<cnt_B<<' '<<cnt_C;
    qDebug()<<py;

}

