/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:22:27 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 09:32:31 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "AAnimal";
	std::cout << "AAnimal constructor called." << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &animal) : type(animal.type)
{
	std::cout << "Copy Aanimal constructor called." << std::endl;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}

std::string AAnimal::getType() const
{
	return (type);
}

void AAnimal::makeSound() const
{
	std::cout << "I don't know what I am. What sound should I make?" << std::endl;
	return ;
}

AAnimal &AAnimal::operator= (const AAnimal &animal)
{
	if (this == &animal)
		return (*this);
	std::cout << "Animal copy assignement constructor called." << std::endl;
	type = animal.type;
	return (*this);
}
