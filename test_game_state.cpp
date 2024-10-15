using namespace std;

#include <iostream>
#include <cassert>
#include "game_state.hpp"
#include "board.hpp"

int main()
{
    Board board;

    Game_State game_state(&board);

    board.move(1, 'X');
    board.move(2, 'X');
    board.move(3, 'X');

    assert(game_state.current_state() == "The Winner Is: Player X");
    board.clear();

    cout << "All Code Works Well!" << endl;
    
    return 0;
}