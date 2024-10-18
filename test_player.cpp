using namespace std;

#include <iostream>
#include <string>
#include "player.cpp"
#include "board.cpp"
#include "validator.cpp"

int main()
{
    Board b;
    Validator v(&b);
    char mark = 'X';
    Player p(&b, &v, mark);

    cout << p.get_mark() << endl;

    p.get_move();

    return 0;
}