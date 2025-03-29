/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:37:17 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/20 15:02:37 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(WrongAnimal const & wrongAnimal);
        WrongAnimal & operator=(WrongAnimal const & wrongAnimal);
        std::string getType() const;
        void makeSound() const;
};

#endif