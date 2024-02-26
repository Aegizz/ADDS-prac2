#ifndef MOVE_H
#define MOVE_H
#include <string>
using namespace std;

class Move{
    protected:
        string name;
    public:
        virtual string getName();
        virtual bool compareMove(Move * move) = 0;
};
#endif