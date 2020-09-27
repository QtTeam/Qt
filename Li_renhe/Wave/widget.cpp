#include "widget.h"
#include "waveshow.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    waveshow *wave =new waveshow(0,0,250,250,this);
    wave->setspeed(110);
    wave->timerstart();
    this->resize(250,250);
   // wave.show();
}

Widget::~Widget()
{
}

