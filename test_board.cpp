#include <iostream>
#include <cassert>
#include "board.cpp"

using namespace std;

int main()
{
    Board b;

    b.move(1,1,'X');

    assert(b.get_mark(1,1) == 'X');

    cout << "All Code Works" << endl;

    return 0;
}
