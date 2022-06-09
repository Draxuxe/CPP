/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:13:28 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/09 14:01:59 by lfilloux         ###   ########.fr       */
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
	Form *rrf;

	rrf = stagiaire.makeForm("presidential pardon", "Bob");
	rrf->getExecute();

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