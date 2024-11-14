#pragma once

#include <string>
#include "board.hpp"

class Validator
{
    private:
        Board *b;
    public:
        Validator(Board *b);
        bool is_int(string input);
        bool is_valid(int move);
        bool has_special(string arch);

};