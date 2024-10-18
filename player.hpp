#pragma once

#include "board.hpp"
#include "validator.hpp"

class Player
{
    private:
        Board *b;
        Validator *v;
        char mark;

    public:
        Player(Board *b, Validator *v, char mark);
        void get_move();
        char get_mark();
};