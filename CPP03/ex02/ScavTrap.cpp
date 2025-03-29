/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:09:46 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/19 16:26:47 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & scavTrap) : ClapTrap(scavTrap)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & scavTrap)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &scavTrap)
    {
        this->name = scavTrap.name;
        this->hitPoints = scavTrap.hitPoints;
        this->energyPoints = scavTrap.energyPoints;
        this->attackDamage = scavTrap.attackDamage;
    }
    return *this;
}

void ScavTrap::attack(std::string const & target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target 
                  << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " is out of energy!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " has entered Gate Keeper mode!" << std::endl;
}
