#include "Move.h"
#include <algorithm>
#include <string>
std::string Move::getName(){
    return name;
}

bool Move::compareMove(Move * move){
    if (std::find(wins.begin(), wins.end(), move->getName())!=wins.end()){
        return true;
    } else {
        return false;
    }
}