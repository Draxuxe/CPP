/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:52:32 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 10:24:21 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie (std::string name)
{
	z_name = name;
	std::cout << z_name << " is now back alive!" << std::endl;
	return ;
}

Zombie::~Zombie ()
{
	std::cout << z_name << " is now dead for sure!" << std::endl;
	return ;
}

void Zombie::announce ()
{
	std::cout << z_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
