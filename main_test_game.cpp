using namespace std;

#include <iostream>
#include "board.hpp"
#include "game_state.hpp"
#include "battle_state.hpp"
#include "console.hpp"
#include "validator.hpp"
#include "player.hpp"
#include "results.hpp"
#include "game.hpp"

int main()
{
    Board b;
    Validator v(&b);
    Player p1(&b, &v, 'X');
    Player p2(&b, &v, 'O');
    GameState gs(&b, &p1, &p2);
    BattleState bs(&b, &p1, &p2, &gs);
    Console c(&b);
    Results r(&p1, &p2);

    Game game(&b, &p1, &p2, &gs, &bs, &c, &r);

    game.start();

    return 0;
}

