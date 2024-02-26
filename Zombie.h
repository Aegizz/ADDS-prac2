#include "Move.h"
#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie: public Move{
    public:
        string getName(){
            return "Zombie";
        }
        Zombie(){

        };
        bool compareMove(Move * move){
            if (move->getName() == "Pirate" || move->getName() == "Monkey"){
                return true;
            } else {
                return false;
            }
        }
};
#endif