#include "Move.h"

#ifndef PAPER_H
#define PAPER_H

class Paper: public Move{
    public:
        string getName(){
            return "Paper";
        }
        Paper(){
            wins.push_back("Rock");
        }

};
#endif