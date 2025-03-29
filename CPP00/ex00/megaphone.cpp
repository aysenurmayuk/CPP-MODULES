/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:30:32 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/29 20:00:07 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if(ac == 1)
    {
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            std::cout << (char)toupper(av[i][j]);
        }
    }
    std::cout << std::endl;
}