/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:34:49 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/17 14:59:42 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const & dog)
{
    *this = dog;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & dog)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &dog)
    {
        this->type = dog.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Hav Hav !" << std::endl;
}