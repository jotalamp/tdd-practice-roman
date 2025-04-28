#include <iostream>
#include <stdlib.h>

#include "RomanConverter.h"

int main(int argc, char **argv)
{
    RomanConverter converter;

    if (argc > 1)
    {
        long arg = strtol(argv[1], NULL, 10);
        std::cout << "\n"
                  << argv[1] << " : " << converter.convert(arg);
    }
    else
    {
        for (auto i = 1; i < 4000; i++)
        {
            unsigned int arabicNumber = i;

            std::cout << "\n"
                      << arabicNumber << " : " << converter.convert(arabicNumber);
        }
    }
    std::cout << "\n\n";
}
