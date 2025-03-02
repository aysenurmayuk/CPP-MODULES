/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:37:30 by amayuk            #+#    #+#             */
/*   Updated: 2025/02/27 15:29:14 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Utils.hpp"
#include "Contact.hpp"

class PhoneBook
{
  private:
    Contact contacts[8];
  public:
      void addContact();
      void searchContact();
      void exit();
      void checkIndex(); 
      std::string formatText(std::string text);
};

#endif