/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:22:31 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/21 16:36:32 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() 
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
    this->brain = new Brain(*cat.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
    if (this != &cat) {
        Animal::operator=(cat);
        delete this->brain;
        this->brain = new Brain(*cat.brain);
    }
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const 
{
    std::cout << "Meoooowww!" << std::endl;
}

void Cat::setCatIdea(std::string idea) 
{
    this->brain->setIdea(idea);
}

void Cat::printIdeas(int index)  
{
    brain->printIdeas(index);
}

void Cat::printBrainAddress() 
{
    std::cout << this->brain << std::endl;
}