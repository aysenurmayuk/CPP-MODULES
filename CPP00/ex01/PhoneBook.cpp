/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:37:27 by amayuk            #+#    #+#             */
/*   Updated: 2025/02/27 15:24:34 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact()
{
    static int index = 0;  
    static int totalContacts = 0;
    int currentIndex = index % 8;  

    contacts[currentIndex].setFirstName(Utils::addBook("Enter First Name: "));
    contacts[currentIndex].setLastName(Utils::addBook("Enter Last Name: "));
    contacts[currentIndex].setNickname(Utils::addBook("Enter Nickname: "));
    contacts[currentIndex].setPhoneNumber(Utils::addBook("Enter Phone Number: "));
    contacts[currentIndex].setDarkestSecret(Utils::addBook("Enter Darkest Secret: "));

    std::cout << "Contact added successfully!" << std::endl;
    index++;  
    if (index == 8)  
        index = 0;
    if (totalContacts < 8)
        totalContacts++;
}


void PhoneBook::exit()
{
    std::cout << "Exiting PhoneBook..." << std::endl;
    std::exit(0);
}

std::string PhoneBook::formatText(std::string text)
{
    if (text.length() > 10)
        return text.substr(0, 9) + ".";
    return text;
}

void PhoneBook::checkIndex()
{
    std::string cmd;
    
    std::cout << "Enter contact index to view details: ";
    while (1) 
    {
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            std::exit(1); 
        if (cmd.empty())
        {
            std::cout << "Field cannot be empty" << std::endl;
            continue;
        }
        if (cmd.length() == 1 && std::isdigit(cmd[0])) 
        {
            int index = atoi(cmd.c_str());
            if (index >= 0 && index < 8 && !contacts[index].getFirstName().empty()) 
            {
                std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
                std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
                std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
                std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
                std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
                return;
            }
        }
        std::cout << "Invalid index! Please enter a valid index: ";
    }
}


void PhoneBook::searchContact()
{
    if (contacts[0].getFirstName().empty())
    {
        std::cout << "Phonebook is empty. Add contacts first!" << std::endl;
        return;
    }

    std::cout << std::setw(10) << std::right << "Index" << "|"
              << std::setw(10) << std::right << "First Name" << "|"
              << std::setw(10) << std::right << "Last Name" << "|"
              << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout << std::string(43, '-') << std::endl; 

    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].getFirstName().empty())
            break;

        std::cout << std::setw(10) << std::right << i << "|"
                  << std::setw(10) << std::right << formatText(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << std::right << formatText(contacts[i].getLastName()) << "|"
                  << std::setw(10) << std::right << formatText(contacts[i].getNickname()) << std::endl;
    }

    checkIndex(); 
}
