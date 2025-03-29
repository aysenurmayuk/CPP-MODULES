/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:57:57 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/19 16:23:18 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");
    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "---------------------" << std::endl;

    ScavTrap scav("Scavy");
    scav.attack("Target2");
    scav.guardGate();

    std::cout << "---------------------" << std::endl;

    FragTrap frag("Fraggy");
    frag.attack("Target3");
    frag.highFivesGuys();

    return 0;
}