#pragma once

using namespace std;

string convert(unsigned int arabic) 
{
    string roman = "";
    if(arabic >= 10) 
    {
        roman = "X";
        arabic -= 10;
    }
    for(unsigned int i = 0; i < arabic; i++)
        roman += "I";
    return roman;
}