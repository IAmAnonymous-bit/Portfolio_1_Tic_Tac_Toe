using namespace std;

#include "game_state.hpp"

Game_State::Game_State(Board *board)
{
    this->board = board;
}

string Game_State::current_state()
{
    string message = "The Winner Is: Player ";
    if (board->get_mark(1) == board->get_mark(2) && board->get_mark(1) == board->get_mark(3)){
        message += board->get_mark(1);
        return message;
    } else if (board->get_mark(4) == board->get_mark(5) && board->get_mark(4) == board->get_mark(6)) {
        message += board->get_mark(4);
        return message;
    } else if (board->get_mark(7) == board->get_mark(8) && board->get_mark(7) == board->get_mark(9)) {
        message += board->get_mark(7);
        return message;
    } else if (board->get_mark(1) == board->get_mark(4) && board->get_mark(1) == board->get_mark(7)) {
        message += board->get_mark(1);
        return message;
    } else if (board->get_mark(2) == board->get_mark(5) && board->get_mark(2) == board->get_mark(8)) {
        message += board->get_mark(2);
        return message;
    } else if (board->get_mark(3) == board->get_mark(6) && board->get_mark(3) == board->get_mark(9)) {
        message += board->get_mark(3);
        return message;
    } else if (board->get_mark(1) == board->get_mark(5) && board->get_mark(1) == board->get_mark(9)) {
        message += board->get_mark(1);
        return message;
    } else if (board->get_mark(3) == board->get_mark(5) && board->get_mark(3) == board->get_mark(7)) {
        message += board->get_mark(3);
        return message;
    } else {
        return "Game In Progress...";
    }
}



