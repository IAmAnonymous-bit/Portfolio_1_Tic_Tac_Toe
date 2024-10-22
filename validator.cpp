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
    
    if (move > 9 && move < 1)
    {
        return false;
    } else {
        return true;
    } 
    
}