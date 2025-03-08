/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:18:30 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/04 22:18:31 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(4.64f, 2.34);
	Point b(5.38f, 0.56);
	Point c(8.58f, 1.42);

	Point p(4.70f, 1.24f);
	if (bsp(a, b, c, p))
		std::cout << "True!" << std::endl;
	else
		std::cout << "False!" << std::endl;
	return 0;
}