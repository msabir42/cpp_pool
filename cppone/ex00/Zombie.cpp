#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string n)
{
    name = n;  
    std::cout << "Zombie " << name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " deleted" << std::endl;
}

void Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


