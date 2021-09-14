/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:18:41 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/14 15:07:37 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void	ft_add(void)
{
	return ;
}

static void	ft_search(void)
{
	return ;
}

int main(void)
{
	std::string		user_command;

	while (1)
	{
		std::cout << "Please enter the command (SEARCH / ADD / EXIT)\n>";
		std::cin >> user_command;
		if (user_command == "EXIT")
			return (0);
		else if (user_command == "ADD")
			ft_add();
		else if (user_command == "SEARCH")
			ft_search();
		else
			std::cout << "Only ADD, SEARCH and EXIT commands are accepted\n";
	}
	return (0);
}