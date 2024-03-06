#include "Move.h"

#ifndef PAPER_H
#define PAPER_H

class Paper: public Move{
    public:
        string getName(){
            return "Paper";
        }
        Paper(){

        }
        bool compareMove(Move * move){
            if (move->getName() == "Rock"){
                return true;
            } else {
                return false;
            }
        }

};
#endif