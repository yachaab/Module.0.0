/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:56:44 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/17 08:56:46 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include "Phonebook.h"

PhoneBook::PhoneBook() : index (0) {}
PhoneBook::~PhoneBook(){}

int PhoneBook::valid()
{
	cout << "What would you like to do 'ADD, SEARCH, EXIT' -> ";
    string str;

    if (!std::getline(cin, str))
		std::exit(1);
    else if (str == "ADD")
        return (0);
    else if (str == "SEARCH")
        return (1);
    else if (str == "EXIT")
        return (2);
    else
        return (3);
}

void PhoneBook::add()
{
	system("clear");
	cout << "Welcome to ADD contact interface\n";
	Contact mainContact;
	if (index > 1)
		index = 1;
	else
		index += 1;
	string firstName	(legitString("First Name: "));
	string lastName		(legitString("last Name: "));
	string nickName		(legitString("Nick Name: "));
	string phoneNumber	(legitString("Phone number: "));
	string darkSecret	(legitString("Darkest Secret: "));
	contact[index - 1] = mainContact.setter(firstName, lastName, nickName, phoneNumber, darkSecret);
}

void drawTable()
{
	cout << std::internal		<< std::setfill('-')		<< std::setw(46)	<< '\n';
	cout << std::setfill(' ')	<< std::right << '|'		<< std::setw(10)	<< "Index     " << '|'
		 << std::setw(10)		<< "First Name" << '|'		<< std::setw(10)
		 << "Last Name "		<< '|' << std::setw(10)		<< "Nick Name "		<< '|' << '\n';
	cout <<  std::internal 		<< std::setfill('-') 		<< std::setw(46)	<< '\n';
}

void PhoneBook::search()
{
	drawTable();
	for (int i = 0; i <= 7; i++)
	{
		cout <<	std::setfill(' ')	<<	std::right	<< '|'	<< std::setw(10) <<	i;
		contact[i].getContactAsTable();
	}
	cout <<	std::internal	<<	std::setfill('-')	<< std::setw(46)	<< '\n';

	tryThisAgain:
		cout << "Enter contact id between 0 - 7: ";
		string input;
		std::getline(cin, input);
		if (cin.eof())
			std::exit(1);
		if (input.length() != 1)
			goto tryThisAgain;
		if (input.at(0) < 48 || input.at(0) > 55)
			goto tryThisAgain;
	int id (input.at(0) - 48);
	if (id < index)
		contact[id].getContactDetails();
	else
		cout << "No contact record" << std::endl;
}
