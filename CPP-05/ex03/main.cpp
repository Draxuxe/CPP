/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:13:28 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/26 18:15:29 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "Form.hpp"

int main()
{
	// Intern Test
	Intern stagiaire;
	Bureaucrat boss(1, "Boss");
	Form *rrf;

	try
	{
		rrf = stagiaire.makeForm("robotomy request", "Bob");
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// ALL OTHER TESTS FROM THE EXECRCISES FROM BEFORE
/*	Bureaucrat boss(1, "Boss");
	Bureaucrat stagiaire;
	PresidentialPardonForm contrat("contrat");
	RobotomyRequestForm robot("robot");
	ShrubberyCreationForm tree("garden");

	srand ((unsigned int)time(0));

	std::cout << contrat << std::endl;

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

		boss.Promoted();
		std::cout << boss.getGrade() << std::endl; // both will thro an error
		stagiaire.Retrograded();
		std::cout << stagiaire << std::endl;
	*/
	return (0);
}