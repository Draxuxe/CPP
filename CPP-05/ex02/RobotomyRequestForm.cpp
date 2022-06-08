/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:12:04 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/08 16:05:21 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form ("Somewhere", 72, 45)
{
	std::cout << "RobotomyRequestForm constructor called." << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form (target, 72, 45)
{
	std::cout << "RobotomyRequestForm name constructor called." << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called." << std::endl;
	return ;
}

void RobotomyRequestForm::getExecute() const
{
	std::cout << "Bzzzzzz Bzzzzzz *drill noises* ";
	if (rand() % 2) // tjrs meme resultat
		std::cout << getName() << " has been robotomised." << std::endl;
	else
		std::cout << getName() << " is a failure. He wasn't robotomised." << std::endl;
	return ;
}