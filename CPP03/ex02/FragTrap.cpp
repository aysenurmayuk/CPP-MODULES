/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:14:19 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/16 23:57:36 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
    this->name = "FragTrap";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & fragTrap) : ClapTrap(fragTrap)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & fragTrap)
{
    std::cout << "FragTrap " << this->name << " assignation operator called" << std::endl;
    if(this != &fragTrap)
    {
        this->name = fragTrap.name;
        this->hitPoints = fragTrap.hitPoints;
        this->energyPoints = fragTrap.energyPoints;
        this->attackDamage = fragTrap.attackDamage;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " high fives guys!" << std::endl;
}