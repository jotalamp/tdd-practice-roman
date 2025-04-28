#pragma once

#include <regex>

using namespace std;

struct ArabicToRoman
{
    unsigned int arabic;
    char roman;
};

bool containsFourLettersInSequenceAtEnd(string &word, char letter)
{
    if (word.length() < 4)
        return false;

    string fourCurrentRomanNumerals = std::string(4, letter);

    if (word.substr(word.size() - 4) == fourCurrentRomanNumerals)
        return true;

    return false;
}

string fiveLastCharactersRemoved(const string &word)
{
    if (word.length() < 5)
        return "";

    return word.substr(0, word.size() - 5);
}

char previousLetterBeforeFourLastLetters(string &word)
{
    try
    {
        return word[word.length() - 5];
    }
    catch (const std::exception &e)
    {
        std::cerr << "String too short: " << e.what() << '\n';
        return ' ';
    }
}

string convert(const unsigned int arabicValueToConvert)
{
    unsigned int arabicValueRemaining = arabicValueToConvert;

    vector<ArabicToRoman> arabicToRoman;
    arabicToRoman.push_back({1000, 'M'});
    arabicToRoman.push_back({500, 'D'});
    arabicToRoman.push_back({100, 'C'});
    arabicToRoman.push_back({50, 'L'});
    arabicToRoman.push_back({10, 'X'});
    arabicToRoman.push_back({5, 'V'});
    arabicToRoman.push_back({1, 'I'});
    string roman = "";

    for (unsigned int i = 0; i < arabicToRoman.size(); i++)
    {
        ArabicToRoman currentNumeral = arabicToRoman[i];

        while (arabicValueRemaining >= currentNumeral.arabic)
        {
            roman += currentNumeral.roman;
            arabicValueRemaining -= currentNumeral.arabic;
        }

        if (containsFourLettersInSequenceAtEnd(roman, currentNumeral.roman))
        {
            char nextBiggerLetter = arabicToRoman[i - 1].roman;

            if (roman.size() > 4)
            {
                string romanFiveLastCharacterRemoved = fiveLastCharactersRemoved(roman);
                char previousLetterInRoman = previousLetterBeforeFourLastLetters(roman);

                if (previousLetterInRoman == nextBiggerLetter)
                {
                    roman = romanFiveLastCharacterRemoved + string{currentNumeral.roman} + string{arabicToRoman[i - 2].roman};
                }
                else
                {
                    roman = romanFiveLastCharacterRemoved + string{arabicToRoman[i - 2].roman} + string{currentNumeral.roman} + string{arabicToRoman[i - 1].roman};
                }

            }
            else
            {
                roman = string{currentNumeral.roman} + string{nextBiggerLetter};
            }
        }
    }

    return roman;
}