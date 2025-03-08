/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:18:46 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/07 14:53:39 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPointValue = 0;
}

Fixed::~Fixed()
{
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

Fixed &Fixed::operator=(const Fixed &fixed)
{
    this->fixedPointValue = fixed.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return this->fixedPointValue > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return this->fixedPointValue < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return this->fixedPointValue >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return this->fixedPointValue <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return this->fixedPointValue == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return this->fixedPointValue != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    Fixed result;

    result.setRawBits(this->fixedPointValue + fixed.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed result;

    result.setRawBits(this->fixedPointValue - fixed.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    Fixed result;

    result.setRawBits((this->fixedPointValue * fixed.getRawBits()) >> this->fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed result;

    result.setRawBits((this->fixedPointValue << this->fractionalBits) / fixed.getRawBits());
    return result;
}

Fixed &Fixed::operator++()
{
    this->fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    operator++();
    return tmp;
}

Fixed &Fixed::operator--()
{
    this->fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    operator--();
    return tmp;
}   

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}

int Fixed::getRawBits(void) const
{
    return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->fixedPointValue / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->fixedPointValue >> this->fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

