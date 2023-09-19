/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:56:36 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/17 08:56:37 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include "Phonebook.h"

int legitPhoneNumber(string phoneStr)
{
	if (phoneStr.length() < 10 || phoneStr.length() > 15)
		return (0);
	for (size_t i = 0; i < phoneStr.length(); i++)
	{
		char c = phoneStr[i];
		if (!std::isdigit(c))
			return (0);
	}
	return (1);
}

int	inprintAndWhiteSpace(string str)
{
	if (str.find_first_not_of(32) == string::npos)
		return (0);
	for (size_t i = 0; i < str.length(); i++)
	{
		char c = str[i];
		 if (c < 32 || c > 126)
		 	return (0);
	}
	return (1);
}

string legitString(const char *param)
{
	tryThis:
		cout << param;
		string str;
		std::getline(cin, str);
		if (cin.eof())
			exit(1);
		else if (str.empty() || !inprintAndWhiteSpace(str))
		{
			cout << "Please verify that you have entered the correct information\n";
			goto tryThis;
		}
		else if (!std::strcmp(param, "Phone number: ") && !legitPhoneNumber(str))
		{
			cout << "Phone number must consist of a minimum of 10 digits and a maximum of 15 digits\n";
			goto tryThis;
		}
	return (str);
}

int main()
{
    PhoneBook book;
    while (true)
    {
        switch(book.valid())
        {
            case 0:
                book.add();
                break;
            case 1:
                book.search();
                break;
            case 2:
                std::exit(0);
            default :
                break;
        }
	}
    return (0);
}