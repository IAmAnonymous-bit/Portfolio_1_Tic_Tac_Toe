#pragma once

#include <string>
#include "board.hpp"
#include "validator.hpp"

class Player
{
    private:
        Board *b;
        Validator *v;
        char mark;
        string archetype = "Player ";
        bool used_special;

    public:
        Player(Board *b, Validator *v, char mark);
        void get_move();
        char get_mark();
        bool set_archetype(char entry);
        string get_archetype();
        void change_special();
        bool get_special();
        void reset();
        void get_battle_move();
};