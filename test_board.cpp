using namespace std;

#include <iostream>
#include <cassert>
#include "board.hpp"

int main()
{
    Board b;

    b.move(1,'X');

    assert(b.get_mark(1) == 'X');
    
    b.move(2,'X');

    assert(b.get_mark(2) == 'X');
    
    b.move(3,'X');

    assert(b.get_mark(3) == 'X');
    
    b.move(4,'X');

    assert(b.get_mark(4) == 'X');

    b.move(5,'X');

    assert(b.get_mark(5) == 'X');

    b.move(6,'X');

    assert(b.get_mark(6) == 'X');

    b.move(7,'X');

    assert(b.get_mark(7) == 'X');

    b.move(8,'X');

    assert(b.get_mark(8) == 'X');

    b.move(9,'X');

    assert(b.get_mark(9) == 'X');

    b.clear();

    assert(b.get_mark(1) == '1');
    assert(b.get_mark(2) == '2');
    assert(b.get_mark(3) == '3');
    assert(b.get_mark(4) == '4');
    assert(b.get_mark(5) == '5');
    assert(b.get_mark(6) == '6');
    assert(b.get_mark(7) == '7');
    assert(b.get_mark(8) == '8');
    assert(b.get_mark(9) == '9');

    cout << "All Code Works" << endl;

    return 0;
}
