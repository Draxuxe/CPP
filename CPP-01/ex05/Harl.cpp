/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:45:34 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/19 13:33:46 by lfilloux         ###   ########.fr       */
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
	std::cout << "Hi! I'm a debug message." << std::endl;
}

void Harl::info(void)
{
	std::cout << "Hi! I'm here to give info." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Hi! I'm a warning. Watch out!" << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error 404.." << std::endl;
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
				break ;
			case 1:
				(this->*functions[1]) ();
				break ;
			case 2:
				(this->*functions[2]) ();
				break ;
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