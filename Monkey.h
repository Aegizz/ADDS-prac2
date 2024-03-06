#include "Move.h"
#include <algorithm>
#ifndef MONKEY_H
#define MONKEY_H

class Monkey: public Move{
    public:
        string getName(){
            return "Monkey";
        }
        Monkey(){
            wins.push_back("Ninja");
            wins.push_back("Robot");
        };

};
#endif