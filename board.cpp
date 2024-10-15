using namespace std;

#include "board.hpp"

void Board::clear()
{
    this->moves[0][0] = '1';
    this->moves[0][1] = '2';
    this->moves[0][2] = '3';
    this->moves[1][0] = '4';
    this->moves[1][1] = '5';
    this->moves[1][2] = '6';
    this->moves[2][0] = '7';
    this->moves[2][1] = '8';
    this->moves[2][2] = '9';
}

void Board::move(int row, int col, char mark)
{
    if ((row > 0 && row < 4) && (col > 0 && col < 4))
    {
        this->moves[row-1][col-1] = mark;
    }
}

char Board::get_mark(int row, int col)
{
    return this->moves[row-1][col-1];
}