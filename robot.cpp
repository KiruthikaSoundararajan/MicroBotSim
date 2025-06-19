#include "robot.h"
#include "world.h"

#include <iostream>
#include <cctype>

Robot::Robot(int x,int y):x(x),y(y){}

void Robot::move(WorldManager& worldManager){

  while(true){
    char direction;
    int temp=0;

    std::cout <<"Hey!! Where should the robot go?? Tell us using keys!!\n"<< "For up->w, down->s, a->left ,d->right" << "\n"
              << "Or if you feel bored quit using 'q'" << std::endl;
    std::cin >> direction;
    direction = std::tolower(direction);

    switch(direction){
        case 'w':{
            temp=x;
            temp--;
            if(temp<0){ std::cout << "Oh no!! Robot exited the world. Returning to previous position!!" << std::endl; temp++;}
            x=temp;
            break;
        }

        case 's':{
            temp=x;
            temp++;
            if(temp>worldManager.getWorldHeight()){ std::cout << "Oh no!! Robot exited the world. Returning to previous position!!" << std::endl; temp--;}
            x=temp;
            break;
        }

         case 'a':{
            temp=y;
            temp--;
            if(temp<0){ std::cout << "Oh no!! Robot exited the world. Returning to previous position!!" << std::endl; temp++;}
            else y=temp;
            break;
        }

        case 'd':{
            temp=y;
            temp++;
            if(temp>worldManager.getWorldWidth()){ std::cout << "Oh no!! Robot exited the world. Moving two steps back!!" << std::endl; temp--;}
            else y=temp;
            break;
        }
        case 'q': return;

        default:{
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