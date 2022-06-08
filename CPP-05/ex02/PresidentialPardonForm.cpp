/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:12:11 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/08 15:19:02 by lfilloux         ###   ########.fr       */
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

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called." << std::endl;
	return ;
}

void PresidentialPardonForm::getExecute() const
{
	std::cout << getName() << " has been excused by Zaphod Beeblebrox." << std::endl;
	return ;
}