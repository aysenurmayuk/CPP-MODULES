/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:57:55 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/19 16:25:01 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) 
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap constructor called for " << name << std::endl;
}


ClapTrap::ClapTrap(ClapTrap const & clapTrap)
{
    *this = clapTrap;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}


ClapTrap & ClapTrap::operator=(ClapTrap const & clapTrap)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if(this != &clapTrap)
    {
        this->name = clapTrap.name;
        this->hitPoints = clapTrap.hitPoints;
        this->energyPoints = clapTrap.energyPoints;
        this->attackDamage = clapTrap.attackDamage;
    
    }
    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
    }
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}
 

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->hitPoints += amount;
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " be repaired " << amount << " points!" << std::endl;
        
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
    }
}

