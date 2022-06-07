/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:27:32 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 10:30:47 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Character.hpp"

Character::Character()
{
	std::cout << "Character constructor called." << std::endl;
	return ;
}

Character::Character(std::string name)
{
	_name = name;
	std::cout << "Character string constructor called." << std::endl;
	return ;
}

Character::~Character()
{
	std::cout << "Character destructor called." << std::endl;
	return ;
}