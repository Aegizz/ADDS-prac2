#include "Move.h"
#ifndef NINJA_H
#define NINJA_H

class Ninja: public Move{
    public:
        string getName(){
            return "Ninja";
        }
        Ninja(){

        };
        bool compareMove(Move * move){
            if (move->getName() == "Pirate" || move->getName() == "Zombie"){
                return true;
            } else {
                return false;
            }
        }
};
#endif