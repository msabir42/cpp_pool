#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string n);   // Constructor with name
    ~Zombie();               // Destructor
    void announce() const;   // Announce function
};

#endif
