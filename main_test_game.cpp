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
    Validator v(&b);
    Player p1(&b, &v, 'X');
    Player p2(&b, &v, 'O');
    GameState gs(&b, &p1, &p2);
    Console c(&b);
    Game game(&b, &p1, &p2, &gs, &c);

    game.start();

    return 0;
}

