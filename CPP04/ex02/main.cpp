/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:33:42 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/29 19:52:44 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {

    //Animal* animal = new Animal();
    {
        std::cout << "----- DOG SCOPE -----" << std::endl;
        
        Dog* j = new Dog();
        Dog* copyj = new Dog(*j);

        std::cout << std::endl;

        std::cout << "Original Dog Brain Address : ";
        j->printBrainAddress();
        std::cout << "Copy Dog Brain Address     : ";
        copyj->printBrainAddress();

        std::cout << std::endl;

        j->setDogIdea("Chasing the cat!");
        copyj->setDogIdea("Sleeping all day!");

        std::cout << "Original Dog's Thoughts Before Copy Modification:" << std::endl;
        j->printIdeas(2);

        std::cout << std::endl;

        std::cout << "Copy Dog's Thoughts After Modification:" << std::endl;
        copyj->printIdeas(2);

        std::cout << std::endl;

        std::cout << "Verifying Original Dog's Thoughts Remain Unchanged:" << std::endl;
        j->printIdeas(2);

        std::cout << std::endl;

        delete copyj;
        delete j;

        std::cout << "----- END OF DOG SCOPE -----" << std::endl;
    }

    std::cout << std::endl;

    {
        std::cout << "----- CAT SCOPE -----" << std::endl;

        Cat* i = new Cat();
        Cat* copyi = new Cat(*i);

        std::cout << std::endl;

        std::cout << "Original Cat Brain Address : ";
        i->printBrainAddress();
        std::cout << "Copy Cat Brain Address     : ";
        copyi->printBrainAddress();

        std::cout << std::endl;

        i->setCatIdea("Playing with yarn!");
        copyi->setCatIdea("Napping on the sofa!");

        std::cout << "Original Cat's Thoughts Before Copy Modification:" << std::endl;
        i->printIdeas(2);

        std::cout << std::endl;

        std::cout << "Copy Cat's Thoughts After Modification:" << std::endl;
        copyi->printIdeas(2);

        std::cout << std::endl;

        std::cout << "Verifying Original Cat's Thoughts Remain Unchanged:" << std::endl;
        i->printIdeas(2);

        std::cout << std::endl;

        delete copyi;
        delete i;

        std::cout << "----- END OF CAT SCOPE -----" << std::endl;
    }

    return 0;
}
