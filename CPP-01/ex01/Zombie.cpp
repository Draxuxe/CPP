/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:04:08 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 11:20:09 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie ()
{
	z_name = std::string();
	std::cout << "A new zombie has appeared!" << std::endl;
}

Zombie::Zombie (std::string name)
{
	z_name = name;
	std::cout << z_name << " is now back alive!" << std::endl;
}

Zombie::~Zombie ()
{
	std::cout << z_name << " is now dead for sure!" << std::endl;
}

void Zombie::announce ()
{
	std::cout << z_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName (std::string name)
{
	z_name = name;
}
