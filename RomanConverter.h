#pragma once

#include <vector>

using std::string;

class RomanConverter
{
public:
    RomanConverter()
    {
        numerals.push_back({1000, "M"});
        numerals.push_back({900, "CM"});
        numerals.push_back({500, "D"});
        numerals.push_back({400, "CD"});
        numerals.push_back({100, "C"});
        numerals.push_back({90, "XC"});
        numerals.push_back({50, "L"});
        numerals.push_back({40, "XL"});
        numerals.push_back({10, "X"});
        numerals.push_back({9, "IX"});
        numerals.push_back({5, "V"});
        numerals.push_back({4, "IV"});
        numerals.push_back({1, "I"});
    }

    string convert(unsigned int arabicValueToConvert)
    {
        unsigned int arabicValueRemaining = arabicValueToConvert;

        roman = "";

        for (auto numeral : numerals)
        {
            while (arabicValueRemaining >= numeral.arabic)
            {
                roman += numeral.roman;
                arabicValueRemaining -= numeral.arabic;
            }
        }

        return roman;
    }

private:
    struct Numeral
    {
        unsigned int arabic;
        string roman;
    };

    std::vector<Numeral> numerals;
    string roman;
};