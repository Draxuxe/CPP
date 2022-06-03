/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:50:41 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 14:37:28 by lfilloux         ###   ########.fr       */
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
	std::cout << b_name << " attacks with their " << b_weapon->getType() << std::endl;
}
