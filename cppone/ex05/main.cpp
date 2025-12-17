#include "Harl.hpp"

int main()
{
    Harl h;

    std::cout << "Testing all complaint levels:" << std::endl;
    h.complain("DEBUG");
    h.complain("INFO");
    h.complain("WARNING");
    h.complain("ERROR");

    std::cout << "\nTesting an invalid level:" << std::endl;
    h.complain("SOMETHING"); 

    return 0;
}
