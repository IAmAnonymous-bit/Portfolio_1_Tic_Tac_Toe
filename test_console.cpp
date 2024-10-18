using namespace std;

#include <iostream>
#include <cassert>
#include "board.hpp"
#include "console.hpp"

int main()
{
    Board b;
    Console c(&b);

    assert(c.display() == " 1 | 2 | 3 \n-----------\n 4 | 5 | 6 \n-----------\n 7 | 8 | 9 \n");

    b.move(1, 'X');

    assert(c.display() == " X | 2 | 3 \n-----------\n 4 | 5 | 6 \n-----------\n 7 | 8 | 9 \n");

    b.move(5, 'O');

    assert(c.display() == " X | 2 | 3 \n-----------\n 4 | O | 6 \n-----------\n 7 | 8 | 9 \n");

    b.move(9, 'X');

    assert(c.display() == " X | 2 | 3 \n-----------\n 4 | O | 6 \n-----------\n 7 | 8 | X \n");

    cout << "All Code Works" << endl;

    return 0;
}