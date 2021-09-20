/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:55:50 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/20 15:00:49 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	// ::
	// Allows to access the variable within namespace
	// std::string = object "string" in "namespace std" (standard namespace)
	std::string	no_arguments = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string	current_arg;

	if (argc == 1)
	{
		// << 
		// i am "injecting" no_arguments string in std::cout (+ \n at the end)
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
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}