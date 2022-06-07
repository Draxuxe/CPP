/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:10:08 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 10:45:26 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

std::string const &ICharacter::getName() const
{
	return (_name);
}

void ICharacter::use(int idx, ICharacter& target)
{
	(void) idx;
	std::cout << "test " << target.getName() << std::endl;
	return ;
}

ICharacter *&ICharacter::operator=(Character const &chara)
{
	this->_name = chara._name;
	std::cout << "ICharacter operator constructor called." << std::endl;
	return (this);
}