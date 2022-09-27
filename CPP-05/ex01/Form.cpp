/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:37:39 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 15:45:50 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

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

Form &Form::operator= (const Form &form)
{
	if (this == &form)
		return (*this);
	//(std::string) this->_name = form.getName(); // Inutile le nom est connstant
	this->signe = form.getSigne();
	this->signedGrade = form.getSignedGrade();
	this->executeGrade = form.getExecuteGrade();
	std::cout << "Form copy operator called" << std::endl;
	return (*this);
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
		if (executeGrade > 150 || signedGrade > 150)
			throw (Form::GradeTooLow());
		else if (executeGrade < 1 || signedGrade < 1)
			throw (Form::GradeTooHigh());
		else if (signe == true)
			std::cout << "This contracts is already signed." << std::endl;
		else if (employe.getGrade() > signedGrade)
			throw (Form::GradeTooLow());
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	return ;
}

const char *Form::GradeTooHigh::what () const throw()
{
	return ("I'm sorry your grade is too high. (< 1)");
}

const char *Form::GradeTooLow::what () const throw()
{
	return ("Your grade is too low to sign or execute this contract.");
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