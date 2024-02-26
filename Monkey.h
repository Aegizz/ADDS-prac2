#include "Move.h"
#ifndef MONKEY_H
#define MONKEY_H

class Monkey: public Move{
    public:
        string getName(){
            return "Monkey";
        }
        Monkey(){

        };
        bool compareMove(Move * move){
            if (move->getName() == "Ninja" || move->getName() == "Robot"){
                return true;
            } else {
                return false;
            }
        }
};
#endif