#include "Move.h"
#ifndef ROBOT_H
#define ROBOT_H

class Robot: public Move{
    public:
        string getName(){
            return "Robot";
        }
        Robot(){

        };
        bool compareMove(Move * move){
            if (move->getName() == "Zombie" || move->getName() == "Ninja"){
                return true;
            } else {
                return false;
            }
        }
};
#endif