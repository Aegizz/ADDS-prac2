#include "Move.h"
#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie: public Move{
    public:
        string getName(){
            return "Zombie";
        }
        Zombie(){
            wins.push_back("Pirate");
            wins.push_back("Monkey");
        };

};
#endif