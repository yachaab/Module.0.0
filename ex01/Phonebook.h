/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:56:53 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/17 08:56:54 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
#define PHONEBOOK_H

class PhoneBook
{
private:
	int index;
	Contact contact[8];
public:
	PhoneBook();
	int valid();
    void add();
    void search();
	~PhoneBook();
};

int		legitPhoneNumber(string phoneStr);
int		inprintAndWhiteSpace(string str);
string	legitString(const char *param);

#endif