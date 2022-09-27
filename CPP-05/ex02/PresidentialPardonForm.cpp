/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:12:11 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 15:51:54 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form ("Somewhere", 25, 5)
{
	std::cout << "PresidentialPardonForm constructor called." << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form (target, 25, 5)
{
	std::cout << "PresidentialPardonForm name constructor called." << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &president) : Form(president.getName(), president.getSignedGrade(), president.getExecuteGrade())
{
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called." << std::endl;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &ppf)
{
	if (this == &ppf)
		return (*this);
	this->setSigne(ppf.getSigne());
	/*
		Le nom ne peut etre copie il est constant et le grade pour signer et executer sont egaux donc pas besoin
	*/
	std::cout << "PresidentialPardonForm copy operator called." << std::endl;
	return (*this);
}

void PresidentialPardonForm::getExecute() const
{
	std::cout << getName() << " has been excused by Zaphod Beeblebrox." << std::endl;
	return ;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
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

void PresidentialPardonForm::displayInfo (std::ostream &out)
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