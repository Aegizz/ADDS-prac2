#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include <iostream>

int main(){
    Referee ref = Referee();
    Player * p1 = new Human("Player 1");
    Player * p2 = new Human("Player 2");

    Player * win = new Human();
    win = ref.refGame(p1,p2);
    if (win){
        std::cout << win->getName() << " wins.";
    } else {
        std::cout << "It's a Tie.";

    }
    return 1;
}