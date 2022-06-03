/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:58:44 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 11:07:10 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap() : _name("Default")
{
	std::cout << "DiamondTrap constructor called." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), _name(name)
{
	std::cout << "DiamondTrap name constructor called." << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
	return ;
}

void DiamondTrap::whoAmI ()
{
	std::cout << "My name is : " << _name << " and my sub-object name is " << ClapTrap::_name << "." << std::endl;
	return ;
}

void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
	return ;
}

void DiamondTrap::displayInfo (std::ostream &out)
{
	out << "NAME : " << _name << " | ENERGIE : " << energie << " | HP : " << hp << " | STATUS : ";
	if (hp > 0)
		out << "Alive.";
	else
		out << "Dead.";
	return ;
}

std::ostream &operator << (std::ostream &out, DiamondTrap& heroe)
{
	heroe.displayInfo(out);
	return (out);
}
