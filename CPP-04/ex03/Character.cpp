/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:27:32 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 15:13:02 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character() : ICharacter()
{
	//std::cout << "Character constructor called." << std::endl;
	return ;
}

Character::Character(std::string name) : _name(name)
{
	//std::cout << "Character string constructor called." << std::endl;
	return ;
}

Character::~Character()
{
	//std::cout << "Character destructor called." << std::endl;
	for (int i = 0; i < 4; i ++)
	{
		if (materias[i])
			delete materias[i];
	}
	return ;
}

std::string const &Character::getName () const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int i;

	i = 0;
	while (i < 4 && materias[i] != 0)
		i ++;
	if (i < 4 && m)
	{
		materias[i] = m;
		if (m->getType() == "ice")
			std::cout << "An ice has been equiped!" << std::endl;
		else if (m->getType() == "cure")
			std::cout << "A cure has been equiped!" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		if (materias[idx])
			delete materias[idx];
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (materias[idx])
			materias[idx]->use(target);
		else
			std::cout << "Sorry but canno't use this materia." << std::endl;
	}
	else
		std::cout << "Not sure where this materia is stocked." << std::endl;
}

Character &Character::operator=(const Character &chara)
{
	if (this == &chara)
		return (*this);
	this->_name = chara.getName();
	for (int i = 0; i < 4; i ++)
	{
		if (chara.materias[i] != 0)
			this->materias[i] = chara.materias[i];
	}
	//std::cout << "Character copy operator called" << std::endl;
	return (*this);
}