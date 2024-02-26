#include "Player.h"
#include "Move.h"
#ifndef HUMAN_H
#define HUMAN_H


class Human: public Player{
    protected:
    public:
        Human();
        Human(string name);
        virtual Move * makeMove();
        virtual string getName();

};
#endif