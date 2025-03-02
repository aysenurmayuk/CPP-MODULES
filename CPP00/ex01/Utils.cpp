/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:37:33 by amayuk            #+#    #+#             */
/*   Updated: 2025/02/27 14:52:53 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

std::string Utils::addBook(std::string msg)
{
    std::string input;

    while (1)
    {
        std::cout << msg;
        std::getline(std::cin, input);
        if (std::cin.eof())
            std::exit(1);
        if (input.empty())
        {
            std::cout << "Field cannot be empty" << std::endl;
            continue;
        }
        if (msg == "Enter Phone Number: ")
        {
            bool isNumeric = true;
            for (size_t i = 0; i < input.length(); i++)
            {
                if (!std::isdigit(input[i]))
                {
                    isNumeric = false;
                    break;
                }
            }

            if (!isNumeric)
            {
                std::cout << "Number must be numeric" << std::endl;
                continue;
            }
        }

        return input;
    }
}


