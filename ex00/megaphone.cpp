/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:06:51 by meltremb          #+#    #+#             */
/*   Updated: 2023/06/12 12:19:35 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		std::string str1;
		for (int j = 1; j < argc; j++)
		{
			str1 = argv[j];
			std::string copy;
			for (int i = 0; argv[i]; i++)
				copy = argv[i];
			for (size_t c = 0; c < copy.length(); c++)
				copy[c] = toupper(copy[c]);
			std::cout << copy;
			if (j < argc - 1)
				std::cout << ' ';
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
}