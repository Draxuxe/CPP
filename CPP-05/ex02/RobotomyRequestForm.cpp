/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:12:04 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 15:57:55 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
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

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robot) : Form(robot.getName(), robot.getSignedGrade(), robot.getExecuteGrade())
{
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called." << std::endl;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &rrf)
{
	if (this == &rrf)
		return (*this);
	this->setSigne(rrf.getSigne());
	/*
		Le nom ne peut etre copie il est constant et le grade pour signer et executer sont egaux donc pas besoin
	*/
	std::cout << "RobotomyRequestForm copy operator called." << std::endl;
	return (*this);
}

void RobotomyRequestForm::getExecute() const
{
	std::cout << "Bzzzzzz Bzzzzzz *drill noises* ";
	int x = rand() % 2;
	if (x == 1)
		std::cout << getName() << " has been robotomised." << std::endl;
	else
		std::cout << getName() << " is a failure. He wasn't robotomised." << std::endl;
	return ;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (getSigne() == false)
			throw (false);
		else if (executor.getGrade() > getExecuteGrade())
			throw (executor.getGrade());
	}
	catch (bool e)
	{
		if (e == false)
			std::cout << "This contract wasn't signed." << std::endl;
		return ;
	}
	catch (int e)
	{
		std::cout << executor.getName() << " can't execute this contract." << std::endl;
		return ;
	}
	this->getExecute();
	return ;
}

void RobotomyRequestForm::displayInfo (std::ostream &out)
{
	if (getExecuteGrade() > 150 || getExecuteGrade() < 1 || getSignedGrade() > 150 || getSignedGrade() < 1)
	{
		std::cout << "This Form wasn't created.";
		return ;
	}
	out << "Name : " << getName() << " | Signed : ";
	if (getSigne() == false)
		std::cout << "no";
	else
		std::cout << "yes";
	std::cout << " | SignedGrade : " << getSignedGrade() << " | ExecuteGrade : " << getExecuteGrade();
	return ;
}