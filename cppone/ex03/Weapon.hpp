#include <iostream>

#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType() const;
        void setType(const std::string& t);
};