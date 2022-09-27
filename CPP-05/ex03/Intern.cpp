/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:43:15 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/26 18:13:39 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern ()
{
	this->function[0] = &Intern::RobotomyRequest;
	this->function[1] = &Intern::PresidentialPardon;
	this->function[2] = &Intern::ShrubberyCreation;
	std::cout << "Intern constructor called." << std::endl;
	return ;
}

Intern::Intern (const Intern &intern)
{
	std::cout << "Intern copy constructor called" << std::endl;
	this->function[0] = intern.function[0];
	this->function[1] = intern.function[1];
	this->function[2] = intern.function[2];
	return ;
}

Intern::~Intern ()
{
	std::cout << "Intern destructor called." << std::endl;
	return ;
}

Intern &Intern::operator= (const Intern &intern)
{
	if (this == &intern)
		return (*this);
	std::cout << "Intern copy operator called." << std::endl;
	for (int i = 0; i < 3; i ++)
		this->function[i] = intern.function[i];
	return (*this);
}

Form *Intern::makeForm (std::string formName, std::string bureaucrat)
{
	std::string tab[3];
	int i;

	tab[0] = "robotomy request";
	tab[1] = "presidential pardon";
	tab[2] = "shrubbery creation";
	i = -1;
	while (++i < 3)
	{
		if (tab[i] == formName)
		{
			Form *form = (this->*function[i])(bureaucrat);
			return (form);
		}
	}
	if (i >= 3)
		throw Intern::UnrecognizedForm();
	return (NULL);
}

Form *Intern::RobotomyRequest(std::string formName)
{
	Form *form = new RobotomyRequestForm(formName);
	std::cout << "Intern creates " << formName << std::endl;
	return (form);
}

Form *Intern::PresidentialPardon(std::string formName)
{
	Form *form = new PresidentialPardonForm(formName);
	std::cout << "Intern creates " << formName << std::endl;
	return (form);
}

Form *Intern::ShrubberyCreation(std::string formName)
{
	Form *form = new ShrubberyCreationForm(formName);
	std::cout << "Intern creates " << formName << std::endl;
	return (form);
}

const char *Intern::UnrecognizedForm::what () const throw()
{
	return ("This Form doesn't exist. I am Sorry.");
}