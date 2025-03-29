/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:31:18 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/21 16:56:09 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        virtual ~Brain();
        Brain(Brain const & brain);
        Brain & operator=(Brain const & brain);

        void setIdea(std::string idea);
        void printIdeas(int index);
};

#endif