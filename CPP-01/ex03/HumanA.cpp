/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:58:06 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 14:36:36 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA (std::string name, Weapon &weapon) : a_name(name), a_weapon (weapon)
{
	return ;
}

HumanA::~HumanA ()
{
	return ;
}

void HumanA::attack()
{
	std::cout << a_name << " attacks with their " << a_weapon.getType() << std::endl;
}
