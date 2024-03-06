#ifndef MOVESELECTOR_H
#define MOVESELECTOR_H
#include "Move.h"
#include <map>
#include <string>
#include <cstring>
class MoveSelector{
    public:
        MoveSelector(){
        }
        Move * selectMove(std::string moveName){
            Move * move;
            if (moveName == "Rock"){
                move = new Rock();
            } else if (moveName == "Scissors"){
                move = new Scissors();
            } else if (moveName == "Paper"){
                move = new Paper();
            } else if (moveName == "Monkey"){
                move = new Monkey();
            } else if (moveName == "Robot"){
                move = new Robot();
            } else if (moveName == "Pirate"){
                move = new Pirate();
            } else if (moveName == "Ninja"){
                move = new Ninja();
            } else if (moveName == "Zombie"){
                move = new Zombie();
            }
            return move;
        }
};

#endif