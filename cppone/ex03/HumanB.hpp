#include <iostream>

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
    Weapon* w;            
    std::string name;

public:
    HumanB(const std::string& n);
    ~HumanB();
    void attack();
    void setWeapon(Weapon* wep);
};
