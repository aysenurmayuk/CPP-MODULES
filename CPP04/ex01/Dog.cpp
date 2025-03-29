/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:34:49 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/21 16:52:28 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const & dog) : Animal(dog)
{
    this->brain = new Brain(*dog.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & dog)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &dog)
    {
        Animal::operator=(dog);
        delete this->brain;
        this->brain = new Brain(*dog.brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Hav Hav !" << std::endl;
}

void Dog::setDogIdea(std::string idea)
{
    this->brain->setIdea(idea);
}

void Dog::printIdeas(int index)
{
    this->brain->printIdeas(index);
}

void Dog::printBrainAddress()
{
    std::cout << this->brain << std::endl;
}