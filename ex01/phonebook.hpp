/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:13:06 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/14 15:07:06 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	// Prototype of the constructor
	Contact(std::string f, std::string l, std::string n, std::string ph, std::string d);
	~Contact();
};

// Definition and implementation of the constructor
Contact::Contact(std::string f, std::string l, std::string n, std::string ph, std::string d)
{
	first_name = f;
	last_name = l;
	nickname = n;
	phone_number = ph;
	darkest_secret = d;
}

Contact::~Contact()
{
}

#endif