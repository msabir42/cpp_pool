#include "HumanA.hpp"
HumanA::HumanA(const std::string& n,Weapon& wep): w(wep) ,name(n)
{

}
HumanA::~HumanA()
{

}
void HumanA::attack()
{
    std::cout << name << " attacks with their" << w.getType() << std::endl;
}
