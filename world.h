#ifndef WORLD_H
#define WORLD_H

#include "robot.h"

class World{
    
    private:

    int w,h;
        
    public:
    World(int w, int h);

    int getH() const { return h;}
    int getW() const { return w;}

    void printWorld(const Robot& robot);
};

class WorldManager{
private:
    Robot& robot;
    World& world;
public:
   
   int getWorldWidth(World& world) const{return world.getW();}
   int getWorldHeight(World& world) const{return world.getH();}
   int getRobotPosX(Robot& robot) const {return robot.getX();}
   int getRobotPosY(Robot& robot) const {return robot.getX();}
    

};
#endif



