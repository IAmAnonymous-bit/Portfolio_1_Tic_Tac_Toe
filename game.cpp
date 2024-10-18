using namespace std;

#include <iostream>
#include <string>
#include "game.hpp"

Game::Game(GameState *gs, Console *c, Player *p1, Player *p2)
{
    this->gs = gs;
    this->c = c;
    this->p1 = p1;
    this->p2 = p2;
    this->curP = p1;
}

void Game::start()
{
    cout << "Welcome To TIC TAC TOE!" << endl;
    cout << endl;
    while(gs->current_state() == "Game In Progress...")
    {
        cout << c->display() << endl;
        curP->get_move();
        if (curP->get_mark() == p1->get_mark())
        {
            curP = p2;
        } else {
            curP = p1;
        }
        cout << endl;
        
    }
    cout << c->display() << endl;
    cout << gs->current_state() << endl;
}