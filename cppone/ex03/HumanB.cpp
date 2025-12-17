#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(const std::string& n)
    : name(n)   
{
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon* wep)
{
    w = wep;
}

void HumanB::attack()
{
    if (w)
        std::cout << name << " attacks with their " << w->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}
