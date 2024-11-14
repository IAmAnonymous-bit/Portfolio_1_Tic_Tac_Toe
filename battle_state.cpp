using namespace std;

#include "battle_state.hpp"
#include <iostream>
#include <string>

BattleState::BattleState(Board *b, Player *p1, Player *p2, GameState *gs)
{
    this->b = b;
    this->p1 = p1;
    this->p2 = p2;
    this->gs = gs;
}

string BattleState::cur_bat_state()
{
    string message = "The Winner is: ";
    if(b->get_mark(1) == b->get_mark(3) && b->get_mark(1) == b->get_mark(7) && b->get_mark(1) == b->get_mark(9))
    {
        if (p1->get_mark() == b->get_mark(1) && p1->get_archetype() == "Swarm ")
        {
            message += "Swarm ";
            message += p1->get_mark();
            return message;
        } else if (p2->get_mark() == b->get_mark(1) && p2->get_archetype() == "Swarm ") {
            message += "Swarm ";
            message += p2->get_mark();
            return message;
        } else {
            return gs->current_state();
        }
    } else {
        return gs->current_state();
    }
}