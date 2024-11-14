using namespace std;

#include "game_state.hpp"

GameState::GameState(Board *b, Player *p1, Player *p2)
{
    this->b = b;
    this->p1 = p1;
    this->p2 = p2;
}

string GameState::current_state()
{
    string message = "The Winner is: ";
    char check = ' ';
    if (b->get_mark(1) == b->get_mark(2) && b->get_mark(1) == b->get_mark(3)){
        check = b->get_mark(1);
    } else if (b->get_mark(4) == b->get_mark(5) && b->get_mark(4) == b->get_mark(6)) {
        check = b->get_mark(4);
    } else if (b->get_mark(7) == b->get_mark(8) && b->get_mark(7) == b->get_mark(9)) {
        check = b->get_mark(7);
    } else if (b->get_mark(1) == b->get_mark(4) && b->get_mark(1) == b->get_mark(7)) {
        check = b->get_mark(1);
    } else if (b->get_mark(2) == b->get_mark(5) && b->get_mark(2) == b->get_mark(8)) {
        check = b->get_mark(2);
    } else if (b->get_mark(3) == b->get_mark(6) && b->get_mark(3) == b->get_mark(9)) {
        check = b->get_mark(3);
    } else if (b->get_mark(1) == b->get_mark(5) && b->get_mark(1) == b->get_mark(9)) {
        check = b->get_mark(1);
    } else if (b->get_mark(3) == b->get_mark(5) && b->get_mark(3) == b->get_mark(7)) {
        check = b->get_mark(3);
    } else if (b->get_mark(1) != '1' && b->get_mark(2) != '2' && b->get_mark(3) != '3' && b->get_mark(4) != '4' && b->get_mark(5) != '5' && b->get_mark(6) != '6' && b->get_mark(7) != '7' && b->get_mark(8) != '8' && b->get_mark(9) != '9') {
        return "The Game Is a Tie!";
    } 

    if (check == ' ')
    {
        return "Game In Progress...";
    } else if (p1->get_mark() == check) {
        message += p1->get_archetype();
        message += p1->get_mark();
    } else {
        message += p2->get_archetype();
        message += p2->get_mark();
    }
    return message;
    
}




