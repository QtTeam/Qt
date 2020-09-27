#include "waveshow.h"
#include <QPixmap>
waveshow::waveshow(int x,int y,int width,int height,QWidget * parent )
    :QLabel(parent)
{
    timer1 = new QTimer(this);
    //label = new QLabel(this);
    _width = width;
    _height = height;
    _x = x;
    _y = y;
    connect(timer1,&QTimer::timeout,[=](){

        QPixmap pix;
        QString str = QString("../circuit_wave/wave00%1").arg(this->min++);
        pix.load(str);
        QSize pixsize(_width,_height);
        QPixmap scale_pix = pix.scaled(pixsize);

        this->setGeometry(_x,_y,scale_pix.width(),scale_pix.height());
        this->setPixmap(scale_pix);
        if(this->min>this->max)
            this ->min = 1;


            });

}

void waveshow::setspeed(int ms)
{
    msx = ms;
    timer1->setInterval(msx);


}
void waveshow ::timerstart()
{
    timer1 ->start();
}

void waveshow::timerstop()
{
    timer1->stop();
}
