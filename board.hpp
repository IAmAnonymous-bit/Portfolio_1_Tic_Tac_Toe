#pragma once

class Board
{
    private:
        char moves[9] = {'1','2','3','4','5','6','7','8','9'};

    public:
        void clear();
        void move(int cell, char mark);
        char get_mark(int cell);
};