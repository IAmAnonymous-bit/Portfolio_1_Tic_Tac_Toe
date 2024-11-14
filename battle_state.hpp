#pragma once

using namespace std;

#include "board.hpp"
#include "player.hpp"
#include "game_state.hpp"

class BattleState
{
    private:
        Board *b;
        Player *p1;
        Player *p2;
        GameState *gs;
        
    public:
        BattleState(Board *b, Player *p1, Player *p2, GameState *gs);
        string cur_bat_state();

};