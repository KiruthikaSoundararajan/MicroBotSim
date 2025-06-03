#ifndef ROBOT_H
#define ROBOT_H


#include<iostream>

class Robot{
    public:
    int xPos,yPos;
    Robot(int xPos,int yPos);
    void move(int xUnit,int yUnit);

}