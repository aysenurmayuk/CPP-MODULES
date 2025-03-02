/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixec.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:06:06 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/02 00:10:40 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int value;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        ~Fixed();
        Fixed &operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
