/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:19:46 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 12:22:41 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	return ;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf Ouaf" << std::endl;
	return ;
}