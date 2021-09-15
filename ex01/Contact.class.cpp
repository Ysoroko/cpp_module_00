/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:15:03 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/15 11:53:14 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

// Definition and implementation of the constructor
// : first_name(f) assigns value f to first_name attribute
Contact::Contact(std::string f, std::string l, std::string n, std::string ph, std::string d)
	: _first_name(f), _last_name(l), _nickname(n), _phone_number(ph), _darkest_secret(d)
{

}

void Contact::ft_print(void) const
{
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_darkest_secret << std::endl;
}