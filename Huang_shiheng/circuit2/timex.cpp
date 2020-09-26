#include "timex.h"

timexx::timexx(QGraphicsScene *sc,QColor col,int a,int b)
{
    x = a;
    y = b;
    scene = sc;
    color = col;
    time = new QTimer();
    time->setInterval(700);
    state = 0;
    flag = 0;
    connect(time,SIGNAL(timeout()),this,SLOT(onTimeOut()));
}

void timexx::start()
{
    time->start();
}
void timexx::stop()
{
    time->stop();
}
void timexx::onTimeOut()
{
    switch(state){
        case 0:
            if(!flag){
                line1 = new QGraphicsLineItem(x,y,x+20,y);
                line1->setPen(QPen(color,5));
                scene->addItem(line1);
                line2 = new QGraphicsLineItem(x,y,x+20,y);
                line2->setPen(QPen(color,5));
                scene->addItem(line2);
                line3 = new QGraphicsLineItem(x,y,x+20,y);
                line3->setPen(QPen(color,5));
                scene->addItem(line3);
                line4 = new QGraphicsLineItem(x,y,x+20,y);
                line4->setPen(QPen(color,5));
                scene->addItem(line4);
                line5 = new QGraphicsLineItem(x,y,x+20,y);
                line5->setPen(QPen(color,5));
                scene->addItem(line5);
                line6 = new QGraphicsLineItem(x+400,y,x+400,y+25);
                line6->setPen(QPen(color,5));
                scene->addItem(line6);
                line7 = new QGraphicsLineItem(x+400,y+100,x+400,y+125);
                line7->setPen(QPen(color,5));
                scene->addItem(line7);
                line8 = new QGraphicsLineItem(x+400,y+200,x+380,y+200);
                line8->setPen(QPen(color,5));
                scene->addItem(line8);
                line9 = new QGraphicsLineItem(x+320,y+200,x+300,y+200);
                line9->setPen(QPen(color,5));
                scene->addItem(line9);
                line10 = new QGraphicsLineItem(x+240,y+200,x+220,y+200);
                line10->setPen(QPen(color,5));
                scene->addItem(line10);
                line11 = new QGraphicsLineItem(x+160,y+200,x+140,y+200);
                line11->setPen(QPen(color,5));
                scene->addItem(line11);
                line12 = new QGraphicsLineItem(x+80,y+200,x+60,y+200);
                line12->setPen(QPen(color,5));
                scene->addItem(line12);
                line13 = new QGraphicsLineItem(x,y+200,x,y+175);
                line13->setPen(QPen(color,5));
                scene->addItem(line13);
                line14 = new QGraphicsLineItem(x,y+100,x,y+75);
                line14->setPen(QPen(color,5));
                scene->addItem(line14);
                line15 = new QGraphicsLineItem(x+250,y,x+250,y+25);
                line15->setPen(QPen(color,5));
                scene->addItem(line15);
                line16 = new QGraphicsLineItem(x+250,y+100,x+250,y+125);
                line16->setPen(QPen(color,5));
                scene->addItem(line16);
                flag = 1;
            }else{
                scene->removeItem(line1);
                delete line1;
                line1 = new QGraphicsLineItem(x,y,x+20,y);
                line1->setPen(QPen(color,5));
                scene->addItem(line1);

                scene->removeItem(line2);
                delete line2;
                line2 = new QGraphicsLineItem(x,y,x+20,y);
                line2->setPen(QPen(color,5));
                scene->addItem(line2);

                scene->removeItem(line3);
                delete line3;
                line3 = new QGraphicsLineItem(x,y,x+20,y);
                line3->setPen(QPen(color,5));
                scene->addItem(line3);

                scene->removeItem(line4);
                delete line4;
                line4 = new QGraphicsLineItem(x,y,x+20,y);
                line4->setPen(QPen(color,5));
                scene->addItem(line4);

                scene->removeItem(line5);
                delete line5;
                line5 = new QGraphicsLineItem(x,y,x+20,y);
                line5->setPen(QPen(color,5));
                scene->addItem(line5);

                scene->removeItem(line6);
                delete line6;
                line6 = new QGraphicsLineItem(x+400,y,x+400,y+25);
                line6->setPen(QPen(color,5));
                scene->addItem(line6);

                scene->removeItem(line7);
                delete line7;
                line7 = new QGraphicsLineItem(x+400,y+100,x+400,y+125);
                line7->setPen(QPen(color,5));
                scene->addItem(line7);

                scene->removeItem(line8);
                delete line8;
                line8 = new QGraphicsLineItem(x+400,y+200,x+380,y+200);
                line8->setPen(QPen(color,5));
                scene->addItem(line8);

                scene->removeItem(line9);
                delete line9;
                line9 = new QGraphicsLineItem(x+320,y+200,x+300,y+200);
                line9->setPen(QPen(color,5));
                scene->addItem(line9);

                scene->removeItem(line10);
                delete line10;
                line10 = new QGraphicsLineItem(x+240,y+200,x+220,y+200);
                line10->setPen(QPen(color,5));
                scene->addItem(line10);

                scene->removeItem(line11);
                delete line11;
                line11 = new QGraphicsLineItem(x+160,y+200,x+140,y+200);
                line11->setPen(QPen(color,5));
                scene->addItem(line11);

                scene->removeItem(line12);
                delete line12;
                line12 = new QGraphicsLineItem(x+80,y+200,x+60,y+200);
                line12->setPen(QPen(color,5));
                scene->addItem(line12);

                scene->removeItem(line13);
                delete line13;
                line13 = new QGraphicsLineItem(x,y+200,x,y+175);
                line13->setPen(QPen(color,5));
                scene->addItem(line13);

                scene->removeItem(line14);
                delete line14;
                line14 = new QGraphicsLineItem(x,y+100,x,y+75);
                line14->setPen(QPen(color,5));
                scene->addItem(line14);

                scene->removeItem(line15);
                delete line15;
                line15 = new QGraphicsLineItem(x+250,y,x+250,y+25);
                line15->setPen(QPen(color,5));
                scene->addItem(line15);

                scene->removeItem(line16);
                delete line16;
                line16 = new QGraphicsLineItem(x+250,y+100,x+250,y+125);
                line16->setPen(QPen(color,5));
                scene->addItem(line16);
            }
            ++state;
        break;
        case 1:
            scene->removeItem(line1);
            delete line1;
            line1 = new QGraphicsLineItem(x+20,y,x+40,y);
            line1->setPen(QPen(color,5));
            scene->addItem(line1);

            scene->removeItem(line2);
            delete line2;
            line2 = new QGraphicsLineItem(x+100,y,x+120,y);
            line2->setPen(QPen(color,5));
            scene->addItem(line2);

            scene->removeItem(line3);
            delete line3;
            line3 = new QGraphicsLineItem(x+180,y,x+200,y);
            line3->setPen(QPen(color,5));
            scene->addItem(line3);

            scene->removeItem(line4);
            delete line4;
            line4 = new QGraphicsLineItem(x+260,y,x+280,y);
            line4->setPen(QPen(color,5));
            scene->addItem(line4);

            scene->removeItem(line5);
            delete line5;
            line5 = new QGraphicsLineItem(x+340,y,x+360,y);
            line5->setPen(QPen(color,5));
            scene->addItem(line5);

            scene->removeItem(line6);
            delete line6;
            line6 = new QGraphicsLineItem(x+400,y+25,x+400,y+50);
            line6->setPen(QPen(color,5));
            scene->addItem(line6);

            scene->removeItem(line7);
            delete line7;
            line7 = new QGraphicsLineItem(x+400,y+125,x+400,y+150);
            line7->setPen(QPen(color,5));
            scene->addItem(line7);

            scene->removeItem(line8);
            delete line8;
            line8 = new QGraphicsLineItem(x+380,y+200,x+360,y+200);
            line8->setPen(QPen(color,5));
            scene->addItem(line8);

            scene->removeItem(line9);
            delete line9;
            line9 = new QGraphicsLineItem(x+300,y+200,x+280,y+200);
            line9->setPen(QPen(color,5));
            scene->addItem(line9);

            scene->removeItem(line10);
            delete line10;
            line10 = new QGraphicsLineItem(x+220,y+200,x+200,y+200);
            line10->setPen(QPen(color,5));
            scene->addItem(line10);

            scene->removeItem(line11);
            delete line11;
            line11 = new QGraphicsLineItem(x+140,y+200,x+120,y+200);
            line11->setPen(QPen(color,5));
            scene->addItem(line11);

            scene->removeItem(line12);
            delete line12;
            line12 = new QGraphicsLineItem(x+60,y+200,x+40,y+200);
            line12->setPen(QPen(color,5));
            scene->addItem(line12);

            scene->removeItem(line13);
            delete line13;
            line13 = new QGraphicsLineItem(x,y+175,x,y+150);
            line13->setPen(QPen(color,5));
            scene->addItem(line13);

            scene->removeItem(line14);
            delete line14;
            line14 = new QGraphicsLineItem(x,y+75,x,y+50);
            line14->setPen(QPen(color,5));
            scene->addItem(line14);

            scene->removeItem(line15);
            delete line15;
            line15 = new QGraphicsLineItem(x+250,y+25,x+250,y+50);
            line15->setPen(QPen(color,5));
            scene->addItem(line15);

            scene->removeItem(line16);
            delete line16;
            line16 = new QGraphicsLineItem(x+250,y+125,x+250,y+150);
            line16->setPen(QPen(color,5));
            scene->addItem(line16);

            ++state;
        break;
        case 2:
            scene->removeItem(line1);
            delete line1;
            line1 = new QGraphicsLineItem(x+40,y,x+60,y);
            line1->setPen(QPen(color,5));
            scene->addItem(line1);

            scene->removeItem(line2);
            delete line2;
            line2 = new QGraphicsLineItem(x+120,y,x+140,y);
            line2->setPen(QPen(color,5));
            scene->addItem(line2);

            scene->removeItem(line3);
            delete line3;
            line3 = new QGraphicsLineItem(x+200,y,x+220,y);
            line3->setPen(QPen(color,5));
            scene->addItem(line3);

            scene->removeItem(line4);
            delete line4;
            line4 = new QGraphicsLineItem(x+280,y,x+300,y);
            line4->setPen(QPen(color,5));
            scene->addItem(line4);

            scene->removeItem(line5);
            delete line5;
            line5 = new QGraphicsLineItem(x+360,y,x+380,y);
            line5->setPen(QPen(color,5));
            scene->addItem(line5);

            scene->removeItem(line6);
            delete line6;
            line6 = new QGraphicsLineItem(x+400,y+50,x+400,y+75);
            line6->setPen(QPen(color,5));
            scene->addItem(line6);

            scene->removeItem(line7);
            delete line7;
            line7 = new QGraphicsLineItem(x+400,y+150,x+400,y+175);
            line7->setPen(QPen(color,5));
            scene->addItem(line7);

            scene->removeItem(line8);
            delete line8;
            line8 = new QGraphicsLineItem(x+360,y+200,x+340,y+200);
            line8->setPen(QPen(color,5));
            scene->addItem(line8);

            scene->removeItem(line9);
            delete line9;
            line9 = new QGraphicsLineItem(x+280,y+200,x+260,y+200);
            line9->setPen(QPen(color,5));
            scene->addItem(line9);

            scene->removeItem(line10);
            delete line10;
            line10 = new QGraphicsLineItem(x+200,y+200,x+180,y+200);
            line10->setPen(QPen(color,5));
            scene->addItem(line10);

            scene->removeItem(line11);
            delete line11;
            line11 = new QGraphicsLineItem(x+120,y+200,x+100,y+200);
            line11->setPen(QPen(color,5));
            scene->addItem(line11);

            scene->removeItem(line12);
            delete line12;
            line12 = new QGraphicsLineItem(x+40,y+200,x+20,y+200);
            line12->setPen(QPen(color,5));
            scene->addItem(line12);

            scene->removeItem(line13);
            delete line13;
            line13 = new QGraphicsLineItem(x,y+150,x,y+125);
            line13->setPen(QPen(color,5));
            scene->addItem(line13);

            scene->removeItem(line14);
            delete line14;
            line14 = new QGraphicsLineItem(x,y+50,x,y+25);
            line14->setPen(QPen(color,5));
            scene->addItem(line14);

            scene->removeItem(line15);
            delete line15;
            line15 = new QGraphicsLineItem(x+250,y+50,x+250,y+75);
            line15->setPen(QPen(color,5));
            scene->addItem(line15);

            scene->removeItem(line16);
            delete line16;
            line16 = new QGraphicsLineItem(x+250,y+150,x+250,y+175);
            line16->setPen(QPen(color,5));
            scene->addItem(line16);

            ++state;
        break;
        case 3:
            scene->removeItem(line1);
            delete line1;
            line1 = new QGraphicsLineItem(x+60,y,x+80,y);
            line1->setPen(QPen(color,5));
            scene->addItem(line1);

            scene->removeItem(line2);
            delete line2;
            line2 = new QGraphicsLineItem(x+140,y,x+160,y);
            line2->setPen(QPen(color,5));
            scene->addItem(line2);

            scene->removeItem(line3);
            delete line3;
            line3 = new QGraphicsLineItem(x+220,y,x+240,y);
            line3->setPen(QPen(color,5));
            scene->addItem(line3);

            scene->removeItem(line4);
            delete line4;
            line4 = new QGraphicsLineItem(x+300,y,x+320,y);
            line4->setPen(QPen(color,5));
            scene->addItem(line4);

            scene->removeItem(line5);
            delete line5;
            line5 = new QGraphicsLineItem(x+380,y,x+400,y);
            line5->setPen(QPen(color,5));
            scene->addItem(line5);

            scene->removeItem(line6);
            delete line6;
            line6 = new QGraphicsLineItem(x+400,y+75,x+400,y+100);
            line6->setPen(QPen(color,5));
            scene->addItem(line6);

            scene->removeItem(line7);
            delete line7;
            line7 = new QGraphicsLineItem(x+400,y+175,x+400,y+200);
            line7->setPen(QPen(color,5));
            scene->addItem(line7);

            scene->removeItem(line8);
            delete line8;
            line8 = new QGraphicsLineItem(x+340,y+200,x+320,y+200);
            line8->setPen(QPen(color,5));
            scene->addItem(line8);

            scene->removeItem(line9);
            delete line9;
            line9 = new QGraphicsLineItem(x+260,y+200,x+240,y+200);
            line9->setPen(QPen(color,5));
            scene->addItem(line9);

            scene->removeItem(line10);
            delete line10;
            line10 = new QGraphicsLineItem(x+180,y+200,x+160,y+200);
            line10->setPen(QPen(color,5));
            scene->addItem(line10);

            scene->removeItem(line11);
            delete line11;
            line11 = new QGraphicsLineItem(x+100,y+200,x+80,y+200);
            line11->setPen(QPen(color,5));
            scene->addItem(line11);

            scene->removeItem(line12);
            delete line12;
            line12 = new QGraphicsLineItem(x+20,y+200,x,y+200);
            line12->setPen(QPen(color,5));
            scene->addItem(line12);

            scene->removeItem(line13);
            delete line13;
            line13 = new QGraphicsLineItem(x,y+125,x,y+100);
            line13->setPen(QPen(color,5));
            scene->addItem(line13);

            scene->removeItem(line14);
            delete line14;
            line14 = new QGraphicsLineItem(x,y+25,x,y);
            line14->setPen(QPen(color,5));
            scene->addItem(line14);

            scene->removeItem(line15);
            delete line15;
            line15 = new QGraphicsLineItem(x+250,y+75,x+250,y+100);
            line15->setPen(QPen(color,5));
            scene->addItem(line15);

            scene->removeItem(line16);
            delete line16;
            line16 = new QGraphicsLineItem(x+250,y+175,x+250,y+200);
            line16->setPen(QPen(color,5));
            scene->addItem(line16);

            state = 0;
        break;
    }
}
