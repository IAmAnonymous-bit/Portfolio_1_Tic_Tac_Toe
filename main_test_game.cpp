using namespace std;

#include <iostream>
#include "board.cpp"
#include "game_state.cpp"
#include "console.cpp"
#include "validator.cpp"
#include "player.cpp"
#include "game.cpp"

int main()
{
    Board b;
    GameState gs(&b);
    Console c(&b);
    Validator v(&b);
    Player p1(&b, &v, 'X');
    Player p2(&b, &v, 'O');
    Game game(&gs, &c, &p1, &p2);

    game.start();

    return 0;
}

