/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:16:04 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/04 20:16:06 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int count = 5;
    Zombie* zombie = zombieHorde(count, "Damon");
    for (int i = 0; i < count; i++)
    {
        zombie[i].announce();
    }
    delete [] zombie;
}