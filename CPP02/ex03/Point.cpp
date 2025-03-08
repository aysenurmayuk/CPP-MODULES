/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:18:36 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/04 22:25:55 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0.0f)), y(Fixed(0.0f))
{
	
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y))
{

}

Point::Point(const Point& ref) : x(ref.x), y(ref.y)
{
	
}

Point& Point::operator=(const Point& ref)
{
	if (this == &ref)
		return *this;
	return *this;
}

Point::~Point()
{
	
}

float Point::getX() const
{
	return (this->x.toFloat());
}

float Point::getY() const
{
	return (this->y.toFloat());
}