using namespace std;

#include "game_state.hpp"

Game_State::Game_State(Board *board)
{
    this->board = board;
}

string Game_State::current_state()
{
    if(board->get_mark(1,1) == board->get_mark(1,2) && board->get_mark(1,1) == board->get_mark(1,3))
    {
        return "";
    } else if (board->get_mark(2,1) == board->get_mark(2,2) && board->get_mark(2,1) == board->get_mark(2,3)) {
        return "";
    } else {
        return "Game In Progress...";
    }
}



