/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:06:08 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/05 20:27:16 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = value << this->fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = roundf(value * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{   
    *this = fixed;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &fixed)
        this->fixedPoint = fixed.fixedPoint;
    return *this;
}


float Fixed::toFloat(void) const
{
    return (float)this->fixedPoint / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->fixedPoint >> this->fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}