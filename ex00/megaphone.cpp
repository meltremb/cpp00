/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:06:51 by meltremb          #+#    #+#             */
/*   Updated: 2023/06/12 11:49:51 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	std::string str1;
	
	if (argc >= 2)
	{
		for (j = 1; j < argc; j++)
		{
			str1 = argv[j];
			for (i = 0; str1[i] != '\0'; i++)
			{
				if (str1[i] >= 'a' && str1[i] <= 'z')
					str1[i] = str1[i] - 32;
			}
			std::cout << str1;
			if (j < argc - 1)
				std::cout << ' ';
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
}