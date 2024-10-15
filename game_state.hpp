#pragma once

using namespace std;

#include <string>
#include "board.hpp"

class Game_State
{
    private:
    Board *board;
    
    public:
    Game_State(Board *board);
    string current_state();
};