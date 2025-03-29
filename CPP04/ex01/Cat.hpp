/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:35:52 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/21 16:46:13 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brain;

    public:
        Cat();
        ~Cat();
        Cat(const Cat &cat);
        Cat & operator=(const Cat &cat);
        
        void makeSound() const;
        void setCatIdea(std::string idea);
        void printIdeas(int index);
        void printBrainAddress();
    };

#endif