/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <msabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:45:33 by msabir            #+#    #+#             */
/*   Updated: 2025/12/15 16:43:11 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>


int PhoneBook::i = 0;
int PhoneBook::count = 0;

 
void PhoneBook::Add()
{
    
    std::string fname;
    std::string lname;
    std::string nname;
    std::string phonen;
    std::string darksec;

    while (fname.empty())
    {
        std::cout << "First Name: ";
        std::getline(std::cin, fname);
    }
    while (lname.empty())
    {
        std::cout << "Last Name: ";
        std::getline(std::cin, lname);
    }
    while (nname.empty())
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, nname);
    }
    while (phonen.empty())
    {
        std::cout << "Phone Number: ";
        std::getline(std::cin, phonen);
    }
    while (darksec.empty())
    {
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, darksec);
    }

    contacts[i].setFirstName(fname);
    contacts[i].setLastName(lname);
    contacts[i].setNickname(nname);
    contacts[i].setPhoneNumber(phonen);
    contacts[i].setDarkestSecret(darksec);

    i = (i + 1) % 8;
    if (count < 8)
        count++;
    
}

static std::string truncate(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::Search()
{
    if (count == 0)
    {
        std::cout << "PhoneBook is empty" << std::endl;
        return;
    }

    for (int j = 0; j < count; j++)
    {
        std::cout << std::setw(10) << j << "|";
        std::cout << std::setw(10) << truncate(contacts[j].getFirstName()) << "|";
        std::cout << std::setw(10) << truncate(contacts[j].getLastName()) << "|";
        std::cout << std::setw(10) << truncate(contacts[j].getNickname()) << std::endl;
    }

    std::string input;
    std::cout << "Enter index: ";
    std::getline(std::cin, input);

    if (input.length() != 1 || input[0] < '0' || input[0] > '7')
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }

    int index = input[0] - '0';

    if (index < 0 || index >= count)
    {
        std::cout << "Index out of range" << std::endl;
        return;
    }

    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}

