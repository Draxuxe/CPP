/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:43:15 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/09 14:19:33 by lfilloux         ###   ########.fr       */
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
	if (i == 3)
		std::cout << "This form doesn't exist. I'm Sorry." << std::endl;
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