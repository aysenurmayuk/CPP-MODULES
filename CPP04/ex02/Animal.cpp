/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:31:48 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/17 01:33:19 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const & animal)
{
    *this = animal;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & animal)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &animal)
    {
        this->type = animal.type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}