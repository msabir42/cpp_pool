#include <iostream>
#include <string>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string* stringPTR = &s;
    std::string& stringREF  = s;


    std::cout << "Memory adress of the string" << &s << std::endl;
    std::cout << "Memory adress of the stringPTR" << &stringPTR << std::endl;
    std::cout << "Memory adress of the stringREF" << &stringREF << std::endl;

    
    std::cout << "Value of the string" << s << std::endl;
    std::cout << "Value of the stringPTR" << stringPTR << std::endl;
    std::cout << "Value of the stringREF" << stringREF << std::endl;
}