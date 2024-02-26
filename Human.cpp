#include "Human.h"
#include "Move.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include <iostream>
#include <string>
using namespace std;


Move * Human::makeMove(){
    string moveName;
    cout << "Enter move: ";
    cin >> moveName;
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
string Human::getName(){
    return name;
}

Human::Human(string _name){
    name = _name;
}
Human::Human(){
    name = "Human";
}