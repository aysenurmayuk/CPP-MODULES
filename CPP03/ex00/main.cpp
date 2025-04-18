/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:57:57 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/19 16:28:03 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("Clappy");
    ClapTrap clapTrap2(clapTrap); 
    ClapTrap clapTrap3; 
    clapTrap3 = clapTrap; 
    
    std::cout << std::endl;
    
    clapTrap.attack("enemy");
    clapTrap.takeDamage(5);  
    clapTrap.beRepaired(5); 
    clapTrap.attack("enemy"); 

    return 0;
}
