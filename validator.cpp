using namespace std;

#include "validator.hpp"
#include <cctype>

Validator::Validator(Board *b)
{
    this->b = b;
}

bool Validator::is_int(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (!isdigit(input[i]))
        {
            return false;
        }
    }
    return true;
}

bool Validator::is_valid(int move)
{
    char test = b->get_mark(move);
    if (move > 9 && move < 1)
    {
        return false;
    } else if (test != '1' && test != '2' && test != '3' && test != '4' && test != '5' && test != '6' && test != '7' && test != '8' && test != '9') {
        return false;
    } else {
        return true;
    } 
    
}