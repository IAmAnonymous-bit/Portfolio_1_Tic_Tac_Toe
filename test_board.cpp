using namespace std;

#include <iostream>
#include <cassert>
#include "board.cpp"

int main()
{
    Board b;

    b.move(1,1,'X');

    assert(b.get_mark(1,1) == 'X');

    b.move(2,2,'O');

    assert(b.get_mark(2,2) == 'O');

    b.move(3,3,'X');

    assert(b.get_mark(3,3) == 'X');

    b.clear();

    assert(b.get_mark(1,1) == '1');
    assert(b.get_mark(2,2) == '2');
    assert(b.get_mark(3,3) == '3');

    cout << "All Code Works" << endl;

    return 0;
}
