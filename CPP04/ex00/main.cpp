/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:33:42 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/20 15:13:58 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
  {
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;

		std::cout << "Type Of Dog -> " << j->getType() << " " << std::endl;
		std::cout << "Type Of Cat -> " << i->getType() << " " << std::endl;

		std::cout << std::endl;

		std::cout << "Cat says : ";
		i->makeSound();
		std::cout << "Dog says : ";
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;

		delete meta;
		delete i;
		delete j;
	}
	std::cout << "------------------------------------" << std::endl;
    {
        const WrongAnimal *meta = new WrongAnimal;
		const WrongAnimal *cat = new WrongCat;

		std::cout << std::endl;

		std::cout << "Wrong Animal Type -> " << meta->getType() << std::endl;
		std::cout << "Wrong Cat Type-> " << cat->getType() << std::endl;

		std::cout << std::endl;

		meta->makeSound();
		std::cout << "Wrong Cat says : ";
		cat->makeSound();

		std::cout << std::endl;

		delete meta;
		delete cat;
    }
}