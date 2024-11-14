using namespace std;

#include "validator.hpp"
#include <string>
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
    
    if (move <= 9 && move >= 1)
    {
        string check1 = to_string(move);
        string check2; 
        check2 += this->b->get_mark(move);
        if(check1 != check2)
        {
            return false;
        } else {
            return true;
        }
    } else {
        return false;
    } 
    
}

bool Validator::has_special(string arch)
{
    if(arch == "Pyromancer ")
    {
        return true;
    } else {
        return false;
    }
}