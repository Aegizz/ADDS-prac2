#include "Move.h"
#ifndef ROBOT_H
#define ROBOT_H

class Robot: public Move{
    public:
        string getName(){
            return "Robot";
        }
        Robot(){
            wins.push_back("Ninja");
            wins.push_back("Zombie");
        };

};
#endif