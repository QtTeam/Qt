#ifndef WAVESHOW_H
#define WAVESHOW_H

#include <QLabel>
#include <QTimer>
#include <QWidget>
#include <QLabel>
class waveshow :public QLabel
{


public:
    waveshow(int x,int y,int width,int height,QWidget * parent = nullptr);

    void setspeed(int ms);
    void timerstart();
    void timerstop();

private:
    int msx;
    int _width;
    int _height;
    int _x;
    int _y;
    int min =1;
    int max = 8;
    QTimer * timer1;
    //QLabel * label;

};

#endif // WAVESHOW_H
