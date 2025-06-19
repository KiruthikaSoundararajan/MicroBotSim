#include <iostream>

#include "world.h"
#include "robot.h"

int main(){
    World robWorld(5,5);
    Robot rob(1,2);
    WorldManager robWorldManager(rob,robWorld);
    std::cout << "Initial Position of Robot is (" << rob.getX() << "," <<  rob.getY() << ")" << std::endl;
    robWorld.printWorld(rob);
    rob.move(robWorldManager);
    

    return 0;

}