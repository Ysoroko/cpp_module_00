/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:44:37 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/17 11:04:24 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{

}

Phonebook::~Phonebook()
{
	
}

// Returns a copy of phonebook[i] (values modified inside won't modify the class)
Contact Phonebook::get_contact(int i)
{
	return phonebook[i];
}

void	Phonebook::create_new_contact(int i,
	std::string f, std::string l, std::string n, std::string ph, std::string d)
{
	phonebook[i].ft_set_values(f, l, n, ph, d);
}