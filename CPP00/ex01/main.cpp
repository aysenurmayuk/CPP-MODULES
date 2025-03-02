/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:37:23 by amayuk            #+#    #+#             */
/*   Updated: 2025/02/22 15:46:14 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string cmd;
    PhoneBook phoneBook;

    while (1)
    {
        std::cout << "Commands: ADD, SEARCH, EXIT" << std::endl;
        std::cout << "Enter a command: ";
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            std::exit(1);     
        if (cmd == "ADD")
            phoneBook.addContact();
        else if (cmd == "SEARCH")
            phoneBook.searchContact();
        else if (cmd == "EXIT")
            phoneBook.exit();
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return 0;
}
