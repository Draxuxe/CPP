/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:52:32 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 10:33:33 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "";
	std::cout << "AMateria constructor called." << std::endl;
	return ;
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
	std::cout << "AMateria string constructor called." << std::endl;
	return ;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called." << std::endl;
	return ;
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use (ICharacter &target)
{
	if (_type == "Ice")
		std::cout << "* shoots an ice bolt at " << target.name << std::endl;
	else if (_type == "Cure")
		std::cout << "* heals " << target.name << "'s wounds." << std::endl;
	return ;
}