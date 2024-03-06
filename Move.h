#ifndef MOVE_H
#define MOVE_H
#include <string>
#include <vector>
class Move{
    protected:
        std::string name;
        std::vector<std::string> wins;
    public:
        virtual std::string getName();
        bool compareMove(Move * move);
};
#endif