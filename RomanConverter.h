#pragma once

using namespace std;

string convert(unsigned int arabic) 
{
    string roman = "";

    while(arabic >= 10) 
    {
        roman += "X";
        arabic -= 10;
    }

    while (arabic-- > 0)
        roman += "I";

    return roman;
}