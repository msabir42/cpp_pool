#include "Freplace.hpp"
#include <fstream>
#include <iostream>

Freplace::Freplace(const std::string& f) : filename(f)
{
}

Freplace::~Freplace()
{
}

void Freplace::replace(const std::string s1, const std::string s2)
{
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cout << "Error: cannot open input file" << std::endl;
        return;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cout << "Error: cannot create output file\n"<< std::endl;
        return;
    }

    std::string line;
    while (std::getline(infile, line))
    {
        std::string result;
        size_t i = 0;

        while (i < line.length())
        {
            if (!s1.empty() && line.compare(i, s1.length(), s1) == 0)
            {
                result += s2;
                i += s1.length();
            }
            else
            {
                result += line[i];
                i++;
            }
        }

        outfile << result;
        if (!infile.eof())
            outfile << '\n';
    }
}
