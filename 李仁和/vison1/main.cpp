#include "widget.h"
#include "myview.h"
#include <QApplication>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QtWidgets>
#include <QtGlobal>
#include <QGraphicsLineItem>
#include <QDebug>
#include <QGraphicsView>
#include <QGraphicsScene>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene;
    scene.setSceneRect(0,0,1000,1000);

    QImage image("../t3/ground.png");
    QGraphicsPixmapItem gnd( QPixmap::fromImage(image));
    scene.addItem(&gnd);
    gnd.setPos(463,700);

    QImage image1("../t3/R1.png");
    QGraphicsPixmapItem rs( QPixmap::fromImage(image1));
    scene.addItem(&rs);
    rs.setPos(200,331);

    //QImage image1("../t3/R1.png");
    QGraphicsPixmapItem rf( QPixmap::fromImage(image1));
    scene.addItem(&rf);
    rf.setPos(653,460);

    QImage image3("../t3/R2.png");
    QGraphicsPixmapItem r1( QPixmap::fromImage(image3));
    scene.addItem(&r1);
    r1.setPos(488,500);

    QImage image2("../t3/T1.png");
    QGraphicsPixmapItem opa( QPixmap::fromImage(image2));
    scene.addItem(&opa);
    opa.setPos(500,300);

    QGraphicsTextItem *R1;
        scene.addItem(R1 = new QGraphicsTextItem("R1"));
        R1->setPos(QPointF(410, 550));      //设置字体的位置
        R1->setFont(QFont("宋体", 20, 40, true));   //设置字体的属性



    QGraphicsTextItem *RS;
            scene.addItem(RS = new QGraphicsTextItem("Rs"));
            RS->setPos(QPointF(250, 390));      //设置字体的位置
            RS->setFont(QFont("宋体", 20, 40, true));   //设置字体的属性

    QGraphicsTextItem *Rf;
            scene.addItem(Rf = new QGraphicsTextItem("Rf"));
            Rf->setPos(QPointF(710, 510));      //设置字体的位置
            Rf->setFont(QFont("宋体", 20, 40, true));//设置字体的属性




    QGraphicsTextItem *GND;
                scene.addItem(GND = new QGraphicsTextItem("GND"));
                GND->setPos(QPointF(500, 760));      //设置字体的位置
                GND->setFont(QFont("宋体", 20, 40, true));

    QGraphicsLineItem *l1 ;
    scene.addItem( l1 = new QGraphicsLineItem(QLineF(QPoint(335,356),QPoint(500,356))));


    QGraphicsLineItem *l2 ;
    scene.addItem( l2 = new QGraphicsLineItem(QLineF(QPoint(500,428),QPoint(500,505))));

    QGraphicsLineItem *l3 ;
    scene.addItem( l3 = new QGraphicsLineItem(QLineF(QPoint(500,638),QPoint(500,700))));

    QGraphicsLineItem *l4 ;
    scene.addItem( l4 = new QGraphicsLineItem(QLineF(QPoint(501,480),QPoint(651,480))));

    QGraphicsLineItem *l5 ;
    scene.addItem( l5 = new QGraphicsLineItem(QLineF(QPoint(679,392),QPoint(820,392))));

    QGraphicsLineItem *l6 ;
    scene.addItem( l6 = new QGraphicsLineItem(QLineF(QPoint(790,480),QPoint(790,392))));

    MyView view;
    view.setScene(&scene);
    view.resize(1000,1000);
    //view.setBackgroundBrush(QPixmap("../t3/R1.png"));
    view.show();







    return a.exec();
}
