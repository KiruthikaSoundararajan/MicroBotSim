#ifndef WORLD_H
#define WORLD_H

#include "Robot.h"

class World{

    int width,height;
    world(int w, int h);
    void printWorld(const Robot &robot);
}