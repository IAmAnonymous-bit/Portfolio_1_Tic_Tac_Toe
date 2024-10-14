#include "board.hpp"

using namespace std;

void Board::move(int row, int col, char mark)
{
    this->moves[row-1][col-1] = mark;
}

char Board::get_mark(int row, int col)
{
    return this->moves[row-1][col-1];
}