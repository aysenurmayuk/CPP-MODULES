/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:09:44 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/13 18:34:24 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & scavTrap);

        ScavTrap & operator=(ScavTrap const & scavTrap);

        void attack(std::string const & target);
        void guardGate();
};

#endif

