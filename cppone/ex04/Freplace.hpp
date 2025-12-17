#include <iostream>
#include <fstream>
#include <string>

class Freplace
{
    private:
        std::string filename;
    public:
        Freplace(const std::string& f) ;
        ~Freplace();
        void replace(const std::string s1, const std::string s2);
};