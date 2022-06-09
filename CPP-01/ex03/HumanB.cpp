/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:50:41 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/09 11:22:34 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB (std::string name) : b_name (name)
{
	return ;
}

HumanB::~HumanB ()
{
	return ;
}

void HumanB::setWeapon (Weapon &weapon)
{
	b_weapon = &weapon;
}

void HumanB::attack ()
{
	if (b_weapon)
		std::cout << b_name << " attacks with their " << b_weapon->getType() << std::endl;
	else
		std::cout << b_name << " can't attack he isn't armed." << std::endl;
}
