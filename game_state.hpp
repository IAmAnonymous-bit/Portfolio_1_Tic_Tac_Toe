#pragma once

#include <string>
#include "board.hpp"

class GameState
{
    private:
        Board *b;
    
    public:
        GameState(Board *b);
        string current_state();
};