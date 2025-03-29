/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:55:13 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/17 14:55:31 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & wrongCat)
{
    *this = wrongCat;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & wrongCat)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &wrongCat)
    {
        this->type = wrongCat.type;
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}

