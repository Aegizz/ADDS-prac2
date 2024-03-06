#include "Move.h"
#ifndef NINJA_H
#define NINJA_H

class Ninja: public Move{
    public:
        string getName(){
            return "Ninja";
        }
        Ninja(){
            wins.push_back("Pirate");
            wins.push_back("Zombie");
        };

};
#endif