/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:58:22 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/01 15:36:59 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap bobby ("Bobby");
	ClapTrap claptrap;

	std::cout << bobby << std::endl;
	std::cout << claptrap << std::endl;
	bobby.attack("Bob");
	bobby.takeDamage(11);
	bobby.beRepaired(11);
	claptrap.attack("Bobby");
	claptrap.beRepaired(50);
	claptrap.takeDamage(59);
	claptrap.attack("Ennemy");
	std::cout << bobby << std::endl;
	std::cout << claptrap << std::endl;
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.attack("Me");
	claptrap.takeDamage(100);
	std::cout << bobby << std::endl;
	std::cout << claptrap << std::endl;
	return (0);
}