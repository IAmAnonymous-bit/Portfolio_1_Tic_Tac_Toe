#pragma once

#include "game_state.hpp"
#include "console.hpp"
#include "player.hpp"

class Game
{
    private:
        Board *b;
        GameState *gs;
        Console *c;
        Player *p1;
        Player *p2;
        Player *curP;

    public:
        Game(Board *b, GameState *gs, Console *c, Player *p1, Player *p2);
        void start();
    
};
