#pragma once

using namespace std;

string convert(unsigned int arabic) 
{
    string roman = "";
    for(unsigned int i = 0; i < arabic; i++)
        roman += "I";
    return roman;
}