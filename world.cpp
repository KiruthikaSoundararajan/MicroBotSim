#include <iostream>
#include "robot.h"
#include "world.h"

World::World(int w,int h): w(w),h(h){

    /*if (w>50 || h>50){
        std::cout << "Sorry!! Maximum Dimension Exceeded!!! \nPlease enter the new dimensions.\nDo not exceed the maximum value 50:" << std::endl;
        std::cin >> w;
        std::cin >> h;
    }*/
}

void World::printWorld(const Robot& robot){
    for(int x = 0; x<h; x++){
        for(int y=0; y<w; y++){
            if(x==robot.getX() && y==robot.getY()) std::cout<<"R";
            else std::cout << ".";
        }
    std::cout << std::endl;
    }
}
