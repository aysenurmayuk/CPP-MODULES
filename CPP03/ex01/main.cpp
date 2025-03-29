/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:57:57 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/19 16:20:35 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
    scav.takeDamage(5);
    scav.beRepaired(3);
    
	return 0;
}