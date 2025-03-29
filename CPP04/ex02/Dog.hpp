/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:34:03 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/21 17:03:23 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog(Dog const & dog);
        Dog & operator=(Dog const & dog);
        
        void makeSound() const;
        void setDogIdea(std::string idea);
        void printIdeas(int index);
        void printBrainAddress();
};

#endif
