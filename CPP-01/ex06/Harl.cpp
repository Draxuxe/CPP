/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:05:29 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/19 12:27:12 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl ()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void Harl::debug(void)
{
	std::cout << "[Debug]" << std::endl << "Hi! I'm a debug message." << std::endl << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl << "Hi! I'm here to give info." << std::endl << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl << "Hi! I'm a warning. Watch out!" << std::endl << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl << "Error 404.." << std::endl;
}

void Harl::printComplaints(int level)
{
	void (Harl::* functions[4]) (void);
	{
		functions[0] = &Harl::debug,
		functions[1] = &Harl::info,
		functions[2] = &Harl::warning,
		functions[3] = &Harl::error;
	};

	while (level < 4)
		(this->*functions[level++]) ();
}

void Harl::complain(std::string level)
{
	int	i;

	std::string levels[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Harl::* functions[4]) (void);
	{
		functions[0] = &Harl::debug,
		functions[1] = &Harl::info,
		functions[2] = &Harl::warning,
		functions[3] = &Harl::error;
	};

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break ;
		i ++;
	}

	try {
		if (i == 4)
			throw (level);
		switch (i)
		{
			case 0:
				(this->*functions[0]) ();
			case 1:
				(this->*functions[1]) ();
			case 2:
				(this->*functions[2]) ();
			case 3:
				(this->*functions[3]) ();
				break ;
			default:
				break;
		}
	}
	catch (std::string level)
	{
		std::cout << "Sorry, " << level << " isn't an existing level of error." << std::endl;
		return ;
	}
}