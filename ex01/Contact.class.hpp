/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:13:06 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/15 14:04:15 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact
{
private:
	// Member attributes
	std::string const _first_name;
	std::string const _last_name;
	std::string const _nickname;
	std::string const _phone_number;
	std::string const _darkest_secret;
public:
	Contact();
	// Prototype of the constructor
	Contact(std::string f, std::string l, std::string n, std::string ph, std::string d);
	// Prototype of the destructor
	~Contact();
	// Const before ";" tells that in the function we will never modify the instance's attributes
	// (No assignation inside, like this.first_name = "John Doe")
	void ft_print(void) const;
};

Contact::~Contact()
{
}

#endif