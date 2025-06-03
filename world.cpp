#include <iostream>
#include "Robot.h"
#include "World.h"
World::world(int width,int height): width(width),height(height){

    /*if (width>50 && height>50){
        std::cout << "Sorry!! Maximum Dimension Exceeded!!!" << std::endl;
        std::cout << "Please enter the new dimensions.Do not exceed the maximum value 50: " << std::endl;
        World(std::cin >> width ,std::cin >> height);
    }*/
}

void World::printWorld(const Robot& robot){
    for(int x = 0; x<height; x++){
        for(int y=0; y<width; y++){
            if(x==robot.x && y==robot.y) std::cout<<"R";
            else std::cout << ".";
        }
    std::cout << std::endl;
    }
}
