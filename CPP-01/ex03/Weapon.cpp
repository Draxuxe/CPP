/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:56:23 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 14:33:23 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (const std::string weapon)
{
	type = weapon;
}

Weapon::~Weapon ()
{
	return ;
}

const std::string &Weapon::getType () const
{
	return (type);
}

void Weapon::setType (const std::string &weapon)
{
	type = weapon;
}