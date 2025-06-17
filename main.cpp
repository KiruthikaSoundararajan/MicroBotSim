#include <iostream>

#include "world.h"
#include "robot.h"

int main(){
    World world(5,5);
    Robot rob(1,2);
    WorldManager robWorldManager();
    std::cout << "Initial Position of Robot is (" << rob.getX() << "," <<  rob.getY() << ")" << std::endl;
    world.printWorld(rob);
    rob.move(world);
    

    return 0;

}