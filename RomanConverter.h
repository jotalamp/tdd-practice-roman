#pragma once

using namespace std;

struct ArabicToRoman
{
    unsigned int arabic;
    unsigned char roman;
};

string convert(unsigned int arabic)
{
    vector<ArabicToRoman> arabicToRoman;
    arabicToRoman.push_back({10, 'X'});
    arabicToRoman.push_back({5, 'V'});
    arabicToRoman.push_back({1, 'I'});
    string roman = "";

    for (unsigned int i=0;i<arabicToRoman.size();i++)
    {
        ArabicToRoman a = arabicToRoman[i];

        while (arabic >= a.arabic)
        {
            roman += a.roman;
            arabic -= a.arabic;
        }

        if(roman == "XIIII")
        {
            roman = "XIV";
        }

        if(roman == "VIIII")
        {
            roman = "IX";
        }

        if(roman.size()>=4 && (roman.substr(roman.size()-4)=="IIII"))
        {
            roman = roman.substr(0,roman.size()-3) + 'V';
        }
    }

    return roman;
}