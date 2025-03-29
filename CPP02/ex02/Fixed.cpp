/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:06:08 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/29 19:57:14 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPointValue = 0;
}

Fixed::Fixed(const int fixed)
{
    this->fixedPointValue = fixed << this->fractionalBits;
}

Fixed::Fixed(const float fixed)
{
    this->fixedPointValue = roundf(fixed * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}
Fixed::~Fixed() {}

float Fixed::toFloat(void) const 
{
    return (float)this->fixedPointValue / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const 
{
    return this->fixedPointValue >> this->fractionalBits;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if(this != &fixed)
        this->fixedPointValue = fixed.fixedPointValue;
    return *this;
}

bool Fixed::operator==(const Fixed &fixed) const 
{
    return this->fixedPointValue == fixed.fixedPointValue; 
}
bool Fixed::operator!=(const Fixed &fixed) const 
{ 
    return this->fixedPointValue != fixed.fixedPointValue; 
}
bool Fixed::operator<=(const Fixed &fixed) const 
{ 
    return this->fixedPointValue <= fixed.fixedPointValue; 
}
bool Fixed::operator>=(const Fixed &fixed) const 
{ 
    return this->fixedPointValue >= fixed.fixedPointValue;
}
bool Fixed::operator<(const Fixed &fixed) const 
{ 
    return this->fixedPointValue < fixed.fixedPointValue;
}
bool Fixed::operator>(const Fixed &fixed) const 
{ 
    return this->fixedPointValue > fixed.fixedPointValue; 
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    Fixed temp;
    temp.fixedPointValue = this->fixedPointValue + fixed.fixedPointValue;
    return temp;
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed temp;
    temp.fixedPointValue = this->fixedPointValue - fixed.fixedPointValue;
    return temp;
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    Fixed temp;
    temp.fixedPointValue = (this->fixedPointValue * fixed.fixedPointValue) >> fractionalBits;
    return temp;
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed temp;
    temp.fixedPointValue = (this->fixedPointValue << fractionalBits) / fixed.fixedPointValue;
    return temp;
}

Fixed& Fixed::operator++() 
{
    ++this->fixedPointValue;
    return *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed tmp = *this;
    ++this->fixedPointValue;
    return tmp;
}

Fixed& Fixed::operator--() 
{
    --this->fixedPointValue;
    return *this;
}

Fixed Fixed::operator--(int) 
{
    Fixed tmp = *this;
    --this->fixedPointValue;
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if(a.toFloat() <= b.toFloat()) 
        return a;
    else
        return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if(a.toFloat() >= b.toFloat()) 
        return a;
    else
        return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
   if(a.toFloat() <= b.toFloat()) 
        return a;
    else
        return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
   if(a.toFloat() >= b.toFloat()) 
        return a;
    else
        return b;

}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

