/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:16:37 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/20 16:10:20 by lfilloux         ###   ########.fr       */
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
	while (i < 8 && contacts[i].getName() != "\0")
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
	else if (number[0] == '0' || number[0] == '9' || number[1])
	{
		std::cout << "Choose an existing contact please" << std::endl;
		return ;
	}
	else
	{
		index = (int)number[0] - 49;
		if (contacts[index].getName() == "\0")
			std::cout << "This contacts doesn't exist. Please Try again" << std::endl;
		else
		{
			std::cout << "First Name: " << contacts[index].getName() << std::endl;
			std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
			std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
			std::cout << "Phone Number: " << contacts[index].getNumber() << std::endl;
			std::cout << "Darkest Secret: " << contacts[index].getSecret() << std::endl;
		}
	}
}