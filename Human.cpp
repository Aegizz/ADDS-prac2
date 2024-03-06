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
#include "MoveSelector.h"
using namespace std;


Move * Human::makeMove(){
    MoveSelector * sel = new MoveSelector();
    string moveName;
    cout << "Enter move: ";
    cin >> moveName;
    move = sel->selectMove(moveName);
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