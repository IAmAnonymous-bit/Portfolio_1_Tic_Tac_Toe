#pragma once

using namespace std;

#include "player.hpp"

class Results
{
    private:
        Player *p1;
        Player *p2;
        int games_played;
        int battles_played;
        int p1_wins;
        int p2_wins;
        int ties;
    public:
        Results(Player *p1, Player *p2);
        void add_game_played();
        void add_battle_played();
        void add_win(char mark);
        void add_tie();
        void print_results();
};