#include "Computer.h"
#include "Rock.h"

Move * Computer::makeMove(){
    Move * temp = new Rock();
    return temp;
}

string Computer::getName(){
    return name;
}

Computer::Computer(){
    name = "Computer";
}