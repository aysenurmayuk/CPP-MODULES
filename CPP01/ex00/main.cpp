/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:06:19 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/04 20:06:20 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombiePtr = newZombie("Damon");
    zombiePtr->announce();
    delete zombiePtr;
    randomChump("Stefan");
    return 0;
}