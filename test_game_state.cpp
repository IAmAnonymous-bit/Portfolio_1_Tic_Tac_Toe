using namespace std;

#include <iostream>
#include <cassert>
#include "game_state.hpp"
#include "board.hpp"

int main()
{
    Board b;

    GameState gs(&b);

    assert(gs.current_state() == "Game In Progress...");
    
    b.move(1, 'X');
    b.move(2, 'X');
    b.move(3, 'X');

    assert(gs.current_state() == "The Winner Is: Player X");
    b.clear();
    assert(gs.current_state() == "Game In Progress...");

    b.move(4, 'O');
    b.move(5, 'O');
    b.move(6, 'O');

    assert(gs.current_state() == "The Winner Is: Player O");
    b.clear();
    assert(gs.current_state() == "Game In Progress...");

    b.move(7, 'X');
    b.move(8, 'X');
    b.move(9, 'X');

    assert(gs.current_state() == "The Winner Is: Player X");
    b.clear();
    assert(gs.current_state() == "Game In Progress...");

    b.move(1, 'O');
    b.move(4, 'O');
    b.move(7, 'O');

    assert(gs.current_state() == "The Winner Is: Player O");
    b.clear();
    assert(gs.current_state() == "Game In Progress...");

    b.move(2, 'X');
    b.move(5, 'X');
    b.move(8, 'X');

    assert(gs.current_state() == "The Winner Is: Player X");
    b.clear();
    assert(gs.current_state() == "Game In Progress...");

    b.move(3, 'O');
    b.move(6, 'O');
    b.move(9, 'O');

    assert(gs.current_state() == "The Winner Is: Player O");
    b.clear();
    assert(gs.current_state() == "Game In Progress...");

    b.move(1, 'X');
    b.move(5, 'X');
    b.move(9, 'X');

    assert(gs.current_state() == "The Winner Is: Player X");
    b.clear();
    assert(gs.current_state() == "Game In Progress...");

    b.move(3, 'O');
    b.move(5, 'O');
    b.move(7, 'O');

    assert(gs.current_state() == "The Winner Is: Player O");
    b.clear();
    assert(gs.current_state() == "Game In Progress...");

    b.move(1, 'O');
    b.move(2, 'X');
    b.move(3, 'O');
    b.move(4, 'O');
    b.move(5, 'X');
    b.move(6, 'X');
    b.move(7, 'X');
    b.move(8, 'O');
    b.move(9, 'X');

    assert(gs.current_state() == "The Game Is a Tie!");


    cout << "All Code Works" << endl;
    
    return 0;
}