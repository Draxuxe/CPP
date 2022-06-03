/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:16:17 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/19 15:18:00 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	(void) av;
	if (ac != 1)
	{
		std::cout << "No arguments needed" << std::endl;
		return (1);
	}
	else if (ac == 1)
	{
		std::string line;
		std::string number;
		Phonebook phonebook;

		std::cout << "Choose between those 3 actions:" << std::endl;
		std::cout << "ADD: to add a contact." << std::endl;
		std::cout << "SEARCH: to display a specific conatct." << std::endl;
		std::cout << "EXIT: to shutdown the phonebook!" << std::endl;
		while (1)
		{
			std::cout << "Please enter your command :)" << std::endl;
			std::cout << "> ";
			std::getline (std::cin, line);
			if (std::cin.eof())
				break ;
			else if (line == "ADD")
			{
				Contact contact = Contact::fillInfo ();
				phonebook.Phonebook::addToRepertory (contact);
			}
			else if (line == "SEARCH")
			{
				if (phonebook.count == 0)
				{
					std::cout << "Your repository is empty" << std::endl;
					continue ;
				}
				std::cout << "Choose a number from this list of your contacts" << std::endl;
				phonebook.Phonebook::printList();
				std::getline(std::cin, number);
				phonebook.Phonebook::printContact(number);
			}
			else if (line == "EXIT")
			{
				std::cout << "Shutting down!" << std::endl;
				break ;
			}
			else
				std::cout << "Unknown command, Please retry" << std::endl;
		}
	}
	return (0);
}
