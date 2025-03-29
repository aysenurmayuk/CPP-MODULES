/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:30:41 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/20 17:09:43 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();  
        Animal(Animal const & animal);
        Animal & operator=(Animal const & animal);
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif
