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
	_type = "None";
	std::cout << "AMateria constructor called." << std::endl;
	return ;
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
	std::cout << "AMateria type constructor called." << std::endl;
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
