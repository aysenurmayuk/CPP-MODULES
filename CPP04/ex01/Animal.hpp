/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:30:41 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/21 16:25:00 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &animal);
        Animal &operator=(const Animal &animal);
        
        std::string getType() const;
        virtual void makeSound() const;
};

#endif