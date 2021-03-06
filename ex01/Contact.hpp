/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:13:06 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/21 09:18:00 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phonebook_main.hpp"

class Contact
{
private:
	// Member attributes
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
public:
	// Prototype of the constructor
	Contact();
	
	// Alternative definition of the constructor:
	//Contact(std::string f, std::string l, std::string n, std::string ph, std::string d);
	
	// Prototype of the destructor
	~Contact();

	void ft_set_values(std::string f, std::string l, std::string n, std::string ph, std::string d);

	// Const before ";" tells that in the function we will never modify the instance's attributes
	// (No assignation inside, like this.first_name = "John Doe")
	void ft_print(void) const;

	std::string	get_first_name() const;
	std::string	get_last_name() const;
	std::string	get_nickname() const;
	std::string	get_phone_number() const;
	std::string	get_darkest_secret() const;
};
#endif