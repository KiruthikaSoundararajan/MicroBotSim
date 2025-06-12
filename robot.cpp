#include "robot.h"
#include "world.h"
#include <iostream>

Robot::Robot(int x,int y):x(x),y(y){}

void Robot::move(World& world){

  while(true){
    char direction;
    int temp=0;

    std::cout <<"Hey!! Where should the robot go?? Tell us using keys!!\n"<< "For up->w, down->s, a->left ,d->right" << "\n"
              << "Or if you feel bored quit using 'q'" << std::endl;
    std::cin >> direction;

    switch(direction){
        case 'w':{
            temp=x;
            temp--;
            if(temp<0) std::cout << "Oh no!! Robot exited the world. Returning to previous position" << std::endl;
            else x=temp;
        }

        case 's':{
            temp=x;
            temp++;
            if(temp>world.getH()) std::cout << "Oh no!! Robot exited the world. Returning to previous position" << std::endl;
            else x=temp;
        }

         case 'a':{
            temp=y;
            temp--;
            if(temp<0) std::cout << "Oh no!! Robot exited the world. Returning to previous position" << std::endl;
            else y=temp;
        }

        case 'd':{
            temp=y;
            temp++;
            if(temp>world.getW()) std::cout << "Oh no!! Robot exited the world. Returning to previous position" << std::endl;
            else y=temp;
        }
        case 'q': return;

        default:{
            std::cout << "Robot does not understand your command!!\nDid you press the wrong key??\nRemember up->w, down->s, a->left ,d->right and 'q'is quit \n" << std::endl;
        }
    }
    std::cout << "Robot's current position: " << x << "," << y << std::endl;
}
}