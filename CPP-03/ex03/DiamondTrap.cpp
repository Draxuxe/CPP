/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:58:44 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/27 13:52:07 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

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

DiamondTrap::DiamondTrap( const DiamondTrap &diamondtrap)
{
	_name = diamondtrap._name;
	hp = diamondtrap.hp;
	energie =  diamondtrap.energie;
	dealt =  diamondtrap.dealt;
	std::cout << "DiamondTrap copy constructor is called" << std::endl;
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

void DiamondTrap::displayInfo (std::ostream &out)
{
	out << "NAME : " << _name << " | ENERGIE : " << energie << " | HP : " << hp << " | STATUS : ";
	if (hp > 0)
		out << "Alive.";
	else
		out << "Dead.";
	return ;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &diamontrap)
{
	if (this == &diamontrap)
		return (*this);
	std::cout << "Copy assignement DiamondTrap constructor called." << std::endl;
	_name = diamontrap._name;
	return (*this);
}

std::ostream &operator << (std::ostream &out, DiamondTrap& heroe)
{
	heroe.displayInfo(out);
	return (out);
}
