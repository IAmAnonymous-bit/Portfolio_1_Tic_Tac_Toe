using namespace std;

#include <iostream>
#include <string>
#include "results.hpp"

Results::Results(Player *p1, Player *p2)
{
    this->p1 = p1;
    this->p2 = p2;
    games_played = 0;
    battles_played = 0;
    p1_wins = 0;
    p2_wins = 0;
    ties = 0;
}

void Results::add_game_played()
{
    games_played++;
}

void Results::add_battle_played()
{
    battles_played++;
}

void Results::add_win(char mark)
{
    if (mark == p1->get_mark())
    {
        p1_wins++;
    } else {
        p2_wins++;
    }
}

void Results::add_tie()
{
    ties++;
}

void Results::print_results()
{
    cout << "Final Results:" << endl;
    cout << "   Times Game was Played: " << games_played << endl;
    cout << "   Times Battle Mode was Played: " << battles_played << endl;
    cout << "   Times " << p1->get_mark() << " Won: " << p1_wins << endl;
    cout << "   Times " << p2->get_mark() << " Won: " << p2_wins << endl;
    cout << "   Times Tied: " << ties << endl;
}