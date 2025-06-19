#ifndef ROBOT_H
#define ROBOT_H

class WorldManager;


class Robot{
    private:

    int x,y,asciiDirection;
    char currentDirection;
    enum class directionVal;
    char setDirection(directionVal dir);

    public:

    Robot(int x,int y);

    int getX() const {return x;}
    int getY() const {return y;}

    char getCurrentDirection() const {return currentDirection;}
    
    void move( WorldManager& worldManager);

};
#endif