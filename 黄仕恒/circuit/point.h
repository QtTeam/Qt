#ifndef POINT_H
#define POINT_H

#include <vector>
using namespace std;
struct p
{
    int fx,fy;
    int ex,ey;
};

class Point
{
public:
    Point();
    vector<p> vPoint;
};

#endif // POINT_H
