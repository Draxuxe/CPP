/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:58:22 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 11:13:36 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (void)
{
	ScavTrap scav("Louis");
	ClapTrap trap("Real");
	FragTrap fake;
	DiamondTrap test("test");
	{
		DiamondTrap te = test;
		std::cout << te << std::endl;
	}

	std::cout << scav << std::endl;
	std::cout << trap << std::endl;
	std::cout << fake << std::endl;
	std::cout << test << std::endl;
	test.whoAmI();
	test.guardGate();
	test.highFivesGuys();
	test.attack("Me");
	scav.attack("Bob");
	fake.takeDamage(11);
	fake.beRepaired(11);
	trap.attack("Bobby");
	scav.guardGate();
	scav.takeDamage(59);
	scav.beRepaired(59);
	fake.highFivesGuys();
	trap.takeDamage(1);
	std::cout << scav << std::endl;
	std::cout << trap << std::endl;
	std::cout << fake << std::endl;
	std::cout << test << std::endl;
	return (0);
}