/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <msabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:45:29 by msabir            #+#    #+#             */
/*   Updated: 2025/12/15 16:28:32 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>


int main()
{
    PhoneBook pb;
    std::string command;

    std::cout << "Available commands: ADD | SEARCH | EXIT" << std::endl;

    while (true)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);

        if (command == "ADD")
            pb.Add();
        else if (command == "SEARCH")
            pb.Search();
        else if (command == "EXIT")
            return 0;
        else
            std::cout << "Invalid command" << std::endl;
    }
}