/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:47:41 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 11:50:48 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal(wrongcat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor called." << std::endl;
	return ;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMeow WrongMeow" << std::endl;
	return ;
}

WrongCat &WrongCat::operator= (const WrongCat &wrong)
{
	if (this == &wrong)
		return (*this);
	std::cout << "WrongCat copy assignement constructor called." << std::endl;
	type = wrong.type;
	return (*this);
}