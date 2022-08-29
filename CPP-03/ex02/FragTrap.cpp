/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:11:00 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/01 13:26:47 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30)
{
	std::cout << "FragTrap constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap (const FragTrap &fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
	return ;
}

void FragTrap::highFivesGuys ()
{
	std::cout << _name << " ask you to give him a high five :)" << std::endl;
	return ;
}

FragTrap &FragTrap::operator= (const FragTrap &fragtrap)
{
	if (this == &fragtrap)
		return (*this);
	std::cout << "Copy assignement FragTrap constructor called." << std::endl;
	return (*this);
}