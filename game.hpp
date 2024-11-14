#pragma once

#include "game_state.hpp"
#include "console.hpp"
#include "player.hpp"

class Game
{
    private:
        Board *b;
        Player *p1;
        Player *p2;
        Player *curP;
        GameState *gs;
        Console *c;
        bool battle = false;

    public:
        Game(Board *b, Player *p1, Player *p2, GameState *gs, Console *c);
        void start();
    
};
