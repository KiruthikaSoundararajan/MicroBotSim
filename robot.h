#ifndef ROBOT_H
#define ROBOT_H


#include "world.h"


class Robot{
    private:

    int x,y;

    public:

    Robot(int x,int y);
    int getX() const {return x;}
    int getY() const {return y;}
    void move( World& world);

};
#endif