/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:19:39 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 14:46:03 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	ideas = new Brain();
	std::cout << "Cat constructor called." << std::endl;
	return ;
}

Cat::Cat (const Cat &cat) : Animal()
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->type = cat.getType();
	this->ideas = new Brain();
	for (int i = 0; i < 100; i ++)
		this->ideas->setIdeas(i, cat.ideas->getIdea(i));
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete ideas;
	return ;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
	return ;
}

Brain *Cat::getBrain()
{
	return (ideas);
}

Cat &Cat::operator=(Cat const &animal)
{
	if (this == &animal)
		return (*this);
	std::cout << "Cat surchaged operator = called." << std::endl;
	this->type = animal.getType();
	*(this->ideas) = *(animal.ideas);
	return (*this);
}

void Cat::printIdeas() const
{
	this->ideas->printMyFirstIdeas();
	return ;
}