/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:57:55 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/07 16:52:10 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap constructor called" << std::endl;
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
    this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
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



