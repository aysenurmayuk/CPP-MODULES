/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:18:38 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/04 22:22:31 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        ~Point();
        Point(const float x, const float y);
        Point(const Point& ref);
        Point& operator=(const Point& ref);
        float getX() const;
        float getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif