/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:11:59 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 16:07:21 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form ("Somewhere", 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called." << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form (target, 145, 137)
{
	std::cout << "ShrubberyCreationForm name constructor called." << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrub) : Form(shrub.getName(), shrub.getSignedGrade(), shrub.getExecuteGrade())
{
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &scf)
{
	if (this == &scf)
		return (*this);
	this->setSigne(scf.getSigne());
	/*
		Le nom ne peut etre copie il est constant et le grade pour signer et executer sont egaux donc pas besoin
	*/
	std::cout << "ShrubberyCreationForm copy operator called." << std::endl;
	return (*this);
}

void ShrubberyCreationForm::getExecute() const
{
	std::ofstream output_file(getName() + "_shrubbery");
	if (!output_file)
	{
		std::cout << "An error has occured" << std::endl;
		return ;
	}
	output_file << "    _____    " << std::endl;
	output_file << "   / *   \\   "<< std::endl;
	output_file << "  /    *  \\  " << std::endl;
	output_file << " |  *      |  " << std::endl;
	output_file << " |     *   |  " << std::endl;
	output_file << "  \\ *     /   "<< std::endl;
	output_file << "   \\   * /  " << std::endl;
	output_file << "    \\ _ /  " << std::endl;
	output_file << "     | |    " << std::endl;
	output_file << "    _| |_   " << std::endl;
	output_file << "   |     |  " << std::endl;
	output_file << "   |_____|   " << std::endl;
	output_file.close();
	return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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

void ShrubberyCreationForm::displayInfo (std::ostream &out)
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
