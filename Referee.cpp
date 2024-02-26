#include "Referee.h"
#include "Player.h"
#include "Move.h"
#include <iostream>
using namespace std;
Player * Referee::refGame(Player * player1, Player * player2){
    Move * move1 = NULL;
    Move * move2 = NULL;
    if (player1){
        move1 = player1->makeMove();
    }
    if (player2){
        move2 = player2->makeMove();
    }
    if (move1->getName() == move2->getName()){
        cout << "It's a Tie.";
        return NULL;
    }
    if (move1->compareMove(move2)){
        cout << player1->getName() << " wins.";
        return player1;
    } else {
        cout << player2->getName() << " wins.";

        return player2;
    }

};
Referee::Referee(){

};