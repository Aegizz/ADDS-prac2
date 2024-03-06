#include "Move.h"
#ifndef PIRATE_H
#define PIRATE_H

class Pirate: public Move{
    public:
        string getName(){
            return "Pirate";
        }
        Pirate(){
            wins.push_back("Robot");
            wins.push_back("Monkey");
        };

};
#endif