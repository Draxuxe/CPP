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

Animal &Cat::operator=(Animal const &animal)
{
	std::cout << "je test" << std::endl;
	(*this).type = animal.getType();
	(*this).ideas = animal.getBrain();
	return (*this);
}