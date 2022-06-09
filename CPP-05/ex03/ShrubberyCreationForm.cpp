/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:11:59 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/08 16:26:12 by lfilloux         ###   ########.fr       */
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

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
	return ;
}

void ShrubberyCreationForm::getExecute() const
{
	std::cout << "test" << std::endl;
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