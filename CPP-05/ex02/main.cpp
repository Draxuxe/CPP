/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:13:28 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/08 16:25:51 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat boss(1, "Boss");
	Bureaucrat stagiaire;
	PresidentialPardonForm contrat("contrat");
	RobotomyRequestForm robot("robot");
	ShrubberyCreationForm tree("garden");
	
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
	/*
		boss.Promoted();
		std::cout << boss.getGrade() << std::endl; // both will thro an error
		stagiaire.Retrograded();
		std::cout << stagiaire << std::endl;
	*/
	return (0);
}