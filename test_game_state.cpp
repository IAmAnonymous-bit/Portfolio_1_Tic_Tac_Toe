using namespace std;

#include <iostream>
#include <cassert>
#include "game_state.cpp"
#include "board.cpp"

int main()
{
    Board board;

    Game_State game_state(&board);

    assert(game_state.current_state() == "Game In Progress...");
    
    board.move(1, 'X');
    board.move(2, 'X');
    board.move(3, 'X');

    assert(game_state.current_state() == "The Winner Is: Player X");
    board.clear();
    assert(game_state.current_state() == "Game In Progress...");

    board.move(4, 'O');
    board.move(5, 'O');
    board.move(6, 'O');

    assert(game_state.current_state() == "The Winner Is: Player O");
    board.clear();
    assert(game_state.current_state() == "Game In Progress...");

    board.move(7, 'X');
    board.move(8, 'X');
    board.move(9, 'X');

    assert(game_state.current_state() == "The Winner Is: Player X");
    board.clear();
    assert(game_state.current_state() == "Game In Progress...");

    board.move(1, 'O');
    board.move(4, 'O');
    board.move(7, 'O');

    assert(game_state.current_state() == "The Winner Is: Player O");
    board.clear();
    assert(game_state.current_state() == "Game In Progress...");

    board.move(2, 'X');
    board.move(5, 'X');
    board.move(8, 'X');

    assert(game_state.current_state() == "The Winner Is: Player X");
    board.clear();
    assert(game_state.current_state() == "Game In Progress...");

    board.move(3, 'O');
    board.move(6, 'O');
    board.move(9, 'O');

    assert(game_state.current_state() == "The Winner Is: Player O");
    board.clear();
    assert(game_state.current_state() == "Game In Progress...");

    board.move(1, 'X');
    board.move(5, 'X');
    board.move(9, 'X');

    assert(game_state.current_state() == "The Winner Is: Player X");
    board.clear();
    assert(game_state.current_state() == "Game In Progress...");

    board.move(3, 'O');
    board.move(5, 'O');
    board.move(7, 'O');

    assert(game_state.current_state() == "The Winner Is: Player O");
    board.clear();
    assert(game_state.current_state() == "Game In Progress...");


    cout << "All Code Works Well!" << endl;
    
    return 0;
}