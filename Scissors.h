#include "Move.h"

#ifndef SCISSORS_H
#define SCISSORS_H

class Scissors: public Move{
    public:
        string getName(){
            return "Scissors";
        }
        Scissors(){

        }
        bool compareMove(Move * move){
            if (move->getName() == "Paper"){
                return true;
            } else {
                return false;
            }
        }
};
#endif