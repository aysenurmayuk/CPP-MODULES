/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:31:48 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/21 16:25:15 by amayuk           ###   ########.fr       */
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

Animal::Animal(const Animal &animal) 
{
    *this = animal;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal) 
{
    if (this != &animal) {
        this->type = animal.type;
    }
    std::cout << "Animal assignation operator called" << std::endl;
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