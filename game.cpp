using namespace std;

#include <iostream>
#include <string>
#include <algorithm>
#include "game.hpp"

Game::Game(Board *b, Player *p1, Player *p2, GameState *gs, Console *c)
{
    this->b = b;
    this->p1 = p1;
    this->p2 = p2;
    this->curP = p1;
    this->gs = gs;
    this->c = c;
}

void Game::start()
{
    cout << "Welcome To TIC TAC TOE!" << endl;
    cout << endl;
    bool cont_play = true;

    while (cont_play)
    {
        if(!battle)
        {
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

        string again;
        bool confirm;
        while(!confirm)
        {
            string again;
            cout << "Play Again? : (Yes/No)" << endl;
            getline(cin, again);
            cout << endl;
            string again1;
            for (int i = 0; i < again.length(); i++)
            {
                again1 += tolower(again[i]);
            }
            if (again1 != "yes" && again1 != "no")
            {
                cout << "Invalid Response!" << endl;
            } else {
                confirm = true;
                again = again1;
            }
        }

        if (again == "yes")
        {
            b->clear();
            curP = p1;
            confirm = false;
            battle = false;
        } else {
            cont_play = false;
        }
    
    }

    cout << "Thanks For Playing!" << endl;
}