/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 02:18:12 by ayaarab             #+#    #+#             */
/*   Updated: 2025/07/31 02:18:14 by ayaarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac , char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 1;
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			char *str = av[i];
			for (int j = 0; str[j] ; j++)
			{
				str[j] = std::toupper(str[j]);
			}
			std::cout << str;
		}
		std::cout << "\n";
		return 0;
	}
	
}