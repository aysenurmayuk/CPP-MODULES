/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:35:52 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/21 15:00:24 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &cat);
        Cat &operator = (const Cat &cat);
        void makeSound() const;
};

#endif