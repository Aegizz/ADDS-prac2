#include "Move.h"
#ifndef PIRATE_H
#define PIRATE_H

class Pirate: public Move{
    public:
        string getName(){
            return "Pirate";
        }
        Pirate(){

        };
        bool compareMove(Move * move){
            if (move->getName() == "Robot" || move->getName() == "Monkey"){
                return true;
            } else {
                return false;
            }
        }
};
#endif