#pragma once

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

    string convert(const unsigned int arabicValueToConvert)
    {
        unsigned int arabicValueRemaining = arabicValueToConvert;

        roman = "";

        for (unsigned int i = 0; i < numerals.size(); i++)
        {
            Numeral currentNumeral = numerals[i];

            while (arabicValueRemaining >= currentNumeral.arabic)
            {
                roman += currentNumeral.roman;
                arabicValueRemaining -= currentNumeral.arabic;
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