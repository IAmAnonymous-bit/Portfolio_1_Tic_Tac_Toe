using namespace std;

#include <string>
#include "console.hpp"

Console::Console(Board *board)
{
    this->board = board;
}

string Console::display()
{
    string output = "";
    output += pad;
    output += board->get_mark(1);
    output += ver_sep;
    output += board->get_mark(2);
    output += ver_sep;
    output += board->get_mark(3);
    output += hor_sep;
    output += board->get_mark(4);
    output += ver_sep;
    output += board->get_mark(5);
    output += ver_sep;
    output += board->get_mark(6);
    output += hor_sep;
    output += board->get_mark(7);
    output += ver_sep;
    output += board->get_mark(8);
    output += ver_sep;
    output += board->get_mark(9);
    output += pad;
    output += "\n";

    return output;

}