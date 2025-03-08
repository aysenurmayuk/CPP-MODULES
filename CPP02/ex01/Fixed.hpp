/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:06:06 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/05 20:29:16 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int fixedPoint;
        static const int fractionalBits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int fixed);
        Fixed(const float fixed);
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
