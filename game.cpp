using namespace std;

#include <iostream>
#include <string>
#include <algorithm>
#include "game.hpp"

Game::Game(Board *b, Player *p1, Player *p2, GameState *gs, BattleState *bs, Console *c, Results *r)
{
    this->b = b;
    this->p1 = p1;
    this->p2 = p2;
    this->curP = p1;
    this->gs = gs;
    this->bs = bs;
    this->c = c;
    this->r = r;
}

void Game::start()
{
    cout << "Welcome To TIC TAC TOE!" << endl;
    cout << endl;
    bool cont_play = true;

    while (cont_play)
    {
        string mode;;
        bool confirm1;
        r->add_game_played();

        cout << "Would you like to play \"Regular\" or \"Battle\" mode?" << endl;
        while (!confirm1)
        {
            
            getline(cin, mode);
            cout << endl;
            string mode1;
            for (int i = 0; i < mode.length(); i++)
            {
                mode1 += tolower(mode[i]);
            }
            if (mode1 == "battle" || mode1 == "regular")
            {
                mode = mode1;
                confirm1 = true;
            } else  {
                cout << "Please enter \"Regular\" or \"Battle\" to select a mode" << endl;
            }
            
        }

        //For battle mode
        bool choice1;
        bool choice2;
        string spec_inst = "Activate this ability by entering \"Go\"";
        string swarm1 = "The Swarm:";
        string swarm2 = "   This hive mind doesn't only win with a Three in a Row";
        string swarm3 = "   It can also win if it fills all four corners of the board";
        string swarm4 = "   (Enter \"S\" to Play Swarm)";
        string pyro1 = "The Pyromancer:";
        string pyro2 = "    This powerful magic user has the ability to clear the entire board";
        string pyro3 = "    (Enter \"P\" to Play Pyromancer)";

        if(mode == "regular")
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
            cout << gs->current_state() << endl << endl;
            if (gs->current_state() == "The Game Is a Tie!")
            {
                r->add_tie();
            } else {
                r->add_win(curP->get_mark());
            }
        } else {
            r->add_battle_played();
            cout << "Welcom to Battle Mode!" << endl;
            cout << swarm1 << endl << swarm2 << endl << swarm3 << endl << swarm4 << endl;
            cout << pyro1 << endl << pyro2 << endl << spec_inst << endl << pyro3 << endl << endl;

            cout << "First Player! Pick Your Archetype!" << endl;
            while (!choice1)
            {
                string c;
                getline(cin, c);
                cout << endl;
                if (c.length() > 1)
                {
                    cout << "Warning: Please Enter a Single Character (Examples: \"A\" or \"b\")" << endl;
                } else {
                    choice1 = p1->set_archetype(c[0]);
                }
            }
            cout << endl;

            cout << "Second Player! Pick Your Archetype!" << endl;
            while (!choice2)
            {
                string c;
                getline(cin, c);
                cout << endl;
                if (c.length() > 1)
                {
                    cout << "Warning: Please Enter a Single Character (Examples: \"A\" or \"b\")" << endl;
                } else {
                    choice2 = p2->set_archetype(c[0]);
                }
            }
            cout << endl;

            while (bs->cur_bat_state() == "Game In Progress...")
            {
                cout << c->display() << endl;
                curP->get_battle_move();
                if (curP->get_mark() == p1->get_mark())
                {
                    curP = p2;
                } else {
                    curP = p1;
                }
                cout << endl;
            }
            cout << c->display() << endl;
            cout << bs->cur_bat_state() << endl << endl;
            if (bs->cur_bat_state() == "The Game Is a Tie!")
            {
                r->add_tie();
            } else {
                r->add_win(curP->get_mark());
            }
        }

        string again;
        bool confirm2;
        while(!confirm2)
        {
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
                confirm2 = true;
                again = again1;
            }
        }

        if (again == "yes")
        {
            b->clear();
            p1->reset();
            p2->reset();
            curP = p1;
            confirm1 = false;
            confirm2 = false;
            choice1 = false;
            choice2 = false;
            mode = "";
        } else {
            cont_play = false;
        }
    
    }

    r->print_results();
    cout << endl;
    cout << "Thanks For Playing!" << endl;
}