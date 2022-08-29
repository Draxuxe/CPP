/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:58:20 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/01 15:42:32 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap () : _name("Default"), hp(10), energie(10), dealt(0)
{
	std::cout << "Constructor has been called." << std::endl;
	return ;
}

ClapTrap::ClapTrap (int _hp, int _energie,  int _dealt) : _name("Default"), hp(_hp), energie(_energie), dealt(_dealt)
{
	std::cout << "Constructor has been called." << std::endl;
	return ;
}

ClapTrap::ClapTrap (std::string name) : _name(name), hp(10), energie(10), dealt(0)
{
	std::cout << "Name constructor has been called." << std::endl;
	return ;
}

ClapTrap::ClapTrap (std::string name, int _hp, int _energie,  int _dealt) : _name(name), hp(_hp), energie(_energie), dealt(_dealt)
{
	std::cout << "Constructor has been called." << std::endl;
	return ;
}

ClapTrap::ClapTrap (const ClapTrap &claptrap) : _name(claptrap._name), hp(claptrap.hp), energie(claptrap.energie), dealt(claptrap.dealt)
{
	std::cout << "ClapTrap Copy constructor called." << std::endl;
	return ;
}

ClapTrap::~ClapTrap ()
{
	std::cout << "Destructor has been called." << std::endl;
	return ;
}

void ClapTrap::takeDamage (unsigned int amount)
{
	hp -= amount;
	if (hp <= 0)
		std::cout << _name << " is dead!" << std::endl;
	else if (hp > 0)
		std::cout << _name << " took " << amount << " dmg, he is now at " << hp << "hp." << std::endl;
	return ;
}

void ClapTrap::beRepaired (unsigned int amount)
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
	hp += amount;
	energie -= 1;
	std::cout << _name << " healed " << amount << " dmg, he is now at " << hp << "hp." << std::endl;
	return ;
}

void ClapTrap::attack (const std::string& target)
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
	std::cout << _name << " dealt " << dealt << " dmg to " << target << "." << std::endl;
	return ;
}

void ClapTrap::displayInfo (std::ostream &out)
{
	out << "NAME : " << _name << " | ENERGIE : " << energie << " | HP : " << hp << " | STATUS : ";
	if (hp > 0)
		out << "Alive.";
	else
		out << "Dead.";
	return ;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &claptrap)
{
	if (this == &claptrap)
		return (*this);
	std::cout << "Copy assignement ClapTrap constructor called." << std::endl;
	_name = claptrap._name;
	hp = claptrap.hp;
	energie = claptrap.energie;
	dealt = claptrap.dealt;
	return (*this);
}

std::ostream &operator << (std::ostream &out, ClapTrap& heroe)
{
	heroe.displayInfo(out);
	return (out);
}
