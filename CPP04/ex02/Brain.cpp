/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:31:20 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/21 16:56:00 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const & brain)
{
    *this = brain;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & brain)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = brain.ideas[i];
        }
    }
    return *this;
}

void Brain::setIdea(std::string idea) 
{
    for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

void Brain::printIdeas(int index)
{
    if (index < 0 || index > 99)
		return;
	for (int j = 0; j < index; j++)
		std::cout << j + 1 << " Idea : " << this->ideas[j] << std::endl;
}