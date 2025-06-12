#include <iostream>

#include "world.h"
#include "robot.h"

int main(){
    World world(5,5);
    Robot robot(1,2);

    std::cout << "Initial Position of Robot is (" << robot.getX() << "," <<  robot.getY() << ")" << std::endl;
    world.printWorld(robot);
    robot.move(world);

    return 0;

}