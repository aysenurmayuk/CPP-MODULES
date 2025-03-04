/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:03:15 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/04 20:19:17 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL)
{
    this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
    if (weapon)
        std::cout << name << " attacks with his " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}