/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <msabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:45:39 by msabir            #+#    #+#             */
/*   Updated: 2025/12/15 13:05:19 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)  
        {
            char c = argv[i][j];
            std::cout << (char)std::toupper(c);
        }
    }
    std::cout << std::endl;
    return 0;
}