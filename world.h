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
   WorldManager(Robot& robot,World& world):robot(robot),world(world){}

   int getWorldWidth()  const  {return world.getW();}
   int getWorldHeight() const  {return world.getH();}
   int getRobotPosX()   const  {return robot.getX();}
   int getRobotPosY()   const  {return robot.getY();}

   void printWorld() {world.printWorld(robot);}
    

};
#endif



