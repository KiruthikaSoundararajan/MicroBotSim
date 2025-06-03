#include <iostream>

#include<"World.h">
#include<"Robot.h">

int main(){
    World world(5,5);
    Robot robot(1,2);

    std::cout << "Robot's present position is (" << robot.x << "," <<  robot.y << ")" << std::endl;
    world.print_world(robot);

    return 0;

}