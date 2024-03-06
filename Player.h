
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Move.h"

using namespace std;
class Player{
    protected:
        string name;
        Move * move;
    public:
        virtual Move * makeMove();
        virtual string getName();
};
#endif
