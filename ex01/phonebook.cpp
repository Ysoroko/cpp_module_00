/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:18:41 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/15 14:18:49 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact	ft_add(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Please enter the contact's first name:\n>";
	std::cin >> first_name;
	std::cout << "Please enter the contact's last name:\n>";
	std::cin >> last_name;
	std::cout << "Please enter the contact's nickname:\n>";
	std::cin >> nickname;
	std::cout << "Please enter the contact's phone number:\n>";
	std::cin >> phone_number;
	std::cout << "Please enter the contact's darkest secret:\n>";
	std::cin >> darkest_secret;

	Contact	new_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	return (new_contact);
}

static void	ft_search(void)
{
	return ;
}

int main(void)
{
	std::string		user_command;
	Contact			phonebook[8];
	int				i;

	i = 0;
	while (1)
	{
		std::cout << "Please enter a command (SEARCH / ADD / EXIT)\n>";
		// 
		std::cin >> user_command;
		if (user_command == "EXIT")
			return (0);
		else if (user_command == "ADD")
		{
			if (i >= 8)
				std::cout << "Cannot add more than 8 contacts\n>";
			else
			{
				Contact new_contact = ft_add();
				phonebook[i] = new_contact;
				i++;
			}
		}
		else if (user_command == "SEARCH")
			ft_search();
		else
			std::cout << "Only ADD, SEARCH and EXIT commands are accepted\n";
	}
	return (0);
}