/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:55:45 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/27 15:02:50 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap(100, 50, 20)
{
	std::cout << "ScavTrap constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap (std::string new_name) : ClapTrap(new_name, 100, 50, 20)
{
	std::cout << "ScavTrap name constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap (const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap ()
{
	std::cout << "ScavTrap destructor called." << std::endl;
	return ;
}

void ScavTrap::guardGate ()
{
	std::cout << _name << " is now in Gate Keeper mode. Watch Out!" << std::endl;
}

void ScavTrap::attack (const std::string& target)
{
	if (hp <= 0)
	{
		std::cout << _name << " is dead. He can't do anything.." << std::endl;
		return ;
	}
	else if (energie - 1 < 0)
	{
		std::cout << _name << " energie point are at 0. He is now useless..." << std::endl;
		return ;
	}
	energie -= 1;
	std::cout << _name << " (a ScavTrap) dealt " << dealt << " dmg to " << target << "." << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &scavtrap)
{
	if (this == &scavtrap)
		return (*this);
	std::cout << "Copy assignement ScavTrap constructor called." << std::endl;
	return (*this);
}