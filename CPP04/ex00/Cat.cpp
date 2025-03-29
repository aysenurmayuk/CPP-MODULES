/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:22:31 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/20 16:19:35 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Cat.hpp"

Cat::Cat() : Animal() 
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const & cat)
{
    *this = cat;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & cat)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &cat)
    {
        this->type = cat.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meoooowww !" << std::endl;
}

