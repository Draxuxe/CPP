/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:58:22 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/01 15:47:41 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	ScavTrap scav("Louis");
	ClapTrap trap("Real");
	FragTrap fake;

	std::cout << scav << std::endl;
	std::cout << trap << std::endl;
	std::cout << fake << std::endl;
	scav.attack("Bob");
	fake.takeDamage(11);
	fake.beRepaired(11);
	trap.attack("Bobby");
	scav.guardGate();
	scav.takeDamage(59);
	scav.takeDamage(59);
	scav.beRepaired(59);
	fake.highFivesGuys();
	/*trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.attack("Me");
	trap.attack("Me");
	trap.attack("Me");
	trap.attack("Me");
	trap.takeDamage(100);
	trap.takeDamage(40);
	trap.takeDamage(5);*/
	trap.takeDamage(1);
	std::cout << scav << std::endl;
	std::cout << trap << std::endl;
	std::cout << fake << std::endl;
	return (0);
}