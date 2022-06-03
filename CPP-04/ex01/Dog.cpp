/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:19:46 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 14:37:32 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Brain.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	ideas = new Brain();
	std::cout << "Dog constructor called." << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete ideas;
	return ;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf Ouaf" << std::endl;
	return ;
}

Brain *Dog::getBrain()
{
	return (ideas);
}