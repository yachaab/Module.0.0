/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:57:23 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/17 08:57:25 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void stringToUpper(std::string str)
{
	char c (0);

	for (int i = 0; str[i]; i++)
	{
		c = std::toupper(str[i]);
		std::cout << c;
	}
}

int	main(int argc, char *argv[])
{
	switch (argc)
	{
	case 1:
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		break;
	default:
		for (int i = 1; i < argc; i++)
			stringToUpper(argv[i]);
		std::cout << std::endl;
		break;
	}
	return (0);
}

