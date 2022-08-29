/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:37:39 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/08 15:18:41 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

Form::Form() : _name("Default"), signe(false), signedGrade(150), executeGrade(150)
{
	std::cout << "Form constructor called." << std::endl;
	return ;
}

Form::Form(std::string name, int signeGrade, int execute) : _name(name)
{
	try
	{
		if (signeGrade < 1 || signeGrade > 150)
			throw (signeGrade);
		else if (execute < 1 || execute > 150)
			throw (execute);
	}
	catch(int e)
	{
		if (e < 1)
			std::cout << "The grades required for the contract are too high." << std::endl;
		else if (e > 150)
			std::cout << "The grades required for this contract are too low." << std::endl;
		return ;
	}
	(std::string) _name = name;
	signedGrade = signeGrade;
	executeGrade = execute;
	signe = false;
	std::cout << "Form name and ints constructor called." << std::endl;
	return ;
}

Form::Form(const Form &form) : _name(form._name), signe(form.signe), signedGrade(form.signedGrade), executeGrade(form.executeGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	return ;
}

Form::~Form()
{
	std::cout << "Form destructor called." << std::endl;
	return ;
}

std::string Form::getName() const
{
	return (_name);
}

int Form::getExecuteGrade() const
{
	return (executeGrade);
}

int Form::getSignedGrade() const
{
	return (signedGrade);
}

bool Form::getSigne() const
{
	return (signe);
}

bool Form::beSigned(Bureaucrat &employe)
{
	if (employe.getGrade() <= signedGrade && employe.getGrade() > 0 && signe == false)
		signe = true;
	else if (signe == true)
		return (false);
	else if (employe.getGrade() > signedGrade)
		return (false);
	return (true);
}

void Form::causeRefusal(Bureaucrat &employe)
{
	try
	{
		if (executeGrade > 150 || executeGrade < 1)
			throw (executeGrade);
		else if (signedGrade > 150 || signedGrade < 1)
			throw (signedGrade);
		else if (signe == true)
			std::cout << "This contracts is already signed." << std::endl;
		else if (employe.getGrade() > signedGrade)
			throw (employe.getGrade());
	}
	catch (int e)
	{
		if (e < 1 || e > 150)
			std::cout << "this Form wasn't created." << std::endl;
		else
			GradeTooLowException();
		return ;
	}
	return ;
}

void Form::getExecute() const
{
	return ;
}

void Form::execute(Bureaucrat const &executor) const
{
	try
	{
		if (signe == false)
			throw (false);
		else if (executor.getGrade() > executeGrade)
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

void Form::GradeTooHighException ()
{
	std::cout << "I'm sorry your grade is too high. (< 1)" << std::endl;
	return ;
}

void Form::GradeTooLowException ()
{
	std::cout << "Your grade is too low to sign or execute this contract." << std::endl;
	return ;
}

void Form::displayInfo (std::ostream &out)
{
	if (executeGrade > 150 || executeGrade < 1 || signedGrade > 150 || signedGrade < 1)
	{
		std::cout << "This Form wasn't created.";
		return ;
	}
	out << "Name : " << _name << " | Signed : ";
	if (signe == false)
		std::cout << "no";
	else
		std::cout << "yes";
	std::cout << " | SignedGrade : " << signedGrade << " | ExecuteGrade : " << executeGrade;
	return ;
}

std::ostream &operator << (std::ostream &out, Form& contrat)
{
	contrat.displayInfo(out);
	return (out);
}