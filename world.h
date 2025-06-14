#ifndef WORLD_H
#define WORLD_H

#include "robot.h"

class World {
private:
    int w, h;
public:
    World(int w, int h);
    int getW() const {return w;}
    int getH() const {return h;}
    void printWorld(const Robot& robot);
};

#endif
