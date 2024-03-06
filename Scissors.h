#include "Move.h"

#ifndef SCISSORS_H
#define SCISSORS_H

class Scissors: public Move{
    public:
        string getName(){
            return "Scissors";
        }
        Scissors(){
            wins.push_back("Paper");
        }

};
#endif