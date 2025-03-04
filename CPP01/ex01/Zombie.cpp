/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:16:07 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/04 20:17:24 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie is born!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is dead" << std::endl;
}

void Zombie::announce()
{
    std::cout << getName() <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string setName)
{
    this->name = setName;
}

std::string Zombie::getName()
{
    return this->name;
}