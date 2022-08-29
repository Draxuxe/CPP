/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:22:27 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 14:49:40 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal constructor called." << std::endl;
	return ;
}

Animal::Animal(Animal const &animal) : type(animal.type)
{
	std::cout << "Copy animal constructor called." << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "I don't know what I am. What sound should I make?" << std::endl;
	return ;
}

Animal &Animal::operator= (const Animal &animal)
{
	if (this == &animal)
		return (*this);
	std::cout << "Animal copy assignement constructor called." << std::endl;
	type = animal.type;
	return (*this);
}
