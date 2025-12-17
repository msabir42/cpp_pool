#include <iostream>

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
    Weapon&     w;
    std::string name;

public:
    HumanA(const std::string& n, Weapon& wep);
    ~HumanA();
    void attack();
};
