/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:16:27 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/29 11:05:15 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact ()
{
	first_name = std::string();
	last_name = std::string();
	nickname = std::string();
	phone_number = std::string();
	secret = std::string();
}

Contact::~Contact ()
{
	return ;
}

void Contact::setName (std::string name)
{
	this->first_name = name;
	return ;
}

void Contact::setLastName (std::string lastName)
{
	this->last_name = lastName;
	return ;
}

void Contact::setNickname (std::string nickname)
{
	this->nickname = nickname;
	return ;
}

void Contact::setNumber (std::string number)
{
	this->phone_number = number;
	return ;
}

void Contact::setSecret (std::string secret)
{
	this->secret = secret;
	return ;
}

std::string Contact::getName ()
{
	return (first_name);
}

std::string Contact::getLastName ()
{
	return (last_name);
}

std::string Contact::getNickname ()
{
	return (nickname);
}

std::string Contact::getNumber ()
{
	return (phone_number);
}

std::string Contact::getSecret ()
{
	return (secret);
}

Contact Contact::fillInfo ()
{
	Contact new_contact = Contact ();
	std::string first;
	std::string last;
	std::string surname;
	std::string num;
	std::string secrets;
	int	i;

	try
	{
		if (std::cin.eof())
			throw (1) ;
		std::cout << "Enter the First_name" << std::endl;
		std::getline (std::cin, first);
		if (first == "\0")
			throw(first);
		std::cout << "Enter the Last_name" << std::endl;
		std::getline (std::cin, last);
		if (last == "\0")
			throw(last);
		std::cout << "Enter the Nickname" << std::endl;
		std::getline (std::cin, surname);
		if (surname == "\0")
			throw(surname);
		std::cout << "Enter the Phone_number" << std::endl;
		std::getline (std::cin, num);
		if (num == "\0")
			throw("error");
		else
		{
			i = 0;
			while (num[i])
			{
				if (std::isdigit(num[i]) == 0)
					throw (num[i]);
				i ++;
			}
		}
		std::cout << "Enter their Darkest Secret!" << std::endl;
		std::getline (std::cin, secrets);
		if (secrets == "\0")
			throw(secrets);
	}
	catch (std:: string err)
	{
		(void) err;
		std::cout << "Cannot have an empty field. Please try again!" << std::endl;
		new_contact = Contact::fillInfo ();
		return (new_contact);
	}
	catch (char c)
	{
		(void) c;
		std::cout << "The Phone_number must be only Numbers. Try again!" << std::endl;
		new_contact = Contact::fillInfo ();
		return (new_contact);
	}
	catch (int i)
	{
		std::cout << "The Phonebook was interrupted." << std::endl;
		exit (i);
	}
	new_contact.setName(first);
	new_contact.setLastName(last);
	new_contact.setNickname(surname);
	new_contact.setNumber(num);
	new_contact.setSecret(secrets);
	return (new_contact);
}

void Contact::printTooLong (std::string s)
{
	int	size;
	int	nb_space;
	int	j;

	size = s.length();
	if (size <= 10)
	{
		nb_space = 10 - size;
		j = -1;
		while (++j < nb_space / 2)
			std::cout << " ";
		std::cout << s;
		j += size;
		while (j++ < 10)
			std::cout << " ";
		std::cout << "|";
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << s[i];
		std::cout << ".|";
	}
}

void Contact::printContact (Contact contact)
{
	printTooLong(contact.first_name);
	printTooLong(contact.last_name);
	printTooLong(contact.phone_number);
	std ::cout << std::endl;
}