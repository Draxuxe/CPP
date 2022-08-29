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
#include "AAnimal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	ideas = new Brain();
	std::cout << "Dog constructor called." << std::endl;
	return ;
}

Dog::Dog(const Dog &dog) : AAnimal()
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = dog.getType();
	this->ideas = new Brain();
	for (int i = 0; i < 100; i ++)
		this->ideas->setIdeas(i, dog.ideas->getIdea(i));
	*this = dog;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete ideas;
	return ;
}

Dog &Dog::operator=(Dog const &animal)
{
	if (this == &animal)
		return (*this);
	std::cout << "Dog surchage operator called." << std::endl;
	this->type = animal.getType();
	*(this->ideas) = *(animal.ideas);
	return (*this);
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

void Dog::printIdeas() const
{
	this->ideas->printMyFirstIdeas();
	return ;
}