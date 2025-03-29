/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:37:05 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/17 14:52:40 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & wrongAnimal)
{
    *this = wrongAnimal;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & wrongAnimal)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this != &wrongAnimal)
    {
        this->type = wrongAnimal.type;
    }
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}
