/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:57:52 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/16 23:50:13 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ~ClapTrap();

        ClapTrap &operator=(const ClapTrap &other);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    };

#endif
