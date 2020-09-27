#include "widget.h"
#include "waveshow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
//    waveshow wave(0,0,250,250);
//    wave.setspeed(110);

//    wave.resize(250,250);
//    wave.show();
//    wave.timerstart();
    return a.exec();
}
