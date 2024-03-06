#include "Move.h"
#ifndef ROCK_H
#define ROCK_H

class Rock: public Move{
    public:
        string getName(){
            return "Rock";
        }
        Rock(){
            wins.push_back("Scissors");
        };
};
#endif