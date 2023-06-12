/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:06:51 by meltremb          #+#    #+#             */
/*   Updated: 2023/06/12 12:34:51 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		for (int j = 1; j < argc; j++)
		{
			std::string str;
			str = argv[j];
			for (size_t c = 0; c < str.length(); c++)
				str[c] = toupper(str[c]);
			std::cout << str;
			if (j < argc - 1)
				std::cout << ' ';
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
}