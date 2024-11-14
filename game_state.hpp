#pragma once

#include <string>
#include "board.hpp"
#include "player.hpp"

class GameState
{
    private:
        Board *b;
        Player *p1;
        Player *p2;
    
    public:
        GameState(Board *b, Player *p1, Player *p2);
        string current_state();

};