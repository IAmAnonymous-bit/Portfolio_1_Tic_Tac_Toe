using namespace std;

#include "game_state.hpp"

GameState::GameState(Board *b)
{
    this->b = b;
}

string GameState::current_state()
{
    string message = "The Winner Is: Player ";
    if (b->get_mark(1) == b->get_mark(2) && b->get_mark(1) == b->get_mark(3)){
        message += b->get_mark(1);
        return message;
    } else if (b->get_mark(4) == b->get_mark(5) && b->get_mark(4) == b->get_mark(6)) {
        message += b->get_mark(4);
        return message;
    } else if (b->get_mark(7) == b->get_mark(8) && b->get_mark(7) == b->get_mark(9)) {
        message += b->get_mark(7);
        return message;
    } else if (b->get_mark(1) == b->get_mark(4) && b->get_mark(1) == b->get_mark(7)) {
        message += b->get_mark(1);
        return message;
    } else if (b->get_mark(2) == b->get_mark(5) && b->get_mark(2) == b->get_mark(8)) {
        message += b->get_mark(2);
        return message;
    } else if (b->get_mark(3) == b->get_mark(6) && b->get_mark(3) == b->get_mark(9)) {
        message += b->get_mark(3);
        return message;
    } else if (b->get_mark(1) == b->get_mark(5) && b->get_mark(1) == b->get_mark(9)) {
        message += b->get_mark(1);
        return message;
    } else if (b->get_mark(3) == b->get_mark(5) && b->get_mark(3) == b->get_mark(7)) {
        message += b->get_mark(3);
        return message;
    } else if (b->get_mark(1) != '1' && b->get_mark(2) != '2' && b->get_mark(3) != '3' && b->get_mark(4) != '4' && b->get_mark(5) != '5' && b->get_mark(6) != '6' && b->get_mark(7) != '7' && b->get_mark(8) != '8' && b->get_mark(9) != '9') {
        return "The Game Is a Tie!";
    } else {
        return "Game In Progress...";
    }
}



