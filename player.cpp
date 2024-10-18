using namespace std;

#include <iostream>
#include <cctype>
#include "player.hpp"

Player::Player(Board *b, Validator *v, char mark)
{
    this->b = b;
    this->v = v;
    this->mark = mark;
}

void Player::get_move()
{
    string input;
    string prompt = "Player ";
    prompt += mark;
    prompt += ". What is your move?";
    int move;
    bool validated = false;
    while (!validated)
    {
        cout << prompt << endl;
        getline(cin, input);
        if (v->is_int(input))
        {
            move = stoi(input);
            if(v->is_valid(move))
            {
                validated = true;
            } else {
                cout << "You can't make that move" << endl;
            }
        } else {
            cout << "You can't make that move" << endl;
        }
    }
    this->b->move(move, this->mark);
}

char Player::get_mark()
{
    return this->mark;
}