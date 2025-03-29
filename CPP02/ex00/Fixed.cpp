/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:06:08 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/15 14:30:43 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    this->fixedPoint = fixed.fixedPoint;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->fixedPoint = fixed.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPoint = raw;
}
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPoint;
}
