#ifndef WORLD_H
#define WORLD_H

class Robot;

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
    Robot robot;
    World world;
public:
   
   int getWorldWidth() const{return world.getW();}
   int getWorldHeight() const{return world.getH();}
   int getRobotPosX() const {return robot.getX();}
   int getRobotPosY() const {return robot.getX();}
    

};
#endif


    
