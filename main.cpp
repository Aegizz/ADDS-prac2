#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"


int main(){
    Referee ref = Referee();
    Player * p1 = new Human("Player 1");
    Player * p2 = new Human("Player 2");

    Player * win = new Human();
    ref.refGame(p1, p2);
    return 1;
}