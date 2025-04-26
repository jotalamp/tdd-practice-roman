#pragma once

using namespace std;

string convert(unsigned int arabic) 
{
    string roman = "I";
    if(arabic == 2) roman += "I";
    return roman;
}