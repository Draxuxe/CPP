/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:13:28 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 19:27:17 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <sys/time.h>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main()
{
	//Form a // Can't initialized cause it's an abstraact class
	Bureaucrat boss(1, "Boss");
	Bureaucrat stagiaire;
	PresidentialPardonForm contrat("contrat");
	PresidentialPardonForm a("a");
	RobotomyRequestForm robot("robot");
	ShrubberyCreationForm tree("garden");

	srand ((unsigned int)time(0));

	std::cout << contrat << std::endl;
	std::cout << a << std::endl;

	a = contrat;

	std::cout << a << std::endl;

	boss.signForm(robot);
	boss.signForm(tree);
	stagiaire.signForm(contrat);

	robot.execute(boss);
	tree.execute(boss);

	stagiaire.executeForm(contrat);
	boss.executeForm(contrat);

	std::cout << contrat << std::endl;

	std::cout << boss << std::endl;
	std::cout << stagiaire << std::endl;
	/*
		boss.Promoted();
		std::cout << boss.getGrade() << std::endl; // both will thro an error
		stagiaire.Retrograded();
		std::cout << stagiaire << std::endl;
	*/
	return (0);
}