#ifndef DISC_H
#define DISC_H
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsLineItem>
#include "myblock.h"
class Disc
{
public:
    Disc();
    void drawDisc(QGraphicsScene *scene);
    void MoveBlock(MyBlock*,QString from,QString to);//后面两个参数在'A','B','C'中选择
    MyBlock *b1;
    MyBlock *b2;
    MyBlock *b3;
private:
    int cnt_A,cnt_B,cnt_C;//每根柱子的计数变量
    int px;//位移变量
    int py;//位移变量


};

#endif // DISC_H
