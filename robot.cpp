#include "robot.h"
#include "world.h"

#include <iostream>
#include <cctype>

Robot::Robot(int x,int y):x(x),y(y){}


enum class Robot::directionVal{ 
    NORTH = '^',
    SOUTH = 'v',
    EAST  = '>',
    WEST  = '<',

};



char Robot::setDirection(directionVal dir){
    return static_cast<char>(dir);
}


void Robot::move(WorldManager& worldManager){

  while(true){

    char directionInput,currentDirection;
    int temp=0;


    std::cout <<"Hey!! Where should the robot go?? Tell us using keys!!\n"<< "For up->w, down->s, a->left ,d->right" << "\n"
              << "Or if you feel bored quit using 'q'" << std::endl;
    std::cin >> directionInput;
    directionInput = std::tolower(directionInput);


    switch(directionInput){
        case 'w':{
            temp=x;
            temp--;
            if(temp<0){ std::cout << "Oh no!! Robot exited the world. Returning to previous position!!" << std::endl; temp++;}
            x=temp;
            currentDirection = setDirection(Robot::directionVal::NORTH);
            //std::cout << "temp: " <<temp<<std::endl;
            break;
        }

        case 's':{
            temp=x;
            temp++;
            if(temp==worldManager.getWorldHeight() || temp>worldManager.getWorldHeight()){ std::cout << "Oh no!! Robot exited the world. Returning to previous position!!" << std::endl; temp--;}
            x=temp;
            currentDirection = setDirection(Robot::directionVal::SOUTH);
            //std::cout << "temp: " <<temp<<std::endl;
            break;
        }

         case 'a':{
            temp=y;
            temp--;
            if(temp<0){ std::cout << "Oh no!! Robot exited the world. Returning to previous position!!" << std::endl; temp++;}
            y=temp;
            currentDirection = setDirection(Robot::directionVal::WEST);
            //std::cout << "temp: " <<temp<<std::endl;
            break;
        }

        case 'd':{
            temp=y;
            temp++;
            if(temp == worldManager.getWorldWidth()|| temp>worldManager.getWorldWidth()){ std::cout << "Oh no!! Robot exited the world. Returning to previous position!!" << std::endl; temp--;}
            y=temp;
            currentDirection = setDirection(Robot::directionVal::EAST);
            //std::cout << "temp: " <<temp<<"World Width: "<<worldManager.getWorldWidth()<<std::endl;
            break;

        }

        case 'q': return;

        default:
        {
            std::cout << "Robot does not understand your command!!\nDid you press the wrong key??\nRemember up->w, down->s, a->left ,d->right and 'q'is quit \n" << std::endl;
            break;
        }
    }
    std::cout << "Robot's current position: " << x << "," << y << std::endl;
    worldManager.printWorld();
  }

}
//case sensitivity
//also robot goes back to (0,world edge) in the previous position which may not be optimal.so can return back to 2 sreps to move again???