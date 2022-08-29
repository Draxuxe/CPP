/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:19:39 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 12:22:44 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
	return ;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
	return ;
}

Cat &Cat::operator= (const Cat &cat)
{
	if (this == &cat)
		return (*this);
	std::cout << "Cat surchaged operator called." << std::endl;
	type = cat.type;
	return (*this);
}