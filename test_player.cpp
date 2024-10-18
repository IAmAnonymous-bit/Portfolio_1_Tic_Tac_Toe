using namespace std;

#include <iostream>
#include <string>
#include "player.hpp"
#include "board.hpp"
#include "validator.hpp"

int main()
{
    Board b;
    Validator v(&b);
    char mark = 'X';
    Player p(&b, &v, mark);

    cout << p.get_mark() << endl;

    p.get_move();
    p.get_move();

    return 0;
}