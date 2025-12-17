#include "Zombie.cpp"


int main(void)
{
    Zombie* Zombies = zombieHorde(10,"Sahar");
    int i = 0;
    while (i < 10)
    {
        Zombies[i].announce();
        i++;
    }
    return 0;
}