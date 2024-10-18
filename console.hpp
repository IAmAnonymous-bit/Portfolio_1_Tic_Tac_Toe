#pragma once

#include <string>
#include "board.hpp"

class Console
{
    private:
        Board *board;
        string ver_sep = " | ";
        string hor_sep = " \n-----------\n ";
        string pad = " ";

    public:
        Console(Board *board);
        string display();

};