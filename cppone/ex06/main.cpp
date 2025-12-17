#include "Harl.hpp"
#include <iostream>

int main()
{
    Harl h;

    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR", "UNKNOWN" };

    for (int i = 0; i < 5; i++)
    {
        std::cout << "=== Testing level: " << levels[i] << " ===" << std::endl;
        h.complain(levels[i]);
        std::cout << "------------------------------" << std::endl;
    }

    return 0;
}
