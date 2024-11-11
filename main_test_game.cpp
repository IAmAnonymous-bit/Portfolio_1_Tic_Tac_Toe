using namespace std;

#include <iostream>
#include "board.hpp"
#include "game_state.hpp"
#include "console.hpp"
#include "validator.hpp"
#include "player.hpp"
#include "game.hpp"

int main()
{
    Board b;
    GameState gs(&b);
    Console c(&b);
    Validator v(&b);
    Player p1(&b, &v, 'X');
    Player p2(&b, &v, 'O');
    Game game(&b, &gs, &c, &p1, &p2);

    game.start();

    return 0;
}

