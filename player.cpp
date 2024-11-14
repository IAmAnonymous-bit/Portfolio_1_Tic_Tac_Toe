using namespace std;

#include <iostream>
#include <cctype>
#include <algorithm>
#include "player.hpp"

Player::Player(Board *b, Validator *v, char mark)
{
    this->b = b;
    this->v = v;
    this->mark = mark;
}

void Player::get_move()
{
    int move;
    bool validated = false;
    while (!validated)
    {
        string input;
        string prompt = archetype;
        prompt += mark;
        prompt += ". What is your move?";
        cout << prompt << endl;
        getline(cin, input);

        if (input.length() < 1) {
            cout << "Please enter an number from 1-9 to make your move" << endl << endl;
        } else if (v->is_int(input)) {
            move = stoi(input);
            if(v->is_valid(move))
            {
                validated = true;
            } else {
                cout << "You can't make that move" << endl << endl;
            }
        } else {
            cout << "You can't make that move" << endl << endl;
        }
    }
    b->move(move, mark);
}

char Player::get_mark()
{
    return mark;
}

bool Player::set_archetype(char entry)
{
    entry = tolower(entry);

    if(entry == 's')
    {
        archetype = "Swarm ";
        cout << "Player " << mark << " Has Chose Swarm!" << endl;
        return true;
    } else if (entry == 'p') {
        archetype = "Pyromancer ";
        cout << "Player " << mark << " Has Chose Pyromancer!" << endl;
        return true;
    } else {
        cout << "Archetype Does Not Exist" << endl;
        return false;
    }

}

string Player::get_archetype()
{
    return archetype;
}

void Player::change_special()
{
    used_special = true;
}

bool Player::get_special()
{
    return used_special;
}

void Player::reset()
{
    archetype = "Player";
    used_special = false;
}

void Player::get_battle_move()
{
    int move;
    bool normal_val = false;
    bool battle_val = false;
    while (!normal_val && !battle_val)
    {
        string input;
        string prompt = archetype;
        prompt += mark;
        prompt += "! Make Your Move! ";
        if(v->has_special(archetype))
        {
            prompt += "(Enter \"Go\" to Use Your Special Move)";
        }
        cout << prompt << endl;
        getline(cin, input);

        string lower;
        for (int i = 0; i < input.size(); i++)
        {
            lower += tolower(input[i]);
        }

        if (lower.length() < 1) {
            cout << "Enter an Number From 1-9 or Use Your Special Move!" << endl << endl;
        } else if (lower == "go") {
            if (v->has_special(archetype))
            {
                battle_val = true;
            } else {
                cout << "Your Archetype Can't Use Special Moves!" << endl << endl;
            }
        } else if (v->is_int(input)) {
            move = stoi(input);
            if(v->is_valid(move))
            {
                normal_val = true;
            } else {
                cout << "You Can't Make That Move!" << endl << endl;
            }
        } else {
            cout << "You Can't Make That Move!" << endl << endl;
        }
    }
    
    if (normal_val)
    {
        b->move(move, mark);
    } else {
        if (archetype == "Pyromancer ")
        {
            cout << endl << "KABOOM!!!" << endl;
            b->clear();
        }
    }
    
}