using namespace std;

#include <iostream>
#include <cassert>
#include <string>
#include "board.hpp"
#include "validator.hpp"
#include "player.hpp"
#include "game_state.hpp"
#include "console.hpp"
#include "battle_state.hpp"

int main()
{
    Board b;
    Validator v(&b);
    Player pyromancer(&b, &v, 'X');
    Player swarm(&b, &v, 'O');
    GameState gs(&b, &pyromancer, &swarm);
    Console c(&b);
    BattleState bs(&b, &pyromancer, &swarm, &gs);

    bool first = swarm.set_archetype('x');
    assert(first == false);

    bool second = swarm.set_archetype('s');
    assert(second == true);

    bool third = pyromancer.set_archetype('P');
    assert(third == true);

    b.move(1, 'O');
    b.move(3, 'O');
    b.move(7, 'O');
    b.move(9, 'O');

    assert(bs.cur_bat_state() == "The Winner is: Swarm O");
    
    b.clear();

    b.move(1, 'X');
    b.move(3, 'X');
    b.move(7, 'X');
    b.move(9, 'X');

    assert(bs.cur_bat_state() == "Game In Progress...");
   
    cout << c.display() << endl;
    pyromancer.get_battle_move();
    cout << c.display() << endl;
    swarm.get_battle_move();

    cout << "Battle is Ready" << endl;
}