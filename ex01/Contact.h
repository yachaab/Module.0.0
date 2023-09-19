/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:56:24 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/17 08:56:27 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <limits>
#include <cstring>
#include <iomanip>
#define string std::string
#define cout std::cout
#define cin std::cin

class Contact
{
private:
	string  firstName;
    string  lastName;
    string  nickName;
    string  phoneNumber;
    string  darkSecret;
public:
	Contact setter(string fN, string lN, string nN, string pN, string dS);
	void getContactAsTable();
	void getContactDetails();
};

#endif