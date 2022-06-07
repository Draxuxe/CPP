/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:13:28 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 16:48:26 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat boss(1, "Boss");
	Bureaucrat stagiaire;
	Bureaucrat employé(50, "Patrick");
	Bureaucrat error(0, "Error");
	Form contrat("contrat", 1, 150);

	std::cout << contrat << std::endl;

	boss.signForm(contrat);
	stagiaire.signForm(contrat);

	std::cout << boss << std::endl;
	std::cout << stagiaire << std::endl;
	std::cout << employé << std::endl;
	std::cout << error << std::endl;
	boss.Promoted();
	std::cout << boss.getGrade() << std::endl;
	stagiaire.Retrograded();
	std::cout << stagiaire << std::endl;
	return (0);
}