#include "RomanConverter.h"

std::string RomanConverter::convert(int arabicValueToConvert)
{
    if (arabicValueToConvert < 1)
        return "";

    unsigned int arabicValueRemaining = arabicValueToConvert;

    std::string roman = "";

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