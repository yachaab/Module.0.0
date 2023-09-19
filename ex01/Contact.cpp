/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:55:02 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/17 08:55:07 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

Contact Contact::setter(string fN, string lN, string nN, string pN, string dS)
{
	Contact contact;

	contact.firstName		=	fN;
	contact.lastName		=	lN;
	contact.nickName		=	nN;
	contact.phoneNumber		=	pN;
	contact.darkSecret		=	dS;
	return (contact);
}

string stringResize(string str)
{
	if (str.length() > 10)
	{
		string newStr	=	str;
		newStr.resize(10);
		newStr.at(9)	=	'.';
		return (newStr);
	}
	return (str);
}

void Contact::getContactAsTable()
{
	cout << std::setfill(' ') << std::right << '|' << std::setw(10) << stringResize(firstName)
		<< '|' << std::setw(10) << stringResize(lastName) << '|' << std::setw(10) << stringResize(nickName) << '|' << std::endl;
}

void Contact::getContactDetails()
{
	cout << "First Name: "		<< firstName	<< '\n';
	cout << "Last Name: "		<< lastName		<< '\n';
	cout << "Nick Name: "		<< nickName		<< '\n';
	cout << "Phone Number: "	<< phoneNumber	<< '\n';
	cout << "Darkest Secret: "	<< darkSecret	<< '\n';
}
