/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:13:30 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 15:20:19 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150)
{
	std::cout << "Bureaucrat name constructor called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(int grade, std::string name)
{
	try
	{
		if (grade < 1 || grade > 150)
			throw (grade);
	}
	catch (int e)
	{
		if (e < 1)
			GradeTooHighException();
		else if (e > 150)
			GradeTooLowException();
		return ;
	}
	_name = name;
	_grade = grade;
	std::cout << "Bureaucrat grade and name constructor called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
	return ;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &brt)
{
	if (this == &brt)
		return (*this);
	this->_name = brt.getName();
	this->_grade = brt.getGrade();
	std::cout << "Bureaucrat copy operator called" << std::endl;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::Promoted ()
{
	try
	{
		if (_grade - 1 < 1)
			throw (_grade);
		_grade -= 1;
	}
	catch (int e)
	{
		GradeTooHighException();
		return ;
	}
}

void Bureaucrat::Retrograded ()
{
	try
	{
		if (_grade + 1 > 150)
			throw (_grade);
		_grade += 1;
	}
	catch (int e)
	{
		GradeTooLowException();
		return ;
	}
}

void Bureaucrat::GradeTooHighException ()
{
	std::cout << "I'm sorry your grade is too high. (< 1)" << std::endl;
	return ;
}

void Bureaucrat::GradeTooLowException ()
{
	std::cout << "I'm sorry your grade is too low. (> 150)" << std::endl;
	return ;
}

void Bureaucrat::displayInfo (std::ostream &out)
{
	if (_name.empty())
	{
		std::cout << "This Bureaucrat wasn't created.";
		return ;
	}
	out << "NAME : " << _name << " | GRADE : " << _grade;
	return ;
}

std::ostream &operator << (std::ostream &out, Bureaucrat& employe)
{
	employe.displayInfo(out);
	return (out);
}
