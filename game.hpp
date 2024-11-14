#pragma once

#include "board.hpp"
#include "game_state.hpp"
#include "console.hpp"
#include "player.hpp"
#include "battle_state.hpp"

class Game
{
    private:
        Board *b;
        Player *p1;
        Player *p2;
        Player *curP;
        GameState *gs;
        BattleState *bs;
        Console *c;

    public:
        Game(Board *b, Player *p1, Player *p2, GameState *gs, BattleState *bs, Console *c);
        void start();
    
};
