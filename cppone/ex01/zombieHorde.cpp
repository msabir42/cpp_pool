#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int numberofZombies = N;
    Zombie* Horde = new Zombie[numberofZombies];
    int i = 0;
    while (i < numberofZombies)
    {
        Horde[i].setZombieName(name);
        i++;
    }
    return Horde;
}