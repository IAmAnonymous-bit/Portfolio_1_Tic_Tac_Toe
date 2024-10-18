using namespace std;

#include <iostream>
#include <cassert>
#include "board.hpp"
#include "validator.hpp"

int main()
{
    Board b;
    Validator v(&b);

    b.move(1, 'X');

    assert(v.is_int("10") == true);
    assert(v.is_int("Not a int") == false);
    assert(v.is_int("10 still not") == false);

    assert(v.is_valid(1) == false);
    assert(v.is_valid(2) == true);
    assert(v.is_valid(10) == false);
    assert(v.is_valid(0) == false);

    cout << "All Code Works" << endl;
    
    return 0;
}