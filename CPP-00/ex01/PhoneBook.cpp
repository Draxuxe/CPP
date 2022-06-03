/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:16:37 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/01 15:59:35 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

Phonebook::Phonebook ()
{
	count = 0;
}

Phonebook::~Phonebook ()
{
	return ;
}

void Phonebook::addToRepertory (Contact contact)
{
	if (count < MAX_CONTACT)
		contacts[count] = contact;
	else
	{
		count = 0;
		contacts[count] = contact;
	}
	count += 1;
}

void Phonebook::printList ()
{
	int	i;

	i = 0;
	while (i < 8 && contacts[i].first_name != "\0")
	{
		std::cout << (i + 1) << " |";
		contacts[i].printContact(contacts[i]);
		i ++;
	}
}

void Phonebook::printContact (std::string number)
{
	int	index;
	Contact searched;

	if (isdigit(number[0]) == 0)
	{
		std::cout << "Enter a digit please" << std::endl;
		return ;
	}
	else if (number[0] == '0' || number[1])
	{
		std::cout << "Choose an existing contact please" << std::endl;
		return ;
	}
	else
	{
		index = (int)number[0] - 49;
		if (contacts[index].first_name == "\0")
			std::cout << "This contacts doesn't exist. Please Try again" << std::endl;
		else
		{
			std::cout << "First Name: " << contacts[index].first_name << std::endl;
			std::cout << "Last Name: " << contacts[index].last_name << std::endl;
			std::cout << "Nickname: " << contacts[index].nickname << std::endl;
			std::cout << "Phone Number: " << contacts[index].phone_number << std::endl;
			std::cout << "Darkest Secret: " << contacts[index].secret << std::endl;
		}
	}
}