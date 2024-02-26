#include "Move.h"
#ifndef ROCK_H
#define ROCK_H

class Rock: public Move{
    public:
        string getName(){
            return "Rock";
        }
        Rock(){

        };
        bool compareMove(Move * move){
            if (move->getName() == "Scissors"){
                return true;
            } else {
                return false;
            }
        }
};
#endif