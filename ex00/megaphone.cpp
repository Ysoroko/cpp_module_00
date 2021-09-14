/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:55:50 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/14 13:55:51 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string	no_arguments = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string	current_arg;

	if (argc == 1)
	{
		std::cout << no_arguments << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		current_arg = argv[i];
		int	len = current_arg.length();
		for (int j = 0; j < len; j++)
		{
			std::cout << (char)(toupper(current_arg[j]));
		}
	}
	std::cout << std::endl;
	return (0);
}