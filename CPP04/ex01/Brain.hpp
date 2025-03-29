/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:31:18 by amayuk            #+#    #+#             */
/*   Updated: 2025/03/21 16:52:53 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
        ~Brain();
        
        void setIdea(std::string idea);
        void printIdeas(int index);
};

#endif